#ifndef PRODUCTSTABLE_H
#define PRODUCTSTABLE_H

#include "productstablesize.h"
#include "productwidget.h"

#include <QTableWidget>

class ProductsTable : ProductsTableSize
{
public:
    ProductsTable();
    ~ProductsTable();
    QTableWidget *getProductsTable() const;
    void appendWidgetList(int row, int column, const Product &product);

private:
    QTableWidget *productsTable;
    ProductWidget *productWidget;
    QList<ProductWidget*> productsWidgetList;
    void setProducesTable();
};

#endif // PRODUCTSTABLE_H
