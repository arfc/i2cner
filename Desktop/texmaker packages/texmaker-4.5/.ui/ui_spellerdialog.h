/********************************************************************************
** Form generated from reading UI file 'spellerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPELLERDIALOG_H
#define UI_SPELLERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_SpellerDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditOriginal;
    QPushButton *pushButtonReplace;
    QLabel *label_2;
    QLineEdit *lineEditNew;
    QPushButton *pushButtonIgnore;
    QSpacerItem *spacerItem;
    QPushButton *pushButtonAlwaysIgnore;
    QLabel *label_3;
    QListWidget *listWidget;
    QSpacerItem *spacerItem1;
    QSpacerItem *spacerItem2;
    QLabel *labelMessage;
    QPushButton *okButton;

    void setupUi(QDialog *SpellerDialog)
    {
        if (SpellerDialog->objectName().isEmpty())
            SpellerDialog->setObjectName(QStringLiteral("SpellerDialog"));
        SpellerDialog->resize(477, 255);
        gridLayout = new QGridLayout(SpellerDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(SpellerDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEditOriginal = new QLineEdit(SpellerDialog);
        lineEditOriginal->setObjectName(QStringLiteral("lineEditOriginal"));
        lineEditOriginal->setReadOnly(true);

        gridLayout->addWidget(lineEditOriginal, 0, 1, 1, 1);

        pushButtonReplace = new QPushButton(SpellerDialog);
        pushButtonReplace->setObjectName(QStringLiteral("pushButtonReplace"));

        gridLayout->addWidget(pushButtonReplace, 0, 2, 1, 1);

        label_2 = new QLabel(SpellerDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEditNew = new QLineEdit(SpellerDialog);
        lineEditNew->setObjectName(QStringLiteral("lineEditNew"));

        gridLayout->addWidget(lineEditNew, 1, 1, 1, 1);

        pushButtonIgnore = new QPushButton(SpellerDialog);
        pushButtonIgnore->setObjectName(QStringLiteral("pushButtonIgnore"));

        gridLayout->addWidget(pushButtonIgnore, 1, 2, 1, 1);

        spacerItem = new QSpacerItem(371, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 2, 0, 1, 2);

        pushButtonAlwaysIgnore = new QPushButton(SpellerDialog);
        pushButtonAlwaysIgnore->setObjectName(QStringLiteral("pushButtonAlwaysIgnore"));

        gridLayout->addWidget(pushButtonAlwaysIgnore, 2, 2, 1, 1);

        label_3 = new QLabel(SpellerDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        listWidget = new QListWidget(SpellerDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setModelColumn(0);

        gridLayout->addWidget(listWidget, 3, 1, 2, 1);

        spacerItem1 = new QSpacerItem(87, 91, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 3, 2, 2, 1);

        spacerItem2 = new QSpacerItem(110, 61, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem2, 4, 0, 1, 1);

        labelMessage = new QLabel(SpellerDialog);
        labelMessage->setObjectName(QStringLiteral("labelMessage"));
        labelMessage->setTextFormat(Qt::RichText);

        gridLayout->addWidget(labelMessage, 5, 0, 1, 2);

        okButton = new QPushButton(SpellerDialog);
        okButton->setObjectName(QStringLiteral("okButton"));

        gridLayout->addWidget(okButton, 5, 2, 1, 1);

        QWidget::setTabOrder(pushButtonReplace, pushButtonIgnore);
        QWidget::setTabOrder(pushButtonIgnore, pushButtonAlwaysIgnore);
        QWidget::setTabOrder(pushButtonAlwaysIgnore, okButton);
        QWidget::setTabOrder(okButton, lineEditOriginal);
        QWidget::setTabOrder(lineEditOriginal, lineEditNew);
        QWidget::setTabOrder(lineEditNew, listWidget);

        retranslateUi(SpellerDialog);
        QObject::connect(okButton, SIGNAL(clicked()), SpellerDialog, SLOT(accept()));

        pushButtonReplace->setDefault(true);


        QMetaObject::connectSlotsByName(SpellerDialog);
    } // setupUi

    void retranslateUi(QDialog *SpellerDialog)
    {
        SpellerDialog->setWindowTitle(QApplication::translate("SpellerDialog", "Check Spelling", 0));
        label->setText(QApplication::translate("SpellerDialog", "Unknown word:", 0));
        pushButtonReplace->setText(QApplication::translate("SpellerDialog", "Replace", 0));
        label_2->setText(QApplication::translate("SpellerDialog", "Replace with:", 0));
        pushButtonIgnore->setText(QApplication::translate("SpellerDialog", "Ignore", 0));
        pushButtonAlwaysIgnore->setText(QApplication::translate("SpellerDialog", "Always ignore", 0));
        label_3->setText(QApplication::translate("SpellerDialog", "Suggested words :", 0));
        labelMessage->setText(QString());
        okButton->setText(QApplication::translate("SpellerDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class SpellerDialog: public Ui_SpellerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPELLERDIALOG_H
