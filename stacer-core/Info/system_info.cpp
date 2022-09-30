#include "system_info.h"

#include <QObject>

SystemInfo::SystemInfo()
{
    QString unknown(QObject::tr("Unknown"));
    QString model = nullptr;
    QString speed = nullptr;
    QString cpuspeed_tsc = nullptr;
    QString cpu_core_count = nullptr;
    QString cpu_thread_count = nullptr;
    
    try{
        QStringList lines = CommandUtil::exec("bash",{"-c", LSCPU_COMMAND}).split('\n');  //run command in English language (guaratee same behaviour across languages)
        // CPU Speed from kernel log with tsc
        //  ref : https://stackoverflow.com/questions/51919219/determine-tsc-frequency-on-linux
        QString cpuspeed_tsc = CommandUtil::exec("bash",{"-c", CPU_SPEED_COMMAND});

        QRegExp regexp("\\s+");
        QString space(" ");

        auto filterModel = lines.filter(QRegExp("^Model name"));
        QString modelLine = filterModel.isEmpty() ? "error missing model:error missing model" : filterModel.first();
        auto filterSpeed = lines.filter(QRegExp("^CPU max MHz"));
        QString speedLine = "error:0.0";
        if (filterSpeed.isEmpty())
        {
            // fallback to CPU MHz
            filterSpeed = lines.filter(QRegExp("^CPU MHz"));
            speedLine = filterSpeed.isEmpty() ? speedLine : filterSpeed.first();
        }

        model = modelLine.split(":").last();
        speed = speedLine.split(":").last();

        model = model.contains('@') ? model.split("@").first() : model; // intel : AMD

        if (cpuspeed_tsc.isEmpty()) 
        {
            speed = QString::number(speed.toDouble()/1000.0) + " GHz";
        }
        else 
        {
            speed = QString::number(cpuspeed_tsc.toDouble()/1000.0, 'f', 2) + " GHz";            
        }
        
        this->cpuModel = model.trimmed().replace(regexp, space);
        this->cpuSpeed = speed.trimmed().replace(regexp, space);
    } catch(QString &ex) {
        this->cpuModel = unknown;
        this->cpuSpeed = unknown;
    }

    CpuInfo ci;
    // Get real cpu core info from lscpu
    cpu_core_count = CommandUtil::exec("bash",{"-c", CPU_CORE_COUNT});    
    cpu_thread_count = CommandUtil::exec("bash",{"-c", CPU_THREAD_COUNT});

    if (! cpu_thread_count.isEmpty()) 
    {
        this->cpuCore = cpu_core_count + " (" + cpu_thread_count + " Thread)";
    } 
    else 
    {
        this->cpuCore = QString::number(ci.getCpuCoreCount());
    }
    
    // get username
    QString name = qgetenv("USER");

    if (name.isEmpty())
        name = qgetenv("USERNAME");

    try {
        if (name.isEmpty())
            name = CommandUtil::exec("whoami").trimmed();
    } catch (const QString &ex) {
        qCritical() << ex;
    }

   this->username = name;
}

QString SystemInfo::getUsername() const
{
    return username;
}

QString SystemInfo::getHostname() const
{
    return QSysInfo::machineHostName();
}

QStringList SystemInfo::getUserList() const
{
    QStringList passwdUsers = FileUtil::readListFromFile("/etc/passwd");
    QStringList users;

    for(QString &row: passwdUsers) {
        users.append(row.split(":").at(0));
    }

    return users;
}

QStringList SystemInfo::getGroupList() const
{
    QStringList groupFile = FileUtil::readListFromFile("/etc/group");
    QStringList groups;

    for(QString &row: groupFile) {
        groups.append(row.split(":").at(0));
    }

    return groups;
}

QString SystemInfo::getPlatform() const
{
    return QString("%1 %2")
            .arg(QSysInfo::kernelType())
            .arg(QSysInfo::currentCpuArchitecture());
}

QString SystemInfo::getDistribution() const
{
    return QSysInfo::prettyProductName();
}

QString SystemInfo::getKernel() const
{
    return QSysInfo::kernelVersion();
}

QString SystemInfo::getCpuModel() const
{
    return this->cpuModel;
}

QString SystemInfo::getCpuSpeed() const
{
    return this->cpuSpeed;
}

QString SystemInfo::getCpuCore() const
{
    return this->cpuCore;
}

QFileInfoList SystemInfo::getCrashReports() const
{
    QDir reports("/var/crash");

    return reports.entryInfoList(QDir::Files);
}

QFileInfoList SystemInfo::getAppLogs() const
{
    QDir logs("/var/log");

    return logs.entryInfoList(QDir::Files | QDir::Dirs | QDir::NoDotAndDotDot);
}

QFileInfoList SystemInfo::getAppCaches() const
{
    QString homePath = QStandardPaths::writableLocation(QStandardPaths::HomeLocation);

    QDir caches(homePath + "/.cache");

    return caches.entryInfoList(QDir::Files | QDir::Dirs | QDir::NoDotAndDotDot);
}
