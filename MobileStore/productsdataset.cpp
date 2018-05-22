#include "fileutils.h"
#include "productsdataset.h"

#include <QTCore/QTextStream>

ProductsDataSet::ProductsDataSet()
{
    productsData.clear();
}

void ProductsDataSet::getProductsData(const QString &dataPath)
{
    QFile file(FileUtils::getRootPath(dataPath));
    file.open(QIODevice::ReadOnly);
    QTextStream in(&file);
    QStringList tmp = in.readLine().split(" ");
    int total = tmp.at(0).toInt();
    lastProductId = tmp.at(1).toInt();
    while (total--) {
        Product product;
        product.setId(in.readLine().toInt());
        product.setName(in.readLine());
        product.setBrand(in.readLine());
        product.setPrice(in.readLine().toInt() * 1000);
        product.setImagePath(in.readLine());
        product.setPopular(in.readLine().toInt());
        productsData.append(product);
    }
    file.close();
}

void ProductsDataSet::addProduct(const QString &name, const QString &brand, int price, const QString &imagePath, int popular)
{
    Product product;
    product.setId(++lastProductId);
    product.setName(name);
    product.setBrand(brand);
    product.setPrice(price);
    product.setImagePath(imagePath);
    product.setPopular(popular);
    productsData.append(product);
}

void ProductsDataSet::updateProductsData(const QString &dataPath)
{
    QFile file(FileUtils::getRootPath(dataPath));
    file.open(QIODevice::WriteOnly);
    QTextStream out(&file);
    out << productsData.size() << ' ' << lastProductId << endl;
    for (Product i: productsData) {
        out << i.getId() << endl;
        out << i.getName() << endl;
        out << i.getBrand() << endl;
        out << i.getPrice() / 1000 << endl;
        out << i.getImagePath() << endl;
        out << i.getPopular() << endl;
    }
    productsData.clear();
    file.close();
}
