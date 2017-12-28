/********************************************************************************
** Form generated from reading UI file 'addoptiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDOPTIONDIALOG_H
#define UI_ADDOPTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_AddOptionDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddOptionDialog)
    {
        if (AddOptionDialog->objectName().isEmpty())
            AddOptionDialog->setObjectName(QStringLiteral("AddOptionDialog"));
        AddOptionDialog->resize(291, 83);
        gridLayout = new QGridLayout(AddOptionDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(AddOptionDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(AddOptionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(AddOptionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddOptionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddOptionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddOptionDialog);
    } // setupUi

    void retranslateUi(QDialog *AddOptionDialog)
    {
        AddOptionDialog->setWindowTitle(QApplication::translate("AddOptionDialog", "New", 0));
    } // retranslateUi

};

namespace Ui {
    class AddOptionDialog: public Ui_AddOptionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDOPTIONDIALOG_H
