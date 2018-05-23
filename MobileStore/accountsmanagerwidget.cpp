#include "accountsmanagerwidget.h"
#include "algoutils.h"
#include "compareutils.h"
#include "deleteaccountbutton.h"
#include "ui_accountsmanagerwidget.h"

#include <QDebug>
#include <QMessageBox>
#include <QTableWidget>

AccountsManagerWidget::AccountsManagerWidget(QList<Person> &value, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AccountsManagerWidget),
    accountsData(value)
{
    ui->setupUi(this);
    this->setStyleSheet("QTabBar::tab { width: 50px; height: 15px }");
    setAccountsList();
}

AccountsManagerWidget::~AccountsManagerWidget()
{
    delete ui;
}

void AccountsManagerWidget::setAccountsList()
{
    for (int i = 0; i < ui->accountsInfo->count(); i++) {
        delete ui->accountsInfo->widget(i);
        ui->accountsInfo->removeTab(0);
    }
    int cnt = 0;
    do {
        QTableWidget *table = new QTableWidget();
        table->verticalHeader()->hide();
        table->setRowCount(ROW);
        table->setColumnCount(5);
        table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        table->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        table->setSelectionBehavior(QAbstractItemView::SelectItems) ;
        table->setSelectionMode(QAbstractItemView::SingleSelection);
        for (int i = 0; i < 5; i++) {
            table->setHorizontalHeaderItem(i, new QTableWidgetItem(HEADER[i]));
        }
        bool ok = false;
        for (int i = cnt * ROW; i < std::min((int)accountsData.size() - 1, cnt * ROW + ROW); i++) {
            ok = true;
            int row = i - cnt * ROW;
            table->setItem(row, 0, new QTableWidgetItem(QString::number(row + 1)));
            table->setItem(row, 1, new QTableWidgetItem(QString::number(accountsData.at(i + 1).getId())));
            table->setItem(row, 2, new QTableWidgetItem(accountsData.at(i + 1).getName()));
            table->setItem(row, 3, new QTableWidgetItem(accountsData.at(i + 1).getUsername()));
            AccountsManagerWidget *tmp = this;
            DeleteAccountButton *button = new DeleteAccountButton("Xoá", i + 1, accountsData, tmp);
            table->setCellWidget(row, 4, button);
        }
        if (ok || cnt == 0) ui->accountsInfo->addTab(table, QString::number(cnt + 1));
        cnt++;
    } while (cnt * ROW < accountsData.size());
}

void AccountsManagerWidget::setAccountsData(const QList<Person> &value)
{
    accountsData = value;
}

void AccountsManagerWidget::searchAccount()
{
    QList<std::pair<int, Person> > ts;
    QList<Person> tmp = accountsData;
    for (Person i: accountsData) {
        ts.append({AlgoUtils::lcs(i.getName(), ui->searchKeyword->text()), i});
    }
    sort(ts.begin(), ts.end(), CompareUtils::cmpSearchPerson);
    accountsData.clear();
    for (int i = 0; i < ts.size(); i++) {
        if (ts.at(i).first > 0) {
            accountsData.append(ts.at(i).second);
        }
    }
    setAccountsList();
    accountsData = tmp;
}

void AccountsManagerWidget::on_searchKeyword_textChanged(const QString &arg1)
{
    if (arg1.length() > 0) searchAccount();
    else setAccountsList();
}
