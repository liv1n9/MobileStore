#ifndef ACCOUNTSMANAGERWIDGET_H
#define ACCOUNTSMANAGERWIDGET_H

#include "person.h"

#include <QPushButton>
#include <QTabWidget>
#include <QWidget>

namespace Ui {
class AccountsManagerWidget;
}

class AccountsManagerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AccountsManagerWidget(QList<Person> &value, QWidget *parent = 0);
    ~AccountsManagerWidget();
    void setAccountsList();
    void setAccountsData(const QList<Person> &value);

private slots:
    void on_searchKeyword_textChanged(const QString &arg1);

private:
    const int ROW = 15;
    const QString HEADER[5] = {"Số thứ tự", "ID", "Họ và tên", "Tên đăng nhập", "Xoá tài khoản"};
    Ui::AccountsManagerWidget *ui;
    QList<Person> &accountsData;
    QTabWidget *accountsList;

    void searchAccount();
};

#endif // ACCOUNTSMANAGERWIDGET_H
