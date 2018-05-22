#ifndef ACCOUNTSDATASET_H
#define ACCOUNTSDATASET_H

#include "person.h"

#include <QList>
#include <QString>

class AccountsDataSet
{
public:
    AccountsDataSet();
    QList<Person> accountsData;
    int lastAccountId;
    void getAccountsData(const QString &dataPath);
    void addAccount(const QString &username, const QString &password, const QString &name);
    void updateAccountsData(const QString &dataPath);
};

#endif // ACCOUNTSDATASET_H
