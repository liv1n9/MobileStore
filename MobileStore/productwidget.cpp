#include "productwidget.h"
#include "ui_productwidget.h"
#include "fileutils.h"
#include "numberutils.h"

#include <QGraphicsPixmapItem>
#include <QtDebug>

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
    qDebug() << "ProductsWidget destructor called";
}

void ProductWidget::setWidgetInfo(const Product &product)
{
    this->setCursor(Qt::PointingHandCursor);
    this->setAttribute(Qt::WA_Hover);
    QGraphicsView *graphics = ui->image;
    graphics->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    graphics->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
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

