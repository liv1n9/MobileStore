/********************************************************************************
** Form generated from reading UI file 'searchresultdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHRESULTDIALOG_H
#define UI_SEARCHRESULTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_SearchResultDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SearchResultDialog)
    {
        if (SearchResultDialog->objectName().isEmpty())
            SearchResultDialog->setObjectName(QStringLiteral("SearchResultDialog"));
        SearchResultDialog->resize(667, 462);
        buttonBox = new QDialogButtonBox(SearchResultDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(560, 410, 81, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel);
        buttonBox->setCenterButtons(false);

        retranslateUi(SearchResultDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SearchResultDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SearchResultDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SearchResultDialog);
    } // setupUi

    void retranslateUi(QDialog *SearchResultDialog)
    {
        SearchResultDialog->setWindowTitle(QApplication::translate("SearchResultDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchResultDialog: public Ui_SearchResultDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHRESULTDIALOG_H
