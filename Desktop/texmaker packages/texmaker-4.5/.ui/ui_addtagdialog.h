/********************************************************************************
** Form generated from reading UI file 'addtagdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDTAGDIALOG_H
#define UI_ADDTAGDIALOG_H

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
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddTagDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *itemEdit;
    QLabel *label_2;
    QPlainTextEdit *tagEdit;
    QSpacerItem *verticalSpacer;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *triggerEdit;
    QLabel *label_5;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddTagDialog)
    {
        if (AddTagDialog->objectName().isEmpty())
            AddTagDialog->setObjectName(QStringLiteral("AddTagDialog"));
        AddTagDialog->resize(462, 181);
        verticalLayout = new QVBoxLayout(AddTagDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(AddTagDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        itemEdit = new QLineEdit(AddTagDialog);
        itemEdit->setObjectName(QStringLiteral("itemEdit"));

        gridLayout->addWidget(itemEdit, 0, 1, 1, 1);

        label_2 = new QLabel(AddTagDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tagEdit = new QPlainTextEdit(AddTagDialog);
        tagEdit->setObjectName(QStringLiteral("tagEdit"));

        gridLayout->addWidget(tagEdit, 1, 1, 2, 1);

        verticalSpacer = new QSpacerItem(78, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);

        label_3 = new QLabel(AddTagDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(AddTagDialog);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        triggerEdit = new QLineEdit(AddTagDialog);
        triggerEdit->setObjectName(QStringLiteral("triggerEdit"));

        horizontalLayout->addWidget(triggerEdit);

        label_5 = new QLabel(AddTagDialog);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        buttonBox = new QDialogButtonBox(AddTagDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(itemEdit, tagEdit);
        QWidget::setTabOrder(tagEdit, triggerEdit);
        QWidget::setTabOrder(triggerEdit, buttonBox);

        retranslateUi(AddTagDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddTagDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddTagDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddTagDialog);
    } // setupUi

    void retranslateUi(QDialog *AddTagDialog)
    {
        AddTagDialog->setWindowTitle(QApplication::translate("AddTagDialog", "Edit User Tags", 0));
        label->setText(QApplication::translate("AddTagDialog", "Item", 0));
        label_2->setText(QApplication::translate("AddTagDialog", "LaTeX Content", 0));
        label_3->setText(QApplication::translate("AddTagDialog", "Keyboard Trigger", 0));
        label_4->setText(QString());
        label_5->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class AddTagDialog: public Ui_AddTagDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDTAGDIALOG_H
