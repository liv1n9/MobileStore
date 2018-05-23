/********************************************************************************
** Form generated from reading UI file 'mainwindowcontroller.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWCONTROLLER_H
#define UI_MAINWINDOWCONTROLLER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowController
{
public:
    QWidget *centralwidget;
    QTabWidget *mainWidget;
    QWidget *store;
    QWidget *layoutWidget;
    QHBoxLayout *accountLayout;
    QLineEdit *username;
    QLineEdit *password;
    QPushButton *login;
    QPushButton *_register;
    QLabel *greeting;
    QPushButton *logout;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchKeyword;
    QPushButton *search;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *popular;
    QCheckBox *incPrice;
    QCheckBox *decPrice;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindowController)
    {
        if (MainWindowController->objectName().isEmpty())
            MainWindowController->setObjectName(QStringLiteral("MainWindowController"));
        MainWindowController->resize(1000, 660);
        MainWindowController->setStyleSheet(QStringLiteral("QTabBar::tab { width: 160px; height: 30px}"));
        centralwidget = new QWidget(MainWindowController);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        mainWidget = new QTabWidget(centralwidget);
        mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->setGeometry(QRect(0, 100, 1000, 554));
        QFont font;
        font.setPointSize(9);
        font.setKerning(true);
        mainWidget->setFont(font);
        mainWidget->setStyleSheet(QStringLiteral("QTabBar::tab { width: 160px; height: 30px}"));
        mainWidget->setTabPosition(QTabWidget::North);
        mainWidget->setTabShape(QTabWidget::Triangular);
        mainWidget->setIconSize(QSize(16, 16));
        store = new QWidget();
        store->setObjectName(QStringLiteral("store"));
        mainWidget->addTab(store, QString());
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 481, 25));
        accountLayout = new QHBoxLayout(layoutWidget);
        accountLayout->setObjectName(QStringLiteral("accountLayout"));
        accountLayout->setContentsMargins(0, 0, 0, 0);
        username = new QLineEdit(layoutWidget);
        username->setObjectName(QStringLiteral("username"));
        username->setEnabled(true);
        QFont font1;
        font1.setPointSize(9);
        username->setFont(font1);

        accountLayout->addWidget(username);

        password = new QLineEdit(layoutWidget);
        password->setObjectName(QStringLiteral("password"));
        password->setEnabled(true);
        password->setFont(font1);
        password->setEchoMode(QLineEdit::Password);

        accountLayout->addWidget(password);

        login = new QPushButton(layoutWidget);
        login->setObjectName(QStringLiteral("login"));
        login->setFont(font1);
        login->setCheckable(false);

        accountLayout->addWidget(login);

        _register = new QPushButton(layoutWidget);
        _register->setObjectName(QStringLiteral("_register"));
        _register->setFont(font1);

        accountLayout->addWidget(_register);

        greeting = new QLabel(centralwidget);
        greeting->setObjectName(QStringLiteral("greeting"));
        greeting->setEnabled(true);
        greeting->setGeometry(QRect(500, 20, 411, 23));
        greeting->setFont(font1);
        greeting->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        logout = new QPushButton(centralwidget);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(917, 20, 75, 23));
        logout->setFont(font1);
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(622, 60, 371, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        searchKeyword = new QLineEdit(layoutWidget1);
        searchKeyword->setObjectName(QStringLiteral("searchKeyword"));
        searchKeyword->setFont(font1);
        searchKeyword->setMaxLength(50);

        horizontalLayout->addWidget(searchKeyword);

        search = new QPushButton(layoutWidget1);
        search->setObjectName(QStringLiteral("search"));
        search->setFont(font1);

        horizontalLayout->addWidget(search);

        layoutWidget2 = new QWidget(centralwidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(692, 100, 298, 20));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        popular = new QCheckBox(layoutWidget2);
        popular->setObjectName(QStringLiteral("popular"));
        popular->setFont(font1);
        popular->setChecked(true);

        horizontalLayout_2->addWidget(popular);

        incPrice = new QCheckBox(layoutWidget2);
        incPrice->setObjectName(QStringLiteral("incPrice"));
        incPrice->setFont(font1);

        horizontalLayout_2->addWidget(incPrice);

        decPrice = new QCheckBox(layoutWidget2);
        decPrice->setObjectName(QStringLiteral("decPrice"));
        decPrice->setFont(font1);

        horizontalLayout_2->addWidget(decPrice);

        MainWindowController->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowController);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 21));
        MainWindowController->setMenuBar(menubar);

        retranslateUi(MainWindowController);

        mainWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowController);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowController)
    {
        MainWindowController->setWindowTitle(QApplication::translate("MainWindowController", "Mobile store .1.0", nullptr));
        mainWidget->setTabText(mainWidget->indexOf(store), QApplication::translate("MainWindowController", "C\341\273\255a h\303\240ng", nullptr));
        username->setPlaceholderText(QApplication::translate("MainWindowController", "T\303\252n \304\221\304\203ng nh\341\272\255p", nullptr));
        password->setPlaceholderText(QApplication::translate("MainWindowController", "M\341\272\255t kh\341\272\251u", nullptr));
        login->setText(QApplication::translate("MainWindowController", "\304\220\304\203ng nh\341\272\255p", nullptr));
        _register->setText(QApplication::translate("MainWindowController", "\304\220\304\203ng k\303\275", nullptr));
        greeting->setText(QApplication::translate("MainWindowController", "Xin ch\303\240o Nguy\341\273\205n H\341\273\223ng Anh T\341\272\245n", nullptr));
        logout->setText(QApplication::translate("MainWindowController", "\304\220\304\203ng xu\341\272\245t", nullptr));
        searchKeyword->setPlaceholderText(QApplication::translate("MainWindowController", "Nh\341\272\255p t\303\252n \304\221i\341\273\207n tho\341\272\241i c\341\272\247n t\303\254m (t\341\273\221i \304\221a 50 k\303\275 t\341\273\261)", nullptr));
        search->setText(QApplication::translate("MainWindowController", "T\303\254m ki\341\272\277m", nullptr));
        popular->setText(QApplication::translate("MainWindowController", "Ph\341\273\225 bi\341\272\277n nh\341\272\245t", nullptr));
        incPrice->setText(QApplication::translate("MainWindowController", "Gi\303\241 t\304\203ng d\341\272\247n", nullptr));
        decPrice->setText(QApplication::translate("MainWindowController", "Gi\303\241 gi\341\272\243m d\341\272\247n", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowController: public Ui_MainWindowController {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWCONTROLLER_H
