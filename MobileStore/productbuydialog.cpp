#include "fileutils.h"
#include "numberutils.h"
#include "productbuydialog.h"
#include "ui_productbuydialog.h"

#include <QDebug>

ProductBuyDialog::ProductBuyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ProductBuyDialog)
{
    ui->setupUi(this);
    this->setWindowFlags((this->windowFlags() & ~Qt::WindowContextHelpButtonHint) | Qt::MSWindowsFixedSizeDialogHint);
}

ProductBuyDialog::~ProductBuyDialog()
{
    delete ui;
}

void ProductBuyDialog::setDialogInfo(const Product &product)
{
    QGraphicsView *graphics = ui->graphicsView;
    delete scene;
    scene = new QGraphicsScene(graphics);
    graphics->setScene(scene);
    scene->addPixmap(QPixmap(FileUtils::getRootPath(product.getImagePath())).scaled(graphics->width(), graphics->height(), Qt::KeepAspectRatio));
    graphics->show();
    this->resize(this->width(), HEIGHT[1]);
    ui->name->setText(product.getName());
    ui->price->setText(NumberUtils::moneyFormat(product.getPrice()));
}

void ProductBuyDialog::setIsUser(bool value)
{
    isUser = value;
}

void ProductBuyDialog::setIsGuess(bool value)
{
    ui->notice->setHidden(!value);
    if (isUser) {
        this->resize(this->width(), HEIGHT[2]);
    } else {
        this->resize(this->width(), HEIGHT[value]);
    }
}
