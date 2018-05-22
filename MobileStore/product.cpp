#include "product.h"
int Product::getId() const
{
    return id;
}

void Product::setId(int value)
{
    id = value;
}

QString Product::getName() const
{
    return name;
}

void Product::setName(const QString &value)
{
    name = value;
}

QString Product::getBrand() const
{
    return brand;
}

void Product::setBrand(const QString &value)
{
    brand = value;
}

int Product::getPrice() const
{
    return price;
}

void Product::setPrice(int value)
{
    price = value;
}

QString Product::getImagePath() const
{
    return imagePath;
}

void Product::setImagePath(const QString &value)
{
    imagePath = value;
}

int Product::getPopular() const
{
    return popular;
}

void Product::setPopular(int value)
{
    popular = value;
}

Product::Product()
{
    
}
