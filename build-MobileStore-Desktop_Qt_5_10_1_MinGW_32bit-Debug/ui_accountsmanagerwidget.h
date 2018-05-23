/********************************************************************************
** Form generated from reading UI file 'accountsmanagerwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTSMANAGERWIDGET_H
#define UI_ACCOUNTSMANAGERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccountsManagerWidget
{
public:
    QTabWidget *accountsInfo;
    QLineEdit *searchKeyword;

    void setupUi(QWidget *AccountsManagerWidget)
    {
        if (AccountsManagerWidget->objectName().isEmpty())
            AccountsManagerWidget->setObjectName(QStringLiteral("AccountsManagerWidget"));
        AccountsManagerWidget->resize(1000, 525);
        accountsInfo = new QTabWidget(AccountsManagerWidget);
        accountsInfo->setObjectName(QStringLiteral("accountsInfo"));
        accountsInfo->setGeometry(QRect(0, 50, 1000, 461));
        accountsInfo->setTabPosition(QTabWidget::South);
        accountsInfo->setTabShape(QTabWidget::Triangular);
        searchKeyword = new QLineEdit(AccountsManagerWidget);
        searchKeyword->setObjectName(QStringLiteral("searchKeyword"));
        searchKeyword->setGeometry(QRect(741, 20, 251, 20));

        retranslateUi(AccountsManagerWidget);

        accountsInfo->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(AccountsManagerWidget);
    } // setupUi

    void retranslateUi(QWidget *AccountsManagerWidget)
    {
        AccountsManagerWidget->setWindowTitle(QApplication::translate("AccountsManagerWidget", "Form", nullptr));
        searchKeyword->setPlaceholderText(QApplication::translate("AccountsManagerWidget", "Nh\341\272\255p t\303\252n t\303\240i kho\341\272\243n c\341\272\247n t\303\254m ki\341\272\277m", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccountsManagerWidget: public Ui_AccountsManagerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTSMANAGERWIDGET_H
