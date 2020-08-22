#include "disk_info.h"
#include <QDebug>

QList<Disk*> DiskInfo::getDisks() const
{
    return disks;
}

void DiskInfo::updateDiskInfo()
{
    qDeleteAll(disks);
    disks.clear();

    QList<QStorageInfo> storageInfoList = QStorageInfo::mountedVolumes();

    for(const QStorageInfo &info: storageInfoList) {
        if (info.isValid()) {
            Disk *disk = new Disk();
            disk->name = info.displayName();
            disk->device = info.device();
            disk->size = info.bytesTotal();
            disk->used = info.bytesTotal() - info.bytesFree();
            disk->free = info.bytesFree();
            disk->fileSystemType = info.fileSystemType();

            disks << disk;
        }
    }
}

QList<QString> DiskInfo::devices()
{
    QSet<QString> set;
    for(const QStorageInfo &info: QStorageInfo::mountedVolumes()) {
        if (info.isValid()) set.insert(info.device());
    }

    return set.toList();
}

DiskInfo::~DiskInfo()
{
    qDeleteAll(disks);
}

QList<QString> DiskInfo::fileSystemTypes()
{
    QSet<QString> set;
    for(const QStorageInfo &info: QStorageInfo::mountedVolumes()) {
        if (info.isValid()) set.insert(info.fileSystemType());
    }

    return set.toList();
}

QList<quint64> DiskInfo::getDiskIO() const
{
    static QString diskName = getDiskName();

    QList<quint64> diskReadWrite;

    QStringList diskStat = FileUtil::readStringFromFile(QString("/sys/block/%1/stat").arg(diskName))
            .trimmed()
            .split(QRegExp("\\s+"));

    if (diskStat.count() > 7) {
        diskReadWrite.append(diskStat.at(2).toLongLong() * 512);
        diskReadWrite.append(diskStat.at(6).toLongLong() * 512);
    }

    return diskReadWrite;
}

QString DiskInfo::getDiskName() const
{
    QDir blocks("/sys/block");

    for (const QFileInfo entryInfo : blocks.entryInfoList(QDir::AllEntries | QDir::NoDotAndDotDot)) {
        if (QFile::exists(QString("%1/device").arg(entryInfo.absoluteFilePath()))) {
            return entryInfo.baseName();
        }
    }
    return QString();
}
