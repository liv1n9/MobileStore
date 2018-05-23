#ifndef PRODUCTSDATASET_H
#define PRODUCTSDATASET_H

#include "product.h"

#include <QList>

class ProductsDataSet
{
public:
    ProductsDataSet();
    QList<Product> productsData;
    int lastProductId;
    void getProductsData(const QString &dataPath);
    void updateProductsData(const QString &dataPath);
};

#endif // PRODUCTSDATASET_H
