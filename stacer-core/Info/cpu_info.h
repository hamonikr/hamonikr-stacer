#ifndef CPUINFO_H
#define CPUINFO_H

#include <QDebug>
#include <QVector>

#include "Utils/file_util.h"

#define PROC_CPUINFO "/proc/cpuinfo"
#define PROC_LOADAVG "/proc/loadavg"
#define PROC_STAT    "/proc/stat"
#define LSCPU_COMMAND "LANG=nl_NL.UTF-8 lscpu"
#define CPU_SPEED_COMMAND "LANG=nl_NL.UTF-8 journalctl --boot | grep 'kernel: tsc: Detected' -i | awk '{print $8}' | tail -1"
#define CPU_CORE_COUNT "LANG=nl_NL.UTF-8 lscpu | grep -E '^Core' | awk '{print $4}'"
#define CPU_THREAD_COUNT "LANG=nl_NL.UTF-8 lscpu | grep -E '^CPU\\(' | awk '{print $2}' | head -1"

#include "stacer-core_global.h"

class STACERCORESHARED_EXPORT CpuInfo
{
public:
    quint8 getCpuCoreCount() const;
    QList<int> getCpuPercents() const;
    QList<double> getLoadAvgs() const;

private:
    int getCpuPercent(const QList<double> &cpuTimes, const int &processor = 0) const;
};

#endif // CPUINFO_H
