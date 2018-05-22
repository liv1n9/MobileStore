#include "accountsdataset.h"
#include "fileutils.h"
#include "person.h"

#include <QFile>
#include <QDebug>
#include <QTCore/QTextStream>

AccountsDataSet::AccountsDataSet()
{
    accountsData.clear();
}

void AccountsDataSet::getAccountsData(const QString &dataPath)
{
    QFile file(FileUtils::getRootPath(dataPath));
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    QStringList tmp = in.readLine().split(" ");
    int total = tmp.at(0).toInt();
    lastAccountId = tmp.at(1).toInt();
    while (total--) {
        Person person;
        person.setId(in.readLine().toInt());
        person.setUsername(in.readLine());
        person.setPassword(in.readLine());
        person.setName(in.readLine());
        accountsData.append(person);
    }
    file.close();
}

void AccountsDataSet::addAccount(const QString &username, const QString &password, const QString &name)
{
    Person person;
    person.setId(++lastAccountId);
    person.setUsername(username);
    person.setPassword(password);
    person.setName(name);
    accountsData.append(person);
}

void AccountsDataSet::updateAccountsData(const QString &dataPath)
{
    QFile file(FileUtils::getRootPath(dataPath));
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out << accountsData.size() << ' ' << lastAccountId << endl;
    for (Person i: accountsData) {
        out << i.getId() << endl;
        out << i.getUsername() << endl;
        out << i.getPassword() << endl;
        out << i.getName() << endl;
    }
    accountsData.clear();
    file.close();
}
