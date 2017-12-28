/********************************************************************************
** Form generated from reading UI file 'scandialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCANDIALOG_H
#define UI_SCANDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_ScanDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *lineEditDir;
    QPushButton *pushButtonBrowse;
    QLabel *labelFind;
    QLineEdit *lineEditSearch;
    QPushButton *pushButtonFind;
    QCheckBox *checkBoxSub;
    QPushButton *pushButtonAbort;
    QTreeWidget *treeWidget;
    QPushButton *closeButton;
    QLabel *labelStat;

    void setupUi(QDialog *ScanDialog)
    {
        if (ScanDialog->objectName().isEmpty())
            ScanDialog->setObjectName(QStringLiteral("ScanDialog"));
        ScanDialog->resize(333, 338);
        gridLayout = new QGridLayout(ScanDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ScanDialog);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        lineEditDir = new QLineEdit(ScanDialog);
        lineEditDir->setObjectName(QStringLiteral("lineEditDir"));
        lineEditDir->setReadOnly(true);

        gridLayout->addWidget(lineEditDir, 0, 2, 1, 2);

        pushButtonBrowse = new QPushButton(ScanDialog);
        pushButtonBrowse->setObjectName(QStringLiteral("pushButtonBrowse"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonBrowse->sizePolicy().hasHeightForWidth());
        pushButtonBrowse->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/fileopen16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonBrowse->setIcon(icon);
        pushButtonBrowse->setIconSize(QSize(16, 16));

        gridLayout->addWidget(pushButtonBrowse, 0, 4, 1, 1);

        labelFind = new QLabel(ScanDialog);
        labelFind->setObjectName(QStringLiteral("labelFind"));

        gridLayout->addWidget(labelFind, 1, 0, 1, 2);

        lineEditSearch = new QLineEdit(ScanDialog);
        lineEditSearch->setObjectName(QStringLiteral("lineEditSearch"));

        gridLayout->addWidget(lineEditSearch, 1, 2, 1, 2);

        pushButtonFind = new QPushButton(ScanDialog);
        pushButtonFind->setObjectName(QStringLiteral("pushButtonFind"));

        gridLayout->addWidget(pushButtonFind, 1, 4, 1, 1);

        checkBoxSub = new QCheckBox(ScanDialog);
        checkBoxSub->setObjectName(QStringLiteral("checkBoxSub"));

        gridLayout->addWidget(checkBoxSub, 2, 0, 1, 4);

        pushButtonAbort = new QPushButton(ScanDialog);
        pushButtonAbort->setObjectName(QStringLiteral("pushButtonAbort"));

        gridLayout->addWidget(pushButtonAbort, 2, 4, 1, 1);

        treeWidget = new QTreeWidget(ScanDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->header()->setVisible(false);

        gridLayout->addWidget(treeWidget, 3, 0, 1, 5);

        closeButton = new QPushButton(ScanDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/fileclose.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon1);
        closeButton->setAutoDefault(true);

        gridLayout->addWidget(closeButton, 6, 4, 1, 1);

        labelStat = new QLabel(ScanDialog);
        labelStat->setObjectName(QStringLiteral("labelStat"));

        gridLayout->addWidget(labelStat, 6, 0, 1, 4);

        QWidget::setTabOrder(pushButtonBrowse, lineEditSearch);
        QWidget::setTabOrder(lineEditSearch, pushButtonFind);
        QWidget::setTabOrder(pushButtonFind, checkBoxSub);
        QWidget::setTabOrder(checkBoxSub, closeButton);
        QWidget::setTabOrder(closeButton, pushButtonAbort);
        QWidget::setTabOrder(pushButtonAbort, lineEditDir);

        retranslateUi(ScanDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), ScanDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(ScanDialog);
    } // setupUi

    void retranslateUi(QDialog *ScanDialog)
    {
        ScanDialog->setWindowTitle(QApplication::translate("ScanDialog", "Texmaker", 0));
        label->setText(QApplication::translate("ScanDialog", "In directory :", 0));
        pushButtonBrowse->setText(QString());
        labelFind->setText(QApplication::translate("ScanDialog", "Text :", 0));
        pushButtonFind->setText(QApplication::translate("ScanDialog", "Find", 0));
        checkBoxSub->setText(QApplication::translate("ScanDialog", "Include subdirectories", 0));
        pushButtonAbort->setText(QApplication::translate("ScanDialog", "Abort", 0));
        closeButton->setText(QApplication::translate("ScanDialog", "Close", 0));
        labelStat->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ScanDialog: public Ui_ScanDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCANDIALOG_H
