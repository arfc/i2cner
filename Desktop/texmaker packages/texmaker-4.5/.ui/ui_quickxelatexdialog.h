/********************************************************************************
** Form generated from reading UI file 'quickxelatexdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKXELATEXDIALOG_H
#define UI_QUICKXELATEXDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_QuickXelatexDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButtonClass;
    QLabel *labelOptions;
    QLabel *labelClass;
    QComboBox *comboBoxClass;
    QComboBox *comboBoxSize;
    QLabel *labelPaper;
    QPushButton *pushButtonOptions;
    QLabel *labelSize;
    QListWidget *listWidgetOptions;
    QComboBox *comboBoxPaper;
    QPushButton *pushButtonPaper;
    QLabel *labelAuthor;
    QLineEdit *lineEditAuthor;
    QLineEdit *lineEditTitle;
    QLabel *labelTitle;
    QCheckBox *checkBoxBabel;
    QListWidget *listWidgetBabel;
    QPushButton *pushButtonBabel;
    QCheckBox *checkBoxGeometry;
    QLineEdit *lineEditGeometry;
    QCheckBox *checkBoxAMS;
    QCheckBox *checkBoxGraphicx;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QuickXelatexDialog)
    {
        if (QuickXelatexDialog->objectName().isEmpty())
            QuickXelatexDialog->setObjectName(QStringLiteral("QuickXelatexDialog"));
        QuickXelatexDialog->resize(534, 504);
        gridLayout_2 = new QGridLayout(QuickXelatexDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButtonClass = new QPushButton(QuickXelatexDialog);
        pushButtonClass->setObjectName(QStringLiteral("pushButtonClass"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButtonClass->sizePolicy().hasHeightForWidth());
        pushButtonClass->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonClass, 0, 3, 1, 1);

        labelOptions = new QLabel(QuickXelatexDialog);
        labelOptions->setObjectName(QStringLiteral("labelOptions"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelOptions->sizePolicy().hasHeightForWidth());
        labelOptions->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelOptions, 1, 0, 1, 1);

        labelClass = new QLabel(QuickXelatexDialog);
        labelClass->setObjectName(QStringLiteral("labelClass"));
        sizePolicy1.setHeightForWidth(labelClass->sizePolicy().hasHeightForWidth());
        labelClass->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelClass, 0, 0, 1, 1);

        comboBoxClass = new QComboBox(QuickXelatexDialog);
        comboBoxClass->setObjectName(QStringLiteral("comboBoxClass"));

        gridLayout->addWidget(comboBoxClass, 0, 1, 1, 2);

        comboBoxSize = new QComboBox(QuickXelatexDialog);
        comboBoxSize->setObjectName(QStringLiteral("comboBoxSize"));

        gridLayout->addWidget(comboBoxSize, 2, 1, 1, 2);

        labelPaper = new QLabel(QuickXelatexDialog);
        labelPaper->setObjectName(QStringLiteral("labelPaper"));
        sizePolicy1.setHeightForWidth(labelPaper->sizePolicy().hasHeightForWidth());
        labelPaper->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelPaper, 3, 0, 1, 1);

        pushButtonOptions = new QPushButton(QuickXelatexDialog);
        pushButtonOptions->setObjectName(QStringLiteral("pushButtonOptions"));
        sizePolicy.setHeightForWidth(pushButtonOptions->sizePolicy().hasHeightForWidth());
        pushButtonOptions->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonOptions, 1, 3, 1, 1);

        labelSize = new QLabel(QuickXelatexDialog);
        labelSize->setObjectName(QStringLiteral("labelSize"));
        sizePolicy1.setHeightForWidth(labelSize->sizePolicy().hasHeightForWidth());
        labelSize->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelSize, 2, 0, 1, 1);

        listWidgetOptions = new QListWidget(QuickXelatexDialog);
        listWidgetOptions->setObjectName(QStringLiteral("listWidgetOptions"));

        gridLayout->addWidget(listWidgetOptions, 1, 1, 1, 2);

        comboBoxPaper = new QComboBox(QuickXelatexDialog);
        comboBoxPaper->setObjectName(QStringLiteral("comboBoxPaper"));

        gridLayout->addWidget(comboBoxPaper, 3, 1, 1, 2);

        pushButtonPaper = new QPushButton(QuickXelatexDialog);
        pushButtonPaper->setObjectName(QStringLiteral("pushButtonPaper"));
        sizePolicy.setHeightForWidth(pushButtonPaper->sizePolicy().hasHeightForWidth());
        pushButtonPaper->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonPaper, 3, 3, 1, 1);

        labelAuthor = new QLabel(QuickXelatexDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        sizePolicy1.setHeightForWidth(labelAuthor->sizePolicy().hasHeightForWidth());
        labelAuthor->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelAuthor, 4, 0, 1, 1);

        lineEditAuthor = new QLineEdit(QuickXelatexDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));

        gridLayout->addWidget(lineEditAuthor, 4, 1, 1, 2);

        lineEditTitle = new QLineEdit(QuickXelatexDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));

        gridLayout->addWidget(lineEditTitle, 5, 1, 1, 2);

        labelTitle = new QLabel(QuickXelatexDialog);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        sizePolicy1.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(labelTitle, 5, 0, 1, 1);

        checkBoxBabel = new QCheckBox(QuickXelatexDialog);
        checkBoxBabel->setObjectName(QStringLiteral("checkBoxBabel"));

        gridLayout->addWidget(checkBoxBabel, 6, 0, 1, 1);

        listWidgetBabel = new QListWidget(QuickXelatexDialog);
        listWidgetBabel->setObjectName(QStringLiteral("listWidgetBabel"));

        gridLayout->addWidget(listWidgetBabel, 6, 1, 1, 2);

        pushButtonBabel = new QPushButton(QuickXelatexDialog);
        pushButtonBabel->setObjectName(QStringLiteral("pushButtonBabel"));
        sizePolicy.setHeightForWidth(pushButtonBabel->sizePolicy().hasHeightForWidth());
        pushButtonBabel->setSizePolicy(sizePolicy);

        gridLayout->addWidget(pushButtonBabel, 6, 3, 1, 1);

        checkBoxGeometry = new QCheckBox(QuickXelatexDialog);
        checkBoxGeometry->setObjectName(QStringLiteral("checkBoxGeometry"));

        gridLayout->addWidget(checkBoxGeometry, 7, 0, 1, 1);

        lineEditGeometry = new QLineEdit(QuickXelatexDialog);
        lineEditGeometry->setObjectName(QStringLiteral("lineEditGeometry"));

        gridLayout->addWidget(lineEditGeometry, 7, 1, 1, 2);

        checkBoxAMS = new QCheckBox(QuickXelatexDialog);
        checkBoxAMS->setObjectName(QStringLiteral("checkBoxAMS"));
        checkBoxAMS->setChecked(true);

        gridLayout->addWidget(checkBoxAMS, 8, 0, 1, 1);

        checkBoxGraphicx = new QCheckBox(QuickXelatexDialog);
        checkBoxGraphicx->setObjectName(QStringLiteral("checkBoxGraphicx"));

        gridLayout->addWidget(checkBoxGraphicx, 8, 1, 1, 2);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(QuickXelatexDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout_2->addLayout(hboxLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBoxClass, comboBoxSize);
        QWidget::setTabOrder(comboBoxSize, comboBoxPaper);
        QWidget::setTabOrder(comboBoxPaper, checkBoxAMS);
        QWidget::setTabOrder(checkBoxAMS, lineEditAuthor);
        QWidget::setTabOrder(lineEditAuthor, lineEditTitle);
        QWidget::setTabOrder(lineEditTitle, listWidgetOptions);
        QWidget::setTabOrder(listWidgetOptions, pushButtonClass);
        QWidget::setTabOrder(pushButtonClass, pushButtonPaper);
        QWidget::setTabOrder(pushButtonPaper, pushButtonOptions);

        retranslateUi(QuickXelatexDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QuickXelatexDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QuickXelatexDialog, SLOT(reject()));
        QObject::connect(checkBoxBabel, SIGNAL(toggled(bool)), listWidgetBabel, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxBabel, SIGNAL(toggled(bool)), pushButtonBabel, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometry, SIGNAL(toggled(bool)), lineEditGeometry, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(QuickXelatexDialog);
    } // setupUi

    void retranslateUi(QDialog *QuickXelatexDialog)
    {
        pushButtonClass->setText(QApplication::translate("QuickXelatexDialog", "+", 0));
        labelOptions->setText(QApplication::translate("QuickXelatexDialog", "Other Options", 0));
        labelClass->setText(QApplication::translate("QuickXelatexDialog", "Document Class", 0));
        labelPaper->setText(QApplication::translate("QuickXelatexDialog", "Paper Size", 0));
        pushButtonOptions->setText(QApplication::translate("QuickXelatexDialog", "+", 0));
        labelSize->setText(QApplication::translate("QuickXelatexDialog", "Typeface Size", 0));
        pushButtonPaper->setText(QApplication::translate("QuickXelatexDialog", "+", 0));
        labelAuthor->setText(QApplication::translate("QuickXelatexDialog", "Author", 0));
        labelTitle->setText(QApplication::translate("QuickXelatexDialog", "Title", 0));
        checkBoxBabel->setText(QApplication::translate("QuickXelatexDialog", "polyglossia Package", 0));
        pushButtonBabel->setText(QApplication::translate("QuickXelatexDialog", "+", 0));
        checkBoxGeometry->setText(QApplication::translate("QuickXelatexDialog", "geometry Package", 0));
        lineEditGeometry->setText(QApplication::translate("QuickXelatexDialog", "left=2cm,right=2cm,top=2cm,bottom=2cm", 0));
        checkBoxAMS->setText(QApplication::translate("QuickXelatexDialog", "AMS Packages", 0));
        checkBoxGraphicx->setText(QApplication::translate("QuickXelatexDialog", "graphicx Package", 0));
        Q_UNUSED(QuickXelatexDialog);
    } // retranslateUi

};

namespace Ui {
    class QuickXelatexDialog: public Ui_QuickXelatexDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKXELATEXDIALOG_H
