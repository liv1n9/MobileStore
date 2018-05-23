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
    void updateAccountsData(const QString &dataPath);
};

#endif // ACCOUNTSDATASET_H
