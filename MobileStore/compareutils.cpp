#include "compareutils.h"

bool CompareUtils::cmpPopular(const Product &A, const Product &B)
{
    return A.getPopular() > B.getPopular();
}

bool CompareUtils::cmpIncPrice(const Product &A, const Product &B)
{
    return A.getPrice() < B.getPrice();
}

bool CompareUtils::cmpDecPrice(const Product &A, const Product &B)
{
    return A.getPrice() > B.getPrice();
}

bool CompareUtils::cmpSearchPerson(const std::pair<int, Person> &A, std::pair<int, Person> &B)
{
    return A.first > B.first;
}

bool CompareUtils::cmpSearch(const std::pair<int, Product> &A, std::pair<int, Product> &B)
{
    return A.first > B.first;
}
