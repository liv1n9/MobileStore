#include "algoutils.h"
#include "productstab.h"
#include "productwidget.h"

#include <QDebug>

ProductsTab::ProductsTab()
{

}

ProductsTab::~ProductsTab()
{
    for (int i = 0; i < productsTableList.size(); i++) {
        delete productsTableList.at(i);
    }
    delete productsTab;
    qDebug() << "ProductsTab destructor called";
}

ProductsTab::ProductsTab(const QList<Product> &value, const QString &brand,
                         bool (*cmp)(const Product&, const Product&))
{
    setProductsData(value, brand, cmp);
    setProductsTab();
}

QTabWidget *ProductsTab::getProductsTab() const
{
    return productsTab;
}

int ProductsTab::getProductsDataSize()
{
    return productsData.size();
}

void ProductsTab::setProductsTab()
{
    delete productsTab;
    productsTab = new QTabWidget();
    productsTab->setStyleSheet("QTabBar::tab { width: 50px; height: 15px }");
    productsTab->setTabShape(QTabWidget::Triangular);
    productsTab->setTabPosition(QTabWidget::South);
    if (!productsData.empty()) {
        int row = getROW();
        int column = getCOLUMN();
        for (int cnt = 0; cnt * row * column < productsData.size(); cnt++) {
            productsTableList.append(new ProductsTable());
            for (int i = cnt * row * column; i < std::min((int)productsData.size(), (cnt + 1) * row * column); i++) {
                productsTableList.at(cnt)->appendWidgetList(i / column, i % column, productsData.at(i));
            }
            productsTab->addTab(productsTableList.at(cnt)->getProductsTable(), QString::number(cnt + 1));
        }
    }
}

void ProductsTab::setProductsData(const QList<Product> &value, const QString &brand, bool (*cmp)(const Product &, const Product &))
{
    productsData.clear();
    if (brand.contains("search")) {
        QString keyword = brand;
        keyword.replace(0, 6, "");
        QList<std::pair<int, Product> > tmp;
        for (Product i: value) {
            int x = AlgoUtils::lcs(i.getName(), keyword);
            if (x > 2) {
                tmp.append({x, i});
            }
        }
        std::sort(tmp.begin(), tmp.end(), CompareUtils::cmpSearch);
        for (int i = 0; i < tmp.size(); i++) {
            productsData.append(tmp[i].second);
        }
    } else {
        if (brand == "TẤT CẢ"){
            productsData = value;
        } else {
            for (Product i: value) {
                if (brand == "HÃNG KHÁC") {
                    QString productBrand = i.getBrand();
                    if (productBrand != "IPHONE" && productBrand != "SAMSUNG" && productBrand != "OPPO") {
                        productsData.append(i);
                    }
                } else {
                    if (i.getBrand() == brand) {
                        productsData.append(i);
                    }
                }
            }
        }
        std::sort(productsData.begin(), productsData.end(), cmp);
    }
}
