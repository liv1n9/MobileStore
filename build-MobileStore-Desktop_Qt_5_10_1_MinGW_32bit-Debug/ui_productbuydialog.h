/********************************************************************************
** Form generated from reading UI file 'productbuydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTBUYDIALOG_H
#define UI_PRODUCTBUYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ProductBuyDialog
{
public:
    QGraphicsView *graphicsView;
    QLabel *name;
    QLabel *price;
    QPushButton *buyButton;
    QLabel *notice;

    void setupUi(QDialog *ProductBuyDialog)
    {
        if (ProductBuyDialog->objectName().isEmpty())
            ProductBuyDialog->setObjectName(QStringLiteral("ProductBuyDialog"));
        ProductBuyDialog->resize(400, 460);
        graphicsView = new QGraphicsView(ProductBuyDialog);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(10, 10, 381, 331));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        name = new QLabel(ProductBuyDialog);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(10, 350, 381, 16));
        QFont font;
        font.setPointSize(10);
        name->setFont(font);
        price = new QLabel(ProductBuyDialog);
        price->setObjectName(QStringLiteral("price"));
        price->setGeometry(QRect(10, 370, 381, 16));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        price->setFont(font1);
        price->setStyleSheet(QStringLiteral("color:RED"));
        buyButton = new QPushButton(ProductBuyDialog);
        buyButton->setObjectName(QStringLiteral("buyButton"));
        buyButton->setGeometry(QRect(10, 410, 381, 41));
        buyButton->setFont(font);
        notice = new QLabel(ProductBuyDialog);
        notice->setObjectName(QStringLiteral("notice"));
        notice->setGeometry(QRect(10, 390, 381, 16));
        QFont font2;
        font2.setItalic(true);
        notice->setFont(font2);
        notice->setStyleSheet(QStringLiteral("color:grey"));

        retranslateUi(ProductBuyDialog);

        QMetaObject::connectSlotsByName(ProductBuyDialog);
    } // setupUi

    void retranslateUi(QDialog *ProductBuyDialog)
    {
        ProductBuyDialog->setWindowTitle(QApplication::translate("ProductBuyDialog", "Mua s\341\272\243n ph\341\272\251m", nullptr));
        name->setText(QApplication::translate("ProductBuyDialog", "NAME", nullptr));
        price->setText(QApplication::translate("ProductBuyDialog", "PRICE", nullptr));
        buyButton->setText(QApplication::translate("ProductBuyDialog", "MUA NGAY", nullptr));
        notice->setText(QApplication::translate("ProductBuyDialog", "B\341\272\241n ph\341\272\243i \304\221\304\203ng nh\341\272\255p \304\221\341\273\203 s\341\273\255 d\341\273\245ng ch\341\273\251c n\304\203ng mua h\303\240ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductBuyDialog: public Ui_ProductBuyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTBUYDIALOG_H
