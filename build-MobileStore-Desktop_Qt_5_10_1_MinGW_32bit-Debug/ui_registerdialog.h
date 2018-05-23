/********************************************************************************
** Form generated from reading UI file 'registerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERDIALOG_H
#define UI_REGISTERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RegisterDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *name;
    QLineEdit *nameType;
    QLabel *username;
    QLineEdit *usernameType;
    QLabel *password;
    QLineEdit *passwordType;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RegisterDialog)
    {
        if (RegisterDialog->objectName().isEmpty())
            RegisterDialog->setObjectName(QStringLiteral("RegisterDialog"));
        RegisterDialog->resize(400, 192);
        verticalLayout = new QVBoxLayout(RegisterDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        name = new QLabel(RegisterDialog);
        name->setObjectName(QStringLiteral("name"));
        QFont font;
        font.setPointSize(10);
        name->setFont(font);

        verticalLayout->addWidget(name);

        nameType = new QLineEdit(RegisterDialog);
        nameType->setObjectName(QStringLiteral("nameType"));
        nameType->setFont(font);

        verticalLayout->addWidget(nameType);

        username = new QLabel(RegisterDialog);
        username->setObjectName(QStringLiteral("username"));
        username->setFont(font);

        verticalLayout->addWidget(username);

        usernameType = new QLineEdit(RegisterDialog);
        usernameType->setObjectName(QStringLiteral("usernameType"));
        usernameType->setFont(font);

        verticalLayout->addWidget(usernameType);

        password = new QLabel(RegisterDialog);
        password->setObjectName(QStringLiteral("password"));
        password->setFont(font);

        verticalLayout->addWidget(password);

        passwordType = new QLineEdit(RegisterDialog);
        passwordType->setObjectName(QStringLiteral("passwordType"));
        passwordType->setFont(font);
        passwordType->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passwordType);

        buttonBox = new QDialogButtonBox(RegisterDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setFont(font);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(RegisterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RegisterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RegisterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RegisterDialog);
    } // setupUi

    void retranslateUi(QDialog *RegisterDialog)
    {
        RegisterDialog->setWindowTitle(QApplication::translate("RegisterDialog", "\304\220\304\203ng k\303\275", nullptr));
        name->setText(QApplication::translate("RegisterDialog", "H\341\273\215 v\303\240 t\303\252n", nullptr));
        username->setText(QApplication::translate("RegisterDialog", "T\303\252n \304\221\304\203ng nh\341\272\255p", nullptr));
        password->setText(QApplication::translate("RegisterDialog", "M\341\272\255t kh\341\272\251u", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterDialog: public Ui_RegisterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERDIALOG_H
