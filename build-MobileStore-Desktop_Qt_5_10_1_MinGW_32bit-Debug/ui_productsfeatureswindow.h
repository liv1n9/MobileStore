/********************************************************************************
** Form generated from reading UI file 'productsfeatureswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTSFEATURESWINDOW_H
#define UI_PRODUCTSFEATURESWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductsFeaturesWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProductsFeaturesWindow)
    {
        if (ProductsFeaturesWindow->objectName().isEmpty())
            ProductsFeaturesWindow->setObjectName(QStringLiteral("ProductsFeaturesWindow"));
        ProductsFeaturesWindow->resize(288, 484);
        centralwidget = new QWidget(ProductsFeaturesWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:red"));

        verticalLayout->addWidget(label_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setFont(font);

        verticalLayout->addWidget(pushButton);

        ProductsFeaturesWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProductsFeaturesWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 288, 21));
        ProductsFeaturesWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ProductsFeaturesWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ProductsFeaturesWindow->setStatusBar(statusbar);

        retranslateUi(ProductsFeaturesWindow);

        QMetaObject::connectSlotsByName(ProductsFeaturesWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ProductsFeaturesWindow)
    {
        ProductsFeaturesWindow->setWindowTitle(QApplication::translate("ProductsFeaturesWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("ProductsFeaturesWindow", "NAME", nullptr));
        label_2->setText(QApplication::translate("ProductsFeaturesWindow", "PRICE", nullptr));
        pushButton->setText(QApplication::translate("ProductsFeaturesWindow", "MUA NGAY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductsFeaturesWindow: public Ui_ProductsFeaturesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTSFEATURESWINDOW_H
