#include "productwidget.h"
#include "ui_productwidget.h"
#include "fileutils.h"
#include "numberutils.h"

#include <QGraphicsPixmapItem>
#include <QDebug>

ProductWidget::ProductWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProductWidget)
{
    ui->setupUi(this);
}

ProductWidget::~ProductWidget()
{
    delete ui;
    delete scene;
    delete d;
    qDebug() << "ProductsWidget destructor called";
}

void ProductWidget::setWidgetInfo(const Product &product)
{
    delete d;
    d = new ProductBuyDialog(this->window());
    d->setDialogInfo(product);
    QGraphicsView *graphics = ui->image;
    delete scene;
    scene = new QGraphicsScene(graphics);
    graphics->setScene(scene);
    scene->addPixmap(QPixmap(FileUtils::getRootPath(product.getImagePath())).scaled(graphics->width(), graphics->height(), Qt::KeepAspectRatio));
    ui->productName->setText(product.getName());
    ui->productPrice->setText(NumberUtils::moneyFormat(product.getPrice()));
    graphics->show();
}

void ProductWidget::enterEvent(QEvent *event)
{
    ui->productName->setStyleSheet("QLabel { color: blue; }");
    QWidget::enterEvent(event);
}

void ProductWidget::leaveEvent(QEvent *event)
{
    ui->productName->setStyleSheet("QLabel { color: black; }");
    QWidget::leaveEvent(event);
}

void ProductWidget::mousePressEvent(QMouseEvent *event)
{
    d->exec();
    QWidget::mousePressEvent(event);
}

void ProductWidget::setIsUser(bool value)
{
    d->setIsUser(value);
}

void ProductWidget::setIsGuess(bool value)
{
    d->setIsGuess(value);
}

