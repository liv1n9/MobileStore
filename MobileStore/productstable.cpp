#include "productstable.h"

#include <QHeaderView>
#include <QDebug>

ProductsTable::ProductsTable()
{
    setProducesTable();
}

ProductsTable::~ProductsTable()
{
    for (int i = 0; i < productsWidgetList.size(); i++) {
        delete productsWidgetList.at(i);
    }
    delete productsTable;
    qDebug() << "ProductsTable destructor called";
}

QTableWidget *ProductsTable::getProductsTable() const
{
    return productsTable;
}

void ProductsTable::appendWidgetList(int row, int column, const Product &product)
{
    productWidget = new ProductWidget();
    productWidget->setWidgetInfo(product);
    productsWidgetList.append(productWidget);
    productsTable->setCellWidget(row, column, productWidget);
}

void ProductsTable::setIsUser(bool value)
{
    for (int i = 0; i < productsWidgetList.size(); i++) {
        productsWidgetList.at(i)->setIsUser(value);
    }
}

void ProductsTable::setIsGuess(bool value)
{
    for (int i = 0; i < productsWidgetList.size(); i++) {
        productsWidgetList.at(i)->setIsGuess(value);
    }
}

void ProductsTable::setProducesTable()
{
    productsTable = new QTableWidget();
    productsTable->horizontalHeader()->hide();
    productsTable->verticalHeader()->hide();
    productsTable->setRowCount(getROW());
    productsTable->setColumnCount(getCOLUMN());
    productsTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    productsTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    QPalette palette = productsTable->palette();
    palette.setBrush(QPalette::Highlight, QBrush(Qt::white));
    productsTable->setPalette(palette);
}
