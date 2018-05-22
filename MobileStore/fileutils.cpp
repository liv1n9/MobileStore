#include "fileutils.h"
#include <QDir>

QString FileUtils::getRootPath(const QString &path)
{
    return QDir::currentPath().replace("/", "\\") + path;
}
