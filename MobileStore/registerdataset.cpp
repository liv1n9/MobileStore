#include "fileutils.h"
#include "registerdataset.h"

#include <QTCore/QTextStream>

RegisterDataSet::RegisterDataSet()
{

}

void RegisterDataSet::getRegisterData(const QString &dataPath)
{
    QFile file(FileUtils::getRootPath(dataPath));
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    int total = in.readLine().toInt();
    while (total--) {
        Register reg;
        reg.setUsername(in.readLine());
        reg.setPassword(in.readLine());
        reg.setName(in.readLine());
        registerData.append(reg);
    }
    file.close();
}

void RegisterDataSet::updateRegisterData(const QString &dataPath)
{
    QFile file(FileUtils::getRootPath(dataPath));
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out << registerData.size() << endl;
    for (int i = 0; i < registerData.size(); i++) {
        out << registerData.at(i).getUsername() << endl;
        out << registerData.at(i).getPassword() << endl;
        out << registerData.at(i).getName() << endl;
    }
    file.close();
}
