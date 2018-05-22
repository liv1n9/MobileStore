#ifndef MAINWINDOWCONTROLLER_H
#define MAINWINDOWCONTROLLER_H

#include "accountsdataset.h"
#include "administrator.h"
#include "comment.h"
#include "person.h"
#include "product.h"
#include "productsdataset.h"
#include "productstab.h"
#include "user.h"

#include <QMainWindow>

namespace Ui {
class MainWindowController;
}

class MainWindowController : public QMainWindow, AccountsDataSet, ProductsDataSet
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

private:
    const QString productsTabLabel[5] = {"TẤT CẢ", "IPHONE", "SAMSUNG", "OPPO", "HÃNG KHÁC"};
    Ui::MainWindowController *ui;
    const QString ACCOUNTS_DATA_PATH = "\\accounts.txt";
    const QString PRODUCTS_DATA_PATH = "\\products.txt";
    const QString STORE = "Cửa hàng";
    const QString SEARCH = "Tìm kiếm";
    int personIndex = -1;
    bool removedSearch = true;
    bool mainWindowControllerDestroyed = false;
    Administrator *adminAccount;
    User *userAccount;
    QTabWidget *popularProductsTab, *incProductsTab, *decProductsTab;
    QTabWidget *storeTab = new QTabWidget(), *adminAccountsTab = new QTabWidget(), *adminProductsTab = new QTabWidget();
    QTabWidget *searchProductsTab = new QTabWidget();
    ProductsTab *searchResult;

    int getPersonIndex(const QString &username, const QString &password);
    bool isAdministrator();
    bool isUser();
    void setVisibleLogin(bool arg);
    void setVisibleLogout(bool arg);
    void setVisibleSearchSort(bool arg);
    void login();
    void logout();
    void setInitialProducts(QTabWidget *&tab, bool (*cmp)(const Product&, const Product&));
    void setStore(QTabWidget *&tab);
    void getSearchResult();

};

#endif // MAINWINDOWCONTROLLER_H
