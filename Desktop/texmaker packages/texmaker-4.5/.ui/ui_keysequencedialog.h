/********************************************************************************
** Form generated from reading UI file 'keysequencedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYSEQUENCEDIALOG_H
#define UI_KEYSEQUENCEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_KeySequenceDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *hboxLayout;
    QPushButton *pushButtonClear;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KeySequenceDialog)
    {
        if (KeySequenceDialog->objectName().isEmpty())
            KeySequenceDialog->setObjectName(QStringLiteral("KeySequenceDialog"));
        KeySequenceDialog->resize(335, 85);
        gridLayout = new QGridLayout(KeySequenceDialog);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
#ifndef Q_OS_MAC
        gridLayout->setContentsMargins(9, 9, 9, 9);
#endif
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(KeySequenceDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        pushButtonClear = new QPushButton(KeySequenceDialog);
        pushButtonClear->setObjectName(QStringLiteral("pushButtonClear"));

        hboxLayout->addWidget(pushButtonClear);

        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(KeySequenceDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout->addLayout(hboxLayout, 1, 0, 1, 1);


        retranslateUi(KeySequenceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), KeySequenceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), KeySequenceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(KeySequenceDialog);
    } // setupUi

    void retranslateUi(QDialog *KeySequenceDialog)
    {
        KeySequenceDialog->setWindowTitle(QApplication::translate("KeySequenceDialog", "Shortcut", 0));
        pushButtonClear->setText(QApplication::translate("KeySequenceDialog", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class KeySequenceDialog: public Ui_KeySequenceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYSEQUENCEDIALOG_H
