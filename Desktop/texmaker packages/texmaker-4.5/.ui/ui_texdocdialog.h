/********************************************************************************
** Form generated from reading UI file 'texdocdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXDOCDIALOG_H
#define UI_TEXDOCDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TexdocDialog
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *moreButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QFrame *extension;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelCommand;
    QLineEdit *lineEditCommand;
    QPushButton *pushButton;

    void setupUi(QDialog *TexdocDialog)
    {
        if (TexdocDialog->objectName().isEmpty())
            TexdocDialog->setObjectName(QStringLiteral("TexdocDialog"));
        TexdocDialog->resize(469, 119);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TexdocDialog->sizePolicy().hasHeightForWidth());
        TexdocDialog->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(TexdocDialog);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit = new QLineEdit(TexdocDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMinimumSize(QSize(250, 0));

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        moreButton = new QPushButton(TexdocDialog);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(moreButton->sizePolicy().hasHeightForWidth());
        moreButton->setSizePolicy(sizePolicy2);

        horizontalLayout_2->addWidget(moreButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(TexdocDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 0, 1, 1, 1);

        extension = new QFrame(TexdocDialog);
        extension->setObjectName(QStringLiteral("extension"));
        extension->setFrameShape(QFrame::StyledPanel);
        extension->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(extension);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelCommand = new QLabel(extension);
        labelCommand->setObjectName(QStringLiteral("labelCommand"));
        sizePolicy.setHeightForWidth(labelCommand->sizePolicy().hasHeightForWidth());
        labelCommand->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelCommand, 0, 0, 1, 1);

        lineEditCommand = new QLineEdit(extension);
        lineEditCommand->setObjectName(QStringLiteral("lineEditCommand"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEditCommand->sizePolicy().hasHeightForWidth());
        lineEditCommand->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(lineEditCommand, 0, 1, 1, 1);

        pushButton = new QPushButton(extension);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy2.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy2);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/fileopen16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButton, 0, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        gridLayout_3->addWidget(extension, 2, 0, 1, 2);


        retranslateUi(TexdocDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TexdocDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TexdocDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TexdocDialog);
    } // setupUi

    void retranslateUi(QDialog *TexdocDialog)
    {
        TexdocDialog->setWindowTitle(QApplication::translate("TexdocDialog", "Search documentation about :", 0));
        moreButton->setText(QApplication::translate("TexdocDialog", "+", 0));
        labelCommand->setText(QApplication::translate("TexdocDialog", "Texdoc command :", 0));
        pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TexdocDialog: public Ui_TexdocDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXDOCDIALOG_H
