#ifndef MAINWINDOWCONTROLLER_H
#define MAINWINDOWCONTROLLER_H

#include "accountsdataset.h"
#include "accountsmanagerwidget.h"
#include "person.h"
#include "product.h"
#include "productsdataset.h"
#include "productstab.h"
#include "registerdataset.h"
#include "registerdialog.h"

#include <QMainWindow>

namespace Ui {
class MainWindowController;
}

class MainWindowController : public QMainWindow, AccountsDataSet, ProductsDataSet, RegisterDataSet
{
    Q_OBJECT

public:
    explicit MainWindowController(QWidget *parent = 0);
    ~MainWindowController();

private slots:
    void on_popular_clicked();
    void on_incPrice_clicked();
    void on_decPrice_clicked();
    void on_username_returnPressed();
    void on_password_returnPressed();
    void on_login_clicked();
    void on_logout_clicked();
    void on_mainWidget_currentChanged(int index);
    void on_searchKeyword_returnPressed();
    void on_search_clicked();
    void on_username_textChanged(const QString &arg1);
    void on_password_textChanged(const QString &arg1);
    void on_searchKeyword_textChanged(const QString &arg1);
    void on__register_clicked();

private:
    const QString productsTabLabel[5] = {"TẤT CẢ", "IPHONE", "SAMSUNG", "OPPO", "HÃNG KHÁC"};
    Ui::MainWindowController *ui;
    const QString ACCOUNTS_DATA_PATH = "\\data\\accounts.txt";
    const QString PRODUCTS_DATA_PATH = "\\data\\products.txt";
    const QString REGISTER_DATA_PATH = "\\data\\register.txt";
    const QString STORE = "Cửa hàng";
    const QString SEARCH = "Tìm kiếm";
    int personIndex = -1;
    bool removedSearch = true;
    bool mainWindowControllerDestroyed = false;
    QTabWidget *popularProductsTab = new QTabWidget();
    QTabWidget *incProductsTab = new QTabWidget();
    QTabWidget *decProductsTab = new QTabWidget();
    QTabWidget *storeTab = new QTabWidget();
    AccountsManagerWidget *adminAccountsTab;
    QTabWidget *searchProductsTab = new QTabWidget();
    ProductsTab *searchResult;
    QList<ProductsTab*> popularList, incList, decList;
    RegisterDialog *d;

    int getPersonIndex(const QString &username, const QString &password);
    bool isAdministrator();
    bool isUser();
    void setVisibleLogin(bool arg);
    void setVisibleLogout(bool arg);
    void setVisibleSearchSort(bool arg);
    void acceptRegister();
    void login();
    void logout();
    void setInitialProducts(QTabWidget *&tab, QList<ProductsTab*> &list, bool (*cmp)(const Product&, const Product&));
    void setStore(QTabWidget *&tab);
    void getSearchResult();
    void setIsUser(bool value);
    void setIsGuess(bool value);
};

#endif // MAINWINDOWCONTROLLER_H
