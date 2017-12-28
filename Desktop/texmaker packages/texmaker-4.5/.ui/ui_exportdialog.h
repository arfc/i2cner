/********************************************************************************
** Form generated from reading UI file 'exportdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTDIALOG_H
#define UI_EXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPath;
    QLineEdit *lineEditPath;
    QPushButton *pushButtonPath;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton1;
    QRadioButton *radioButton2;
    QRadioButton *radioButton3;
    QRadioButton *radioButton4;
    QRadioButton *radioButton5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelOPtions;
    QLineEdit *lineEditOptions;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonRun;
    QPlainTextEdit *plainTextEditResult;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportDialog)
    {
        if (ExportDialog->objectName().isEmpty())
            ExportDialog->setObjectName(QStringLiteral("ExportDialog"));
        ExportDialog->resize(423, 374);
        gridLayout = new QGridLayout(ExportDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelPath = new QLabel(ExportDialog);
        labelPath->setObjectName(QStringLiteral("labelPath"));

        horizontalLayout->addWidget(labelPath);

        lineEditPath = new QLineEdit(ExportDialog);
        lineEditPath->setObjectName(QStringLiteral("lineEditPath"));

        horizontalLayout->addWidget(lineEditPath);

        pushButtonPath = new QPushButton(ExportDialog);
        pushButtonPath->setObjectName(QStringLiteral("pushButtonPath"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonPath->setIcon(icon);

        horizontalLayout->addWidget(pushButtonPath);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        groupBox = new QGroupBox(ExportDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton1 = new QRadioButton(groupBox);
        radioButton1->setObjectName(QStringLiteral("radioButton1"));
        radioButton1->setChecked(true);

        verticalLayout->addWidget(radioButton1);

        radioButton2 = new QRadioButton(groupBox);
        radioButton2->setObjectName(QStringLiteral("radioButton2"));

        verticalLayout->addWidget(radioButton2);

        radioButton3 = new QRadioButton(groupBox);
        radioButton3->setObjectName(QStringLiteral("radioButton3"));

        verticalLayout->addWidget(radioButton3);

        radioButton4 = new QRadioButton(groupBox);
        radioButton4->setObjectName(QStringLiteral("radioButton4"));

        verticalLayout->addWidget(radioButton4);

        radioButton5 = new QRadioButton(groupBox);
        radioButton5->setObjectName(QStringLiteral("radioButton5"));

        verticalLayout->addWidget(radioButton5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        labelOPtions = new QLabel(groupBox);
        labelOPtions->setObjectName(QStringLiteral("labelOPtions"));

        horizontalLayout_2->addWidget(labelOPtions);

        lineEditOptions = new QLineEdit(groupBox);
        lineEditOptions->setObjectName(QStringLiteral("lineEditOptions"));
        lineEditOptions->setEnabled(false);

        horizontalLayout_2->addWidget(lineEditOptions);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButtonRun = new QPushButton(ExportDialog);
        pushButtonRun->setObjectName(QStringLiteral("pushButtonRun"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/run.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButtonRun->setIcon(icon1);

        horizontalLayout_3->addWidget(pushButtonRun);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        plainTextEditResult = new QPlainTextEdit(ExportDialog);
        plainTextEditResult->setObjectName(QStringLiteral("plainTextEditResult"));
        plainTextEditResult->setReadOnly(true);

        gridLayout->addWidget(plainTextEditResult, 3, 0, 1, 1);

        buttonBox = new QDialogButtonBox(ExportDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 0, 1, 1);

        QWidget::setTabOrder(radioButton1, radioButton2);
        QWidget::setTabOrder(radioButton2, radioButton3);
        QWidget::setTabOrder(radioButton3, radioButton4);
        QWidget::setTabOrder(radioButton4, radioButton5);
        QWidget::setTabOrder(radioButton5, lineEditOptions);
        QWidget::setTabOrder(lineEditOptions, pushButtonRun);
        QWidget::setTabOrder(pushButtonRun, lineEditPath);
        QWidget::setTabOrder(lineEditPath, pushButtonPath);
        QWidget::setTabOrder(pushButtonPath, plainTextEditResult);
        QWidget::setTabOrder(plainTextEditResult, buttonBox);

        retranslateUi(ExportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportDialog)
    {
        ExportDialog->setWindowTitle(QApplication::translate("ExportDialog", "Export via TeX4ht", 0));
        labelPath->setText(QApplication::translate("ExportDialog", "Path to htlatex", 0));
        pushButtonPath->setText(QString());
        groupBox->setTitle(QApplication::translate("ExportDialog", "Mode", 0));
        radioButton1->setText(QApplication::translate("ExportDialog", "export to Html", 0));
        radioButton2->setText(QApplication::translate("ExportDialog", "export to Html (new page for each section)", 0));
        radioButton3->setText(QApplication::translate("ExportDialog", "export to OpenDocumentFormat", 0));
        radioButton4->setText(QApplication::translate("ExportDialog", "export to MathML", 0));
        radioButton5->setText(QApplication::translate("ExportDialog", "User", 0));
        labelOPtions->setText(QApplication::translate("ExportDialog", "Options", 0));
        pushButtonRun->setText(QApplication::translate("ExportDialog", "Run", 0));
    } // retranslateUi

};

namespace Ui {
    class ExportDialog: public Ui_ExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTDIALOG_H
