/********************************************************************************
** Form generated from reading UI file 'x11fontdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_X11FONTDIALOG_H
#define UI_X11FONTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_X11FontDialog
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *labelFamily;
    QComboBox *comboBoxFont;
    QLabel *labelSize;
    QSpinBox *spinBoxSize;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *X11FontDialog)
    {
        if (X11FontDialog->objectName().isEmpty())
            X11FontDialog->setObjectName(QStringLiteral("X11FontDialog"));
        X11FontDialog->resize(317, 116);
        gridLayout = new QGridLayout(X11FontDialog);
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
        labelFamily = new QLabel(X11FontDialog);
        labelFamily->setObjectName(QStringLiteral("labelFamily"));

        gridLayout1->addWidget(labelFamily, 0, 0, 1, 1);

        comboBoxFont = new QComboBox(X11FontDialog);
        comboBoxFont->setObjectName(QStringLiteral("comboBoxFont"));

        gridLayout1->addWidget(comboBoxFont, 0, 1, 1, 1);

        labelSize = new QLabel(X11FontDialog);
        labelSize->setObjectName(QStringLiteral("labelSize"));

        gridLayout1->addWidget(labelSize, 1, 0, 1, 1);

        spinBoxSize = new QSpinBox(X11FontDialog);
        spinBoxSize->setObjectName(QStringLiteral("spinBoxSize"));
        spinBoxSize->setMinimum(4);
        spinBoxSize->setMaximum(48);
        spinBoxSize->setValue(12);

        gridLayout1->addWidget(spinBoxSize, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(X11FontDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(X11FontDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), X11FontDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), X11FontDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(X11FontDialog);
    } // setupUi

    void retranslateUi(QDialog *X11FontDialog)
    {
        X11FontDialog->setWindowTitle(QApplication::translate("X11FontDialog", "Select a Font", 0));
        labelFamily->setText(QApplication::translate("X11FontDialog", "Font Family", 0));
        labelSize->setText(QApplication::translate("X11FontDialog", "Font Size", 0));
    } // retranslateUi

};

namespace Ui {
    class X11FontDialog: public Ui_X11FontDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_X11FONTDIALOG_H
