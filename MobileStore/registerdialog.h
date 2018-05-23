#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include "person.h"
#include "register.h"

#include <QDialog>

namespace Ui {
class RegisterDialog;
}

class RegisterDialog : public QDialog
{
    Q_OBJECT

public:
    explicit RegisterDialog(QList<Register> &regValue, QList<Person> &accountsValue, QWidget *parent = 0);
    ~RegisterDialog();
    void setAvail(bool value);

private slots:
    void on_buttonBox_accepted();
    void on_nameType_textChanged(const QString &arg1);
    void on_usernameType_textChanged(const QString &arg1);
    void on_passwordType_textChanged(const QString &arg1);

    void on_buttonBox_rejected();

private:
    bool avail();
    bool isAvail;
    QList<Register> &registerData;
    QList<Person> &accountsData;
    Ui::RegisterDialog *ui;
    void accept();
};

#endif // REGISTERDIALOG_H
