/********************************************************************************
** Form generated from reading UI file 'productbuy.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTBUY_H
#define UI_PRODUCTBUY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductBuy
{
public:
    QGraphicsView *graphicsView;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QWidget *ProductBuy)
    {
        if (ProductBuy->objectName().isEmpty())
            ProductBuy->setObjectName(QStringLiteral("ProductBuy"));
        ProductBuy->resize(390, 461);
        graphicsView = new QGraphicsView(ProductBuy);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(9, 9, 371, 341));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        label = new QLabel(ProductBuy);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 360, 371, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        label_2 = new QLabel(ProductBuy);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 390, 371, 16));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_2->setFont(font1);
        label_2->setStyleSheet(QStringLiteral("color:red"));
        pushButton = new QPushButton(ProductBuy);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 420, 371, 31));
        pushButton->setFont(font);

        retranslateUi(ProductBuy);

        QMetaObject::connectSlotsByName(ProductBuy);
    } // setupUi

    void retranslateUi(QWidget *ProductBuy)
    {
        ProductBuy->setWindowTitle(QApplication::translate("ProductBuy", "Form", nullptr));
        label->setText(QApplication::translate("ProductBuy", "NAME", nullptr));
        label_2->setText(QApplication::translate("ProductBuy", "PRICE", nullptr));
        pushButton->setText(QApplication::translate("ProductBuy", "MUA NGAY", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductBuy: public Ui_ProductBuy {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTBUY_H
