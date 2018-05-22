#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include "person.h"
#include "product.h"

class Administrator: public Person
{
public:
    Administrator();
    ~Administrator();
private:
    const QString ACCOUNTS_DATA_PATH = "\\data\\accounts.txt";
    const QString PRODUCTS_DATA_PATH = "\\data\\products.txt";
    QList<Person> accountsData;
    QList<Product> productsData;
};

#endif // ADMINISTRATOR_H
