/********************************************************************************
** Form generated from reading UI file 'usertooldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERTOOLDIALOG_H
#define UI_USERTOOLDIALOG_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_UserToolDialog
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QFrame *line;
    QGridLayout *gridLayout1;
    QLabel *label_3;
    QLineEdit *toolEdit;
    QLineEdit *itemEdit;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButtonWizard;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *UserToolDialog)
    {
        if (UserToolDialog->objectName().isEmpty())
            UserToolDialog->setObjectName(QStringLiteral("UserToolDialog"));
        UserToolDialog->resize(706, 250);
        gridLayout = new QGridLayout(UserToolDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        listWidget = new QListWidget(UserToolDialog);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy);
        listWidget->setMaximumSize(QSize(250, 16777215));

        gridLayout->addWidget(listWidget, 0, 0, 1, 1);

        line = new QFrame(UserToolDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 1, 1, 1);

        gridLayout1 = new QGridLayout();
#ifndef Q_OS_MAC
        gridLayout1->setSpacing(6);
#endif
        gridLayout1->setContentsMargins(0, 0, 0, 0);
        gridLayout1->setObjectName(QStringLiteral("gridLayout1"));
        label_3 = new QLabel(UserToolDialog);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout1->addWidget(label_3, 3, 0, 1, 3);

        toolEdit = new QLineEdit(UserToolDialog);
        toolEdit->setObjectName(QStringLiteral("toolEdit"));

        gridLayout1->addWidget(toolEdit, 2, 0, 1, 2);

        itemEdit = new QLineEdit(UserToolDialog);
        itemEdit->setObjectName(QStringLiteral("itemEdit"));

        gridLayout1->addWidget(itemEdit, 0, 1, 1, 2);

        label = new QLabel(UserToolDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(UserToolDialog);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout1->addItem(verticalSpacer, 4, 0, 1, 1);

        pushButtonWizard = new QPushButton(UserToolDialog);
        pushButtonWizard->setObjectName(QStringLiteral("pushButtonWizard"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButtonWizard->sizePolicy().hasHeightForWidth());
        pushButtonWizard->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/help.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonWizard->setIcon(icon);

        gridLayout1->addWidget(pushButtonWizard, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 2, 1, 1);

        buttonBox = new QDialogButtonBox(UserToolDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 3);

        QWidget::setTabOrder(itemEdit, toolEdit);

        retranslateUi(UserToolDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), UserToolDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(UserToolDialog);
    } // setupUi

    void retranslateUi(QDialog *UserToolDialog)
    {
        UserToolDialog->setWindowTitle(QApplication::translate("UserToolDialog", "Edit User Commands", 0));
        label_3->setText(QApplication::translate("UserToolDialog", "(the commands must be separated by '|')", 0));
        label->setText(QApplication::translate("UserToolDialog", "Menu Item", 0));
        label_2->setText(QApplication::translate("UserToolDialog", "Command (% : filename without extension)", 0));
        pushButtonWizard->setText(QApplication::translate("UserToolDialog", "wizard", 0));
    } // retranslateUi

};

namespace Ui {
    class UserToolDialog: public Ui_UserToolDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERTOOLDIALOG_H
