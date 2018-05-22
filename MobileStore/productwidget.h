#ifndef PRODUCTWIDGET_H
#define PRODUCTWIDGET_H

#include "product.h"

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

private slots:
    void enterEvent(QEvent *event);
    void leaveEvent(QEvent *event);

private:
    Ui::ProductWidget *ui;
    QGraphicsScene *scene = new QGraphicsScene();
};

#endif // PRODUCTWIDGET_H
