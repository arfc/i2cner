/********************************************************************************
** Form generated from reading UI file 'versiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONDIALOG_H
#define UI_VERSIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_VersionDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonCheck;
    QLineEdit *lineEditCurrent;
    QLabel *labelAvailable;
    QLineEdit *lineEditAvailable;
    QPushButton *pushButtonDownload;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *VersionDialog)
    {
        if (VersionDialog->objectName().isEmpty())
            VersionDialog->setObjectName(QStringLiteral("VersionDialog"));
        VersionDialog->resize(400, 193);
        gridLayout = new QGridLayout(VersionDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonCheck = new QPushButton(VersionDialog);
        pushButtonCheck->setObjectName(QStringLiteral("pushButtonCheck"));

        gridLayout->addWidget(pushButtonCheck, 1, 0, 1, 2);

        lineEditCurrent = new QLineEdit(VersionDialog);
        lineEditCurrent->setObjectName(QStringLiteral("lineEditCurrent"));
        lineEditCurrent->setReadOnly(true);

        gridLayout->addWidget(lineEditCurrent, 0, 1, 1, 1);

        labelAvailable = new QLabel(VersionDialog);
        labelAvailable->setObjectName(QStringLiteral("labelAvailable"));

        gridLayout->addWidget(labelAvailable, 2, 0, 1, 1);

        lineEditAvailable = new QLineEdit(VersionDialog);
        lineEditAvailable->setObjectName(QStringLiteral("lineEditAvailable"));
        lineEditAvailable->setReadOnly(true);

        gridLayout->addWidget(lineEditAvailable, 2, 1, 1, 1);

        pushButtonDownload = new QPushButton(VersionDialog);
        pushButtonDownload->setObjectName(QStringLiteral("pushButtonDownload"));

        gridLayout->addWidget(pushButtonDownload, 3, 0, 1, 2);

        buttonBox = new QDialogButtonBox(VersionDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 5, 0, 1, 2);

        label = new QLabel(VersionDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 2);

        QWidget::setTabOrder(pushButtonCheck, pushButtonDownload);
        QWidget::setTabOrder(pushButtonDownload, buttonBox);
        QWidget::setTabOrder(buttonBox, lineEditCurrent);
        QWidget::setTabOrder(lineEditCurrent, lineEditAvailable);

        retranslateUi(VersionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), VersionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), VersionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(VersionDialog);
    } // setupUi

    void retranslateUi(QDialog *VersionDialog)
    {
        VersionDialog->setWindowTitle(QApplication::translate("VersionDialog", "Texmaker", 0));
        pushButtonCheck->setText(QApplication::translate("VersionDialog", "Check for available version", 0));
        labelAvailable->setText(QApplication::translate("VersionDialog", "Available version", 0));
        pushButtonDownload->setText(QApplication::translate("VersionDialog", "Go to the download page", 0));
        label->setText(QApplication::translate("VersionDialog", "You're using the version", 0));
    } // retranslateUi

};

namespace Ui {
    class VersionDialog: public Ui_VersionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONDIALOG_H
