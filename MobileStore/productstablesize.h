#ifndef PRODUCTSTABLESIZE_H
#define PRODUCTSTABLESIZE_H


class ProductsTableSize
{
public:
    ProductsTableSize();
    int getROW() const;
    int getCOLUMN() const;

private:
    const int ROW = 2;
    const int COLUMN = 5;
};

#endif // PRODUCTSTABLESIZE_H
