/********************************************************************************
** Form generated from reading UI file 'usercompletiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERCOMPLETIONDIALOG_H
#define UI_USERCOMPLETIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UserCompletionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *addButton;
    QListWidget *listWidget;
    QSpacerItem *verticalSpacer;
    QPushButton *deleteButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *replaceButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UserCompletionDialog)
    {
        if (UserCompletionDialog->objectName().isEmpty())
            UserCompletionDialog->setObjectName(QStringLiteral("UserCompletionDialog"));
        UserCompletionDialog->resize(589, 353);
        verticalLayout_2 = new QVBoxLayout(UserCompletionDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(UserCompletionDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 0, 1, 1);

        addButton = new QPushButton(UserCompletionDialog);
        addButton->setObjectName(QStringLiteral("addButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/errornext.png"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon);

        gridLayout->addWidget(addButton, 0, 1, 1, 1);

        listWidget = new QListWidget(UserCompletionDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        gridLayout->addWidget(listWidget, 0, 2, 6, 1);

        verticalSpacer = new QSpacerItem(85, 88, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 1, 1, 1);

        deleteButton = new QPushButton(UserCompletionDialog);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        gridLayout->addWidget(deleteButton, 5, 1, 1, 1);

        label = new QLabel(UserCompletionDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(UserCompletionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(UserCompletionDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        replaceButton = new QPushButton(UserCompletionDialog);
        replaceButton->setObjectName(QStringLiteral("replaceButton"));

        gridLayout->addWidget(replaceButton, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        groupBox = new QGroupBox(UserCompletionDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(groupBox);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);


        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(UserCompletionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(lineEdit, addButton);
        QWidget::setTabOrder(addButton, listWidget);
        QWidget::setTabOrder(listWidget, deleteButton);
        QWidget::setTabOrder(deleteButton, buttonBox);

        retranslateUi(UserCompletionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), UserCompletionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), UserCompletionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserCompletionDialog);
    } // setupUi

    void retranslateUi(QDialog *UserCompletionDialog)
    {
        UserCompletionDialog->setWindowTitle(QApplication::translate("UserCompletionDialog", "Completion", 0));
        addButton->setText(QApplication::translate("UserCompletionDialog", "Add", 0));
        deleteButton->setText(QApplication::translate("UserCompletionDialog", "Delete", 0));
        label->setText(QApplication::translate("UserCompletionDialog", "( @ : placeholder )", 0));
        label_2->setText(QApplication::translate("UserCompletionDialog", "( #bib# : bibliography item )", 0));
        label_3->setText(QApplication::translate("UserCompletionDialog", "( #label# : label item )", 0));
        replaceButton->setText(QApplication::translate("UserCompletionDialog", "Replace", 0));
        groupBox->setTitle(QApplication::translate("UserCompletionDialog", "Items already supplied by Texmaker", 0));
    } // retranslateUi

};

namespace Ui {
    class UserCompletionDialog: public Ui_UserCompletionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERCOMPLETIONDIALOG_H
