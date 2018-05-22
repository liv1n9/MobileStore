/********************************************************************************
** Form generated from reading UI file 'productwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTWIDGET_H
#define UI_PRODUCTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProductWidget
{
public:
    QGraphicsView *image;
    QLabel *productName;
    QLabel *productPrice;

    void setupUi(QWidget *ProductWidget)
    {
        if (ProductWidget->objectName().isEmpty())
            ProductWidget->setObjectName(QStringLiteral("ProductWidget"));
        ProductWidget->resize(200, 220);
        ProductWidget->setCursor(QCursor(Qt::PointingHandCursor));
        image = new QGraphicsView(ProductWidget);
        image->setObjectName(QStringLiteral("image"));
        image->setGeometry(QRect(9, 9, 182, 164));
        image->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        image->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        productName = new QLabel(ProductWidget);
        productName->setObjectName(QStringLiteral("productName"));
        productName->setGeometry(QRect(9, 179, 181, 16));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(9);
        productName->setFont(font);
        productName->setStyleSheet(QStringLiteral(""));
        productName->setWordWrap(false);
        productPrice = new QLabel(ProductWidget);
        productPrice->setObjectName(QStringLiteral("productPrice"));
        productPrice->setGeometry(QRect(9, 198, 181, 16));
        QFont font1;
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        productPrice->setFont(font1);
        productPrice->setStyleSheet(QStringLiteral("color:red; font-weight: bold"));
        productPrice->setWordWrap(false);

        retranslateUi(ProductWidget);

        QMetaObject::connectSlotsByName(ProductWidget);
    } // setupUi

    void retranslateUi(QWidget *ProductWidget)
    {
        ProductWidget->setWindowTitle(QApplication::translate("ProductWidget", "Form", nullptr));
        productName->setText(QApplication::translate("ProductWidget", "NAME", nullptr));
        productPrice->setText(QApplication::translate("ProductWidget", "PRICE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductWidget: public Ui_ProductWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTWIDGET_H
