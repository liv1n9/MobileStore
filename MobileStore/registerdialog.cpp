#include "registerdialog.h"
#include "ui_registerdialog.h"

#include <QDebug>
#include <QMessageBox>
#include <QPushButton>

RegisterDialog::RegisterDialog(QList<Register> &regValue, QList<Person> &accountsValue, QWidget *parent) :
    QDialog(parent),
    registerData(regValue),
    accountsData(accountsValue),
    ui(new Ui::RegisterDialog)
{
    ui->setupUi(this);
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
    this->setWindowFlags((this->windowFlags() & ~Qt::WindowContextHelpButtonHint) | Qt::MSWindowsFixedSizeDialogHint);
}

RegisterDialog::~RegisterDialog()
{
    delete ui;
}

bool RegisterDialog::avail()
{
    for (int i = 0; i < accountsData.size(); i++) {
        if (accountsData.at(i).getUsername() == ui->usernameType->text()) {
            return false;
        }
    }
    return true;
}

void RegisterDialog::on_buttonBox_accepted()
{
    if (isAvail) {
        Register *reg = new Register();
        reg->setUsername(ui->usernameType->text());
        reg->setPassword(ui->passwordType->text());
        reg->setName(ui->nameType->text());
        registerData.append(*reg);
        QMessageBox::information(this, " ", "Bạn đã đăng ký thành công!");
    } else {
        ui->usernameType->clear();
        ui->passwordType->clear();
        QMessageBox::information(this, " ", "Tên đăng nhập đã tồn tại!");
    }
}


void RegisterDialog::accept()
{
    isAvail = avail();
    if (isAvail) this->close();
}

void RegisterDialog::on_nameType_textChanged(const QString &arg1)
{
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(arg1.length() > 0 && ui->usernameType->text().length() > 0
                                                            && ui->passwordType->text().length() > 0);
}

void RegisterDialog::on_usernameType_textChanged(const QString &arg1)
{
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(arg1.length() > 0 && ui->nameType->text().length() > 0
                                                            && ui->passwordType->text().length() > 0);
}
void RegisterDialog::on_passwordType_textChanged(const QString &arg1)
{
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(arg1.length() > 0 && ui->nameType->text().length() > 0
                                                            && ui->usernameType->text().length() > 0);
}

void RegisterDialog::on_buttonBox_rejected()
{
    ui->nameType->clear();
    ui->usernameType->clear();
    ui->passwordType->clear();
}
