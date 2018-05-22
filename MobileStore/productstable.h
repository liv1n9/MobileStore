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
    void setIsUser(bool value);
    void setIsGuess(bool value);
private:
    QTableWidget *productsTable;
    ProductWidget *productWidget;
    QList<ProductWidget*> productsWidgetList;
    void setProducesTable();
};

#endif // PRODUCTSTABLE_H
