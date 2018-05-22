#ifndef PRODUCTSTAB_H
#define PRODUCTSTAB_H

#include "compareutils.h"
#include "product.h"
#include "productstable.h"
#include "productstablesize.h"

#include <QTabWidget>
#include <QTableWidget>

class ProductsTab : ProductsTableSize
{
public:
    ProductsTab();
    ~ProductsTab();
    ProductsTab(const QList<Product> &value, const QString &brand,
                bool (*cmp)(const Product &, const Product &));

    QTabWidget *getProductsTab() const;
    int getProductsDataSize();
    void setIsUser(bool value);
    void setIsGuess(bool value);

private:
    QTabWidget *productsTab = new QTabWidget();
    QList<Product> productsData;
    QList<ProductsTable*> productsTableList;
    void setProductsTab();
    void setProductsData(const QList<Product> &value, const QString &brand, bool (*cmp)(const Product &, const Product &));
};

#endif // PRODUCTSTAB_H
