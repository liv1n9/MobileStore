/********************************************************************************
** Form generated from reading UI file 'productbuywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTBUYWINDOW_H
#define UI_PRODUCTBUYWINDOW_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductBuyWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ProductBuyWindow)
    {
        if (ProductBuyWindow->objectName().isEmpty())
            ProductBuyWindow->setObjectName(QStringLiteral("ProductBuyWindow"));
        ProductBuyWindow->resize(412, 503);
        centralwidget = new QWidget(ProductBuyWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(19, 19, 371, 321));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 360, 371, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 390, 371, 16));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:red"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 420, 371, 41));
        pushButton->setFont(font);
        ProductBuyWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ProductBuyWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 412, 21));
        ProductBuyWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(ProductBuyWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ProductBuyWindow->setStatusBar(statusbar);

        retranslateUi(ProductBuyWindow);

        QMetaObject::connectSlotsByName(ProductBuyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *ProductBuyWindow)
    {
        ProductBuyWindow->setWindowTitle(QApplication::translate("ProductBuyWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("ProductBuyWindow", "NAME", nullptr));
        label_2->setText(QApplication::translate("ProductBuyWindow", "PRICE", nullptr));
        pushButton->setText(QApplication::translate("ProductBuyWindow", "MUA NGAY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductBuyWindow: public Ui_ProductBuyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTBUYWINDOW_H
