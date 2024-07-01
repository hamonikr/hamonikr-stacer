#include "format_util.h"

#include <QString>

#define formatUnit(v, u, t) QString().asprintf("%.1f %s", ((double) v / (double) u), t)

QString FormatUtil::formatBytes(const quint64 &bytes)
{
    const quint64 KIBI = 1024;
    const quint64 MEBI = 1024 * KIBI;
    const quint64 GIBI = 1024 * MEBI;
    const quint64 TEBI = 1024 * GIBI;

    if (bytes < KIBI)
        return QString("%1 B").arg(bytes);
    else if (bytes < MEBI)
        return formatUnit(bytes, KIBI, "KiB");
    else if (bytes < GIBI)
        return formatUnit(bytes, MEBI, "MiB");
    else if (bytes < TEBI)
        return formatUnit(bytes, GIBI, "GiB");
    else
        return formatUnit(bytes, TEBI, "TiB");
}
