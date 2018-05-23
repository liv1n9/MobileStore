#include "deleteaccountbutton.h"

#include <QMessageBox>
#include <QDebug>

DeleteAccountButton::DeleteAccountButton(const QString &text, int id, QList<Person> &person, AccountsManagerWidget *&manager):
    ql(person)
{
    index = id;
    this->setText(text);
    a = manager;
    qDebug() << a;
    connect(this, SIGNAL(clicked()), this, SLOT(deleteAccount()));
}

void DeleteAccountButton::deleteAccount()
{
    int arg = QMessageBox::question(this, " ", "Xoá tài khoản " + ql.at(index).getUsername() + "?");
    if (arg == QMessageBox::Yes) {
        QWidget *tmp = this->window();
        QString name = ql.at(index).getUsername();
        ql.removeAt(index);
        a->setAccountsList();
        QMessageBox::information(tmp, " ", "Đã xoá tài khoản " + name + "!");
    }
}
