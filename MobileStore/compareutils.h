#ifndef COMPAIRUTILS_H
#define COMPAIRUTILS_H

#include "person.h"
#include "product.h"



class CompareUtils
{
public:
    static bool cmpPopular(const Product &A, const Product &B);
    static bool cmpIncPrice(const Product &A, const Product &B);
    static bool cmpDecPrice(const Product &A, const Product &B);
    static bool cmpSearchPerson(const std::pair<int, Person> &A, std::pair<int, Person> &B);
    static bool cmpSearch(const std::pair<int, Product> &A, std::pair<int, Product> &B);
};

#endif // COMPAIRUTILS_H
