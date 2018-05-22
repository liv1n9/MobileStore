#ifndef PRODUCT_H
#define PRODUCT_H

#include "comment.h"

#include <QVector>

class Product
{

private:
    int id;
    QString name;
    QString brand;
    int price;
    QVector<Comment> comment;
    QString imagePath;
    int popular;
public:
    Product();

    int getId() const;
    void setId(int value);

    QString getName() const;
    void setName(const QString &value);

    QString getBrand() const;
    void setBrand(const QString &value);

    int getPrice() const;
    void setPrice(int value);

    QString getImagePath() const;
    void setImagePath(const QString &value);

    int getPopular() const;
    void setPopular(int value);

    QVector<Comment> getComment() const;
    void setComment(const QVector<Comment> &value);
};

#endif // PRODUCT_H
