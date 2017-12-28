/********************************************************************************
** Form generated from reading UI file 'usermenudialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERMENUDIALOG_H
#define UI_USERMENUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>

QT_BEGIN_NAMESPACE

class Ui_UserMenuDialog
{
public:
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QFrame *line;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *itemEdit;
    QLabel *label_2;
    QPlainTextEdit *tagEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UserMenuDialog)
    {
        if (UserMenuDialog->objectName().isEmpty())
            UserMenuDialog->setObjectName(QStringLiteral("UserMenuDialog"));
        UserMenuDialog->resize(617, 313);
        gridLayout_2 = new QGridLayout(UserMenuDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        listWidget = new QListWidget(UserMenuDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMaximumSize(QSize(300, 16777215));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        line = new QFrame(UserMenuDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line, 0, 1, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(UserMenuDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        itemEdit = new QLineEdit(UserMenuDialog);
        itemEdit->setObjectName(QStringLiteral("itemEdit"));

        gridLayout->addWidget(itemEdit, 0, 1, 1, 1);

        label_2 = new QLabel(UserMenuDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        tagEdit = new QPlainTextEdit(UserMenuDialog);
        tagEdit->setObjectName(QStringLiteral("tagEdit"));

        gridLayout->addWidget(tagEdit, 2, 0, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 2, 1, 1);

        buttonBox = new QDialogButtonBox(UserMenuDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 3);


        retranslateUi(UserMenuDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), UserMenuDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserMenuDialog);
    } // setupUi

    void retranslateUi(QDialog *UserMenuDialog)
    {
        UserMenuDialog->setWindowTitle(QApplication::translate("UserMenuDialog", "Edit User Tags", 0));
        label->setText(QApplication::translate("UserMenuDialog", "Menu Item", 0));
        label_2->setText(QApplication::translate("UserMenuDialog", "LaTeX Content", 0));
    } // retranslateUi

};

namespace Ui {
    class UserMenuDialog: public Ui_UserMenuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERMENUDIALOG_H
