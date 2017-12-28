/********************************************************************************
** Form generated from reading UI file 'tabbingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABBINGDIALOG_H
#define UI_TABBINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TabbingDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *spinBoxColumns;
    QLineEdit *lineEdit;
    QSpinBox *spinBoxRows;

    void setupUi(QDialog *TabbingDialog)
    {
        if (TabbingDialog->objectName().isEmpty())
            TabbingDialog->setObjectName(QStringLiteral("TabbingDialog"));
        TabbingDialog->resize(298, 159);
        gridLayout = new QGridLayout(TabbingDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        hboxLayout->setContentsMargins(0, 0, 0, 0);
#endif
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(TabbingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_3 = new QLabel(TabbingDialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(TabbingDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(TabbingDialog);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        spinBoxColumns = new QSpinBox(TabbingDialog);
        spinBoxColumns->setObjectName(QStringLiteral("spinBoxColumns"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(spinBoxColumns->sizePolicy().hasHeightForWidth());
        spinBoxColumns->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(spinBoxColumns, 0, 1, 1, 1);

        lineEdit = new QLineEdit(TabbingDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout1->addWidget(lineEdit, 2, 1, 1, 1);

        spinBoxRows = new QSpinBox(TabbingDialog);
        spinBoxRows->setObjectName(QStringLiteral("spinBoxRows"));
        sizePolicy1.setHeightForWidth(spinBoxRows->sizePolicy().hasHeightForWidth());
        spinBoxRows->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(spinBoxRows, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        QWidget::setTabOrder(spinBoxColumns, spinBoxRows);
        QWidget::setTabOrder(spinBoxRows, lineEdit);

        retranslateUi(TabbingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TabbingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TabbingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TabbingDialog);
    } // setupUi

    void retranslateUi(QDialog *TabbingDialog)
    {
        label_3->setText(QApplication::translate("TabbingDialog", "Spacing", 0));
        label_2->setText(QApplication::translate("TabbingDialog", "Num of Rows", 0));
        label->setText(QApplication::translate("TabbingDialog", "Num of Columns", 0));
        Q_UNUSED(TabbingDialog);
    } // retranslateUi

};

namespace Ui {
    class TabbingDialog: public Ui_TabbingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABBINGDIALOG_H
