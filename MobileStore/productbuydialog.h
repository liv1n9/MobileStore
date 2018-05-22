#ifndef PRODUCTBUYDIALOG_H
#define PRODUCTBUYDIALOG_H

#include "product.h"

#include <QDialog>
#include <QGraphicsScene>

namespace Ui {
class ProductBuyDialog;
}

class ProductBuyDialog : public QDialog
{

public:
    explicit ProductBuyDialog(QWidget *parent = 0);
    ~ProductBuyDialog();
    void setDialogInfo(const Product &product);
    void setIsUser(bool value);
    void setIsGuess(bool value);

private:
    bool isUser = false;
    const int HEIGHT[3] = {390, 410, 460};
    Ui::ProductBuyDialog *ui;
    QGraphicsScene *scene = new QGraphicsScene();
};

#endif // PRODUCTBUYDIALOG_H
