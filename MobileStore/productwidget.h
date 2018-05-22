#ifndef PRODUCTWIDGET_H
#define PRODUCTWIDGET_H

#include "product.h"
#include "productbuydialog.h"

#include <QGraphicsScene>
#include <QWidget>

namespace Ui {
class ProductWidget;
}

class ProductWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductWidget(QWidget *parent = 0);
    ~ProductWidget();
    void setWidgetInfo(const Product &product);
    void setIsUser(bool value);
    void setIsGuess(bool value);

private slots:
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);
    void mousePressEvent(QMouseEvent *event);

private:
    Product product;
    Ui::ProductWidget *ui;
    QGraphicsScene *scene = new QGraphicsScene();
    ProductBuyDialog *d = new ProductBuyDialog();
};

#endif // PRODUCTWIDGET_H
