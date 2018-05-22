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
    void addProduct(const QString &name, const QString &brand, int price, const QString &imagePath, int popular);
    void updateProductsData(const QString &dataPath);
private:
};

#endif // PRODUCTSDATASET_H
