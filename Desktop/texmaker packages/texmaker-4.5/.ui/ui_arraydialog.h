/********************************************************************************
** Form generated from reading UI file 'arraydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ARRAYDIALOG_H
#define UI_ARRAYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ArrayDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QTableWidget *tableWidget;
    QLabel *label_4;
    QSpinBox *spinBoxRows;
    QLabel *label_3;
    QSpinBox *spinBoxColumns;
    QLabel *label_2;
    QComboBox *comboAlignment;
    QLabel *label;
    QComboBox *comboEnvironment;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ArrayDialog)
    {
        if (ArrayDialog->objectName().isEmpty())
            ArrayDialog->setObjectName(QStringLiteral("ArrayDialog"));
        ArrayDialog->resize(472, 393);
        gridLayout = new QGridLayout(ArrayDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        tableWidget = new QTableWidget(ArrayDialog);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setRowCount(0);
        tableWidget->setColumnCount(0);

        gridLayout1->addWidget(tableWidget, 0, 0, 1, 2);

        label_4 = new QLabel(ArrayDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout1->addWidget(label_4, 1, 0, 1, 1);

        spinBoxRows = new QSpinBox(ArrayDialog);
        spinBoxRows->setObjectName(QStringLiteral("spinBoxRows"));

        gridLayout1->addWidget(spinBoxRows, 1, 1, 1, 1);

        label_3 = new QLabel(ArrayDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        spinBoxColumns = new QSpinBox(ArrayDialog);
        spinBoxColumns->setObjectName(QStringLiteral("spinBoxColumns"));
        spinBoxColumns->setMinimum(1);

        gridLayout1->addWidget(spinBoxColumns, 2, 1, 1, 1);

        label_2 = new QLabel(ArrayDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 3, 0, 1, 1);

        comboAlignment = new QComboBox(ArrayDialog);
        comboAlignment->setObjectName(QStringLiteral("comboAlignment"));
        comboAlignment->setMaxVisibleItems(11);

        gridLayout1->addWidget(comboAlignment, 3, 1, 1, 1);

        label = new QLabel(ArrayDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout1->addWidget(label, 4, 0, 1, 1);

        comboEnvironment = new QComboBox(ArrayDialog);
        comboEnvironment->setObjectName(QStringLiteral("comboEnvironment"));

        gridLayout1->addWidget(comboEnvironment, 4, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ArrayDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(ArrayDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ArrayDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ArrayDialog, SLOT(reject()));

        comboAlignment->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(ArrayDialog);
    } // setupUi

    void retranslateUi(QDialog *ArrayDialog)
    {
        label_4->setText(QApplication::translate("ArrayDialog", "Num of Rows", 0));
        label_3->setText(QApplication::translate("ArrayDialog", "Num of Columns", 0));
        label_2->setText(QApplication::translate("ArrayDialog", "Columns Alignment", 0));
        label->setText(QApplication::translate("ArrayDialog", "Environment", 0));
        Q_UNUSED(ArrayDialog);
    } // retranslateUi

};

namespace Ui {
    class ArrayDialog: public Ui_ArrayDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ARRAYDIALOG_H
