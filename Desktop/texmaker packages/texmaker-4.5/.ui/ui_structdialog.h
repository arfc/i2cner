/********************************************************************************
** Form generated from reading UI file 'structdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRUCTDIALOG_H
#define UI_STRUCTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_StructDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLineEdit *TitlelineEdit;
    QCheckBox *checkBox;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *StructDialog)
    {
        if (StructDialog->objectName().isEmpty())
            StructDialog->setObjectName(QStringLiteral("StructDialog"));
        StructDialog->resize(361, 114);
        gridLayout = new QGridLayout(StructDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout1->setContentsMargins(0, 0, 0, 0);
#endif
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        TitlelineEdit = new QLineEdit(StructDialog);
        TitlelineEdit->setObjectName(QStringLiteral("TitlelineEdit"));

        gridLayout1->addWidget(TitlelineEdit, 0, 1, 1, 1);

        checkBox = new QCheckBox(StructDialog);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setChecked(true);

        gridLayout1->addWidget(checkBox, 1, 1, 1, 1);

        label = new QLabel(StructDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(label, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(StructDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(TitlelineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(TitlelineEdit, checkBox);

        retranslateUi(StructDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), StructDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), StructDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(StructDialog);
    } // setupUi

    void retranslateUi(QDialog *StructDialog)
    {
        StructDialog->setWindowTitle(QApplication::translate("StructDialog", "Structure", 0));
        checkBox->setText(QApplication::translate("StructDialog", "Numeration", 0));
        label->setText(QApplication::translate("StructDialog", "Title", 0));
    } // retranslateUi

};

namespace Ui {
    class StructDialog: public Ui_StructDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRUCTDIALOG_H
