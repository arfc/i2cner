/********************************************************************************
** Form generated from reading UI file 'encodingdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENCODINGDIALOG_H
#define UI_ENCODINGDIALOG_H

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

QT_BEGIN_NAMESPACE

class Ui_EncodingDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QComboBox *comboBoxEncoding;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EncodingDialog)
    {
        if (EncodingDialog->objectName().isEmpty())
            EncodingDialog->setObjectName(QStringLiteral("EncodingDialog"));
        EncodingDialog->resize(374, 125);
        gridLayout = new QGridLayout(EncodingDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(EncodingDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(EncodingDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboBoxEncoding = new QComboBox(EncodingDialog);
        comboBoxEncoding->setObjectName(QStringLiteral("comboBoxEncoding"));

        gridLayout->addWidget(comboBoxEncoding, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(EncodingDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);

        QWidget::setTabOrder(comboBoxEncoding, buttonBox);

        retranslateUi(EncodingDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EncodingDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EncodingDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EncodingDialog);
    } // setupUi

    void retranslateUi(QDialog *EncodingDialog)
    {
        EncodingDialog->setWindowTitle(QApplication::translate("EncodingDialog", "Texmaker", 0));
        label->setText(QApplication::translate("EncodingDialog", "It seems that this file cannot be correctly decoded\n"
"with the default encoding setting", 0));
        label_2->setText(QApplication::translate("EncodingDialog", "Use this encoding :", 0));
    } // retranslateUi

};

namespace Ui {
    class EncodingDialog: public Ui_EncodingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENCODINGDIALOG_H
