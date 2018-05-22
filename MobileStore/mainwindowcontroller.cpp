#include "algoutils.h"
#include "compareutils.h"
#include "fileutils.h"
#include "mainwindowcontroller.h"
#include "ui_mainwindowcontroller.h"

#include <QFile>
#include <QTCore/QTextStream>
#include <QDebug>
#include <QDesktopWidget>
#include <QMessageBox>

MainWindowController::MainWindowController(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindowController)
{
    ui->setupUi(this);
    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight, Qt::AlignCenter,
                                          this->size(), qApp->desktop()->availableGeometry()));
    this->setFixedSize(size());
    this->setWindowFlags(Qt::MSWindowsFixedSizeDialogHint);
    ui->mainWidget->setStyleSheet("QTabBar::tab { width: 160px; height: 30px}");
    setVisibleLogout(false);
    getAccountsData(ACCOUNTS_DATA_PATH);
    getProductsData(PRODUCTS_DATA_PATH);
    setInitialProducts(popularProductsTab, CompareUtils::cmpPopular);
    setInitialProducts(incProductsTab, CompareUtils::cmpIncPrice);
    setInitialProducts(decProductsTab, CompareUtils::cmpDecPrice);
    setStore(popularProductsTab);
    ui->mainWidget->setCurrentIndex(0);
}

MainWindowController::~MainWindowController()
{
    mainWindowControllerDestroyed = true;
    delete ui;
    updateAccountsData(ACCOUNTS_DATA_PATH);
    updateProductsData(PRODUCTS_DATA_PATH);
    if (isAdministrator()) {
        delete adminAccount;
        delete adminAccountsTab;
        delete adminProductsTab;
    }
    if (isUser()) delete userAccount;
    delete popularProductsTab;
    delete incProductsTab;
    delete decProductsTab;
    if (!removedSearch) delete searchProductsTab;
}

int MainWindowController::getPersonIndex(const QString &username, const QString &password)
{
    for (int i = 0; i < accountsData.size(); i++) {
        if (accountsData.at(i).getUsername() == username && accountsData.at(i).getPassword() == password) {
            return i;
        }
    }
    return -1;
}

bool MainWindowController::isAdministrator()
{
    return personIndex == 0;
}

bool MainWindowController::isUser()
{
    return personIndex > 0;
}

void MainWindowController::setVisibleLogin(bool arg)
{
    ui->username->setVisible(arg);
    ui->password->setVisible(arg);
    ui->login->setVisible(arg);
    ui->_register->setVisible(arg);
}

void MainWindowController::setVisibleLogout(bool arg)
{
    ui->greeting->setVisible(arg);
    ui->logout->setVisible(arg);
}

void MainWindowController::setVisibleSearchSort(bool arg)
{
    ui->searchKeyword->setVisible(arg);
    ui->search->setVisible(arg);
    ui->popular->setVisible(arg);
    ui->incPrice->setVisible(arg);
    ui->decPrice->setVisible(arg);
}

void MainWindowController::login()
{
    QString username = ui->username->text();
    QString password = ui->password->text();
    personIndex = getPersonIndex(username, password);
    if (personIndex >= 0) {
        ui->greeting->setText("Xin chào " + accountsData.at(personIndex).getName());
        setVisibleLogin(false);
        setVisibleLogout(true);
        if (isAdministrator()) {
            adminAccount = new Administrator();
            adminAccount->setId(accountsData.at(personIndex).getId());
            adminAccount->setUsername(username);
            adminAccount->setPassword(password);
            adminAccount->setName(accountsData.at(personIndex).getName());
            ui->mainWidget->addTab(adminAccountsTab, "Quản lý tài khoản");
            ui->mainWidget->addTab(adminProductsTab, "Quản lý sản phẩm");
        } else if (isUser()) {
            userAccount = new User();
            userAccount->setId(accountsData.at(personIndex).getId());
            userAccount->setUsername(username);
            userAccount->setPassword(password);
            userAccount->setName(accountsData.at(personIndex).getName());
        }
        QMessageBox::information(this, " ", "Đăng nhập thành công!");
    } else {
        QMessageBox::information(this, " ", "Tài khoản không tồn tại!");
        ui->password->clear();
    }
}

