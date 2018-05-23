#ifndef DELETEACCOUNTBUTTON_H
#define DELETEACCOUNTBUTTON_H

#include "accountsmanagerwidget.h"
#include "person.h"

#include <QPushButton>

class DeleteAccountButton : public QPushButton
{
    Q_OBJECT
public:
    DeleteAccountButton(const QString &text, int id, QList<Person> &person, AccountsManagerWidget *&manager);
private:
    int index;
    QList<Person> &ql;
    AccountsManagerWidget *a;
private slots:
    void deleteAccount();
};

#endif // DELETEACCOUNTBUTTON_H