void MainWindowController::logout()
{
    int arg = QMessageBox::question(this, " ", "Bạn có muốn đăng xuất không?");
    if (arg == QMessageBox::Yes) {
        setVisibleLogin(true);
        setVisibleLogout(false);
        ui->username->clear();
        ui->password->clear();
        ui->mainWidget->removeTab(1);
        ui->mainWidget->removeTab(1);
        QMessageBox::information(this, " ", "Đăng xuất thành công!");
        personIndex = -1;
    }
}


void MainWindowController::setInitialProducts(QTabWidget *&tab, bool (*cmp)(const Product&, const Product&))
{
    tab = new QTabWidget();
    tab->setStyleSheet("QTabBar::tab { width: 198px; height: 50px; font-size: 12px}");
    for (int i = 0; i < 5; i++) {
        ProductsTab *productsTab = new ProductsTab(productsData, productsTabLabel[i], cmp);
        tab->addTab(productsTab->getProductsTab(), productsTabLabel[i]);
    }
}

void MainWindowController::setStore(QTabWidget *&tab)
{
    int current = storeTab->currentIndex();
    if (current < 0) current = 0;
    storeTab = tab;
    ui->mainWidget->removeTab(0);
    ui->mainWidget->insertTab(0, storeTab, STORE);
    storeTab->setCurrentIndex(current);
    ui->mainWidget->setCurrentIndex(0);
}

void MainWindowController::getSearchResult()
{
    if (!removedSearch) delete searchProductsTab;
    removedSearch = false;
    searchResult = new ProductsTab(productsData, "search" + ui->searchKeyword->text(), CompareUtils::cmpPopular);
    QString searchInfo = QString::number(searchResult->getProductsDataSize()) + " kết quả tìm kiếm cho từ khoá: """
            + ui->searchKeyword->text() + """";
    searchProductsTab = new QTabWidget();
    searchProductsTab->addTab(searchResult->getProductsTab(), searchInfo);
    searchProductsTab->setStyleSheet("QTabBar::tab { width: " + QString::number(searchInfo.length()*10)
                                     + "px; height: 30px; font-size: 12px}");
    ui->mainWidget->insertTab(0, searchProductsTab, SEARCH);
    ui->mainWidget->setCurrentIndex(0);
}

void MainWindowController::on_popular_clicked()
{
    if (ui->popular->isChecked()) {
        ui->incPrice->setChecked(false);
        ui->decPrice->setChecked(false);
        setStore(popularProductsTab);
    } else {
        ui->popular->setChecked(true);
    }
}

void MainWindowController::on_incPrice_clicked()
{
    if (ui->incPrice->isChecked()) {
        ui->popular->setChecked(false);
        ui->decPrice->setChecked(false);
        setStore(incProductsTab);
    } else {
        ui->incPrice->setChecked(true);
    }
}

void MainWindowController::on_decPrice_clicked()
{
    if (ui->decPrice->isChecked()) {
        ui->popular->setChecked(false);
        ui->incPrice->setChecked(false);
        setStore(decProductsTab);
    } else {
        ui->decPrice->setChecked(true);
    }
}

void MainWindowController::on_username_returnPressed()
{
    login();
}

void MainWindowController::on_password_returnPressed()
{
    login();
}

void MainWindowController::on_login_clicked()
{
    login();
}

void MainWindowController::on_logout_clicked()
{
    logout();
}

void MainWindowController::on_mainWidget_currentChanged(int index)
{
    if (!mainWindowControllerDestroyed) {
        setVisibleSearchSort(ui->mainWidget->currentWidget() == storeTab);
        if (ui->mainWidget->count() > 0 && ui->mainWidget->currentWidget() == storeTab) {
            storeTab->setCurrentIndex(0);
        }
    }
    if (index > 0 && !removedSearch) {
        removedSearch = true;
        delete searchResult;
        delete searchProductsTab;
        ui->searchKeyword->clear();
    }
}

void MainWindowController::on_searchKeyword_returnPressed()
{
    getSearchResult();
}

void MainWindowController::on_search_clicked()
{
    getSearchResult();
}
