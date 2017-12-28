/********************************************************************************
** Form generated from reading UI file 'quickdocumentdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKDOCUMENTDIALOG_H
#define UI_QUICKDOCUMENTDIALOG_H

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

class Ui_QuickDocumentDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelClass;
    QComboBox *comboBoxClass;
    QPushButton *pushButtonClass;
    QLabel *labelOptions;
    QListWidget *listWidgetOptions;
    QPushButton *pushButtonOptions;
    QLabel *labelSize;
    QComboBox *comboBoxSize;
    QLabel *labelPaper;
    QComboBox *comboBoxPaper;
    QPushButton *pushButtonPaper;
    QLabel *labelEncoding;
    QComboBox *comboBoxEncoding;
    QPushButton *pushButtonEncoding;
    QLabel *labelAuthor;
    QLineEdit *lineEditAuthor;
    QLabel *labelTitle;
    QLineEdit *lineEditTitle;
    QCheckBox *checkBoxBabel;
    QListWidget *listWidgetBabel;
    QPushButton *pushButtonBabel;
    QCheckBox *checkBoxGeometry;
    QLineEdit *lineEditGeometry;
    QCheckBox *checkBoxAMS;
    QCheckBox *checkBoxIDX;
    QCheckBox *checkBoxGraphicx;
    QCheckBox *checkBoxLmodern;
    QCheckBox *checkBoxKpfonts;
    QCheckBox *checkBoxFourier;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QuickDocumentDialog)
    {
        if (QuickDocumentDialog->objectName().isEmpty())
            QuickDocumentDialog->setObjectName(QStringLiteral("QuickDocumentDialog"));
        QuickDocumentDialog->resize(494, 504);
        gridLayout_2 = new QGridLayout(QuickDocumentDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelClass = new QLabel(QuickDocumentDialog);
        labelClass->setObjectName(QStringLiteral("labelClass"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelClass->sizePolicy().hasHeightForWidth());
        labelClass->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelClass, 0, 0, 1, 1);

        comboBoxClass = new QComboBox(QuickDocumentDialog);
        comboBoxClass->setObjectName(QStringLiteral("comboBoxClass"));

        gridLayout->addWidget(comboBoxClass, 0, 1, 1, 2);

        pushButtonClass = new QPushButton(QuickDocumentDialog);
        pushButtonClass->setObjectName(QStringLiteral("pushButtonClass"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonClass->sizePolicy().hasHeightForWidth());
        pushButtonClass->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonClass, 0, 3, 1, 1);

        labelOptions = new QLabel(QuickDocumentDialog);
        labelOptions->setObjectName(QStringLiteral("labelOptions"));
        sizePolicy.setHeightForWidth(labelOptions->sizePolicy().hasHeightForWidth());
        labelOptions->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelOptions, 1, 0, 1, 1);

        listWidgetOptions = new QListWidget(QuickDocumentDialog);
        listWidgetOptions->setObjectName(QStringLiteral("listWidgetOptions"));

        gridLayout->addWidget(listWidgetOptions, 1, 1, 1, 2);

        pushButtonOptions = new QPushButton(QuickDocumentDialog);
        pushButtonOptions->setObjectName(QStringLiteral("pushButtonOptions"));
        sizePolicy1.setHeightForWidth(pushButtonOptions->sizePolicy().hasHeightForWidth());
        pushButtonOptions->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonOptions, 1, 3, 1, 1);

        labelSize = new QLabel(QuickDocumentDialog);
        labelSize->setObjectName(QStringLiteral("labelSize"));
        sizePolicy.setHeightForWidth(labelSize->sizePolicy().hasHeightForWidth());
        labelSize->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelSize, 2, 0, 1, 1);

        comboBoxSize = new QComboBox(QuickDocumentDialog);
        comboBoxSize->setObjectName(QStringLiteral("comboBoxSize"));

        gridLayout->addWidget(comboBoxSize, 2, 1, 1, 2);

        labelPaper = new QLabel(QuickDocumentDialog);
        labelPaper->setObjectName(QStringLiteral("labelPaper"));
        sizePolicy.setHeightForWidth(labelPaper->sizePolicy().hasHeightForWidth());
        labelPaper->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelPaper, 3, 0, 1, 1);

        comboBoxPaper = new QComboBox(QuickDocumentDialog);
        comboBoxPaper->setObjectName(QStringLiteral("comboBoxPaper"));

        gridLayout->addWidget(comboBoxPaper, 3, 1, 1, 2);

        pushButtonPaper = new QPushButton(QuickDocumentDialog);
        pushButtonPaper->setObjectName(QStringLiteral("pushButtonPaper"));
        sizePolicy1.setHeightForWidth(pushButtonPaper->sizePolicy().hasHeightForWidth());
        pushButtonPaper->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonPaper, 3, 3, 1, 1);

        labelEncoding = new QLabel(QuickDocumentDialog);
        labelEncoding->setObjectName(QStringLiteral("labelEncoding"));
        sizePolicy.setHeightForWidth(labelEncoding->sizePolicy().hasHeightForWidth());
        labelEncoding->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelEncoding, 4, 0, 1, 1);

        comboBoxEncoding = new QComboBox(QuickDocumentDialog);
        comboBoxEncoding->setObjectName(QStringLiteral("comboBoxEncoding"));

        gridLayout->addWidget(comboBoxEncoding, 4, 1, 1, 2);

        pushButtonEncoding = new QPushButton(QuickDocumentDialog);
        pushButtonEncoding->setObjectName(QStringLiteral("pushButtonEncoding"));
        sizePolicy1.setHeightForWidth(pushButtonEncoding->sizePolicy().hasHeightForWidth());
        pushButtonEncoding->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonEncoding, 4, 3, 1, 1);

        labelAuthor = new QLabel(QuickDocumentDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));
        sizePolicy.setHeightForWidth(labelAuthor->sizePolicy().hasHeightForWidth());
        labelAuthor->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelAuthor, 5, 0, 1, 1);

        lineEditAuthor = new QLineEdit(QuickDocumentDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));

        gridLayout->addWidget(lineEditAuthor, 5, 1, 1, 2);

        labelTitle = new QLabel(QuickDocumentDialog);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));
        sizePolicy.setHeightForWidth(labelTitle->sizePolicy().hasHeightForWidth());
        labelTitle->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelTitle, 6, 0, 1, 1);

        lineEditTitle = new QLineEdit(QuickDocumentDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));

        gridLayout->addWidget(lineEditTitle, 6, 1, 1, 2);

        checkBoxBabel = new QCheckBox(QuickDocumentDialog);
        checkBoxBabel->setObjectName(QStringLiteral("checkBoxBabel"));

        gridLayout->addWidget(checkBoxBabel, 7, 0, 1, 1);

        listWidgetBabel = new QListWidget(QuickDocumentDialog);
        listWidgetBabel->setObjectName(QStringLiteral("listWidgetBabel"));

        gridLayout->addWidget(listWidgetBabel, 7, 1, 1, 2);

        pushButtonBabel = new QPushButton(QuickDocumentDialog);
        pushButtonBabel->setObjectName(QStringLiteral("pushButtonBabel"));
        sizePolicy1.setHeightForWidth(pushButtonBabel->sizePolicy().hasHeightForWidth());
        pushButtonBabel->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButtonBabel, 7, 3, 1, 1);

        checkBoxGeometry = new QCheckBox(QuickDocumentDialog);
        checkBoxGeometry->setObjectName(QStringLiteral("checkBoxGeometry"));

        gridLayout->addWidget(checkBoxGeometry, 8, 0, 1, 1);

        lineEditGeometry = new QLineEdit(QuickDocumentDialog);
        lineEditGeometry->setObjectName(QStringLiteral("lineEditGeometry"));

        gridLayout->addWidget(lineEditGeometry, 8, 1, 1, 2);

        checkBoxAMS = new QCheckBox(QuickDocumentDialog);
        checkBoxAMS->setObjectName(QStringLiteral("checkBoxAMS"));
        checkBoxAMS->setChecked(true);

        gridLayout->addWidget(checkBoxAMS, 9, 0, 1, 1);

        checkBoxIDX = new QCheckBox(QuickDocumentDialog);
        checkBoxIDX->setObjectName(QStringLiteral("checkBoxIDX"));

        gridLayout->addWidget(checkBoxIDX, 9, 1, 1, 1);

        checkBoxGraphicx = new QCheckBox(QuickDocumentDialog);
        checkBoxGraphicx->setObjectName(QStringLiteral("checkBoxGraphicx"));

        gridLayout->addWidget(checkBoxGraphicx, 9, 2, 1, 1);

        checkBoxLmodern = new QCheckBox(QuickDocumentDialog);
        checkBoxLmodern->setObjectName(QStringLiteral("checkBoxLmodern"));

        gridLayout->addWidget(checkBoxLmodern, 10, 0, 1, 1);

        checkBoxKpfonts = new QCheckBox(QuickDocumentDialog);
        checkBoxKpfonts->setObjectName(QStringLiteral("checkBoxKpfonts"));

        gridLayout->addWidget(checkBoxKpfonts, 10, 1, 1, 1);

        checkBoxFourier = new QCheckBox(QuickDocumentDialog);
        checkBoxFourier->setObjectName(QStringLiteral("checkBoxFourier"));

        gridLayout->addWidget(checkBoxFourier, 10, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QStringLiteral("hboxLayout"));
        spacerItem = new QSpacerItem(131, 31, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        buttonBox = new QDialogButtonBox(QuickDocumentDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        hboxLayout->addWidget(buttonBox);


        gridLayout_2->addLayout(hboxLayout, 1, 0, 1, 1);

        QWidget::setTabOrder(comboBoxClass, comboBoxSize);
        QWidget::setTabOrder(comboBoxSize, comboBoxPaper);
        QWidget::setTabOrder(comboBoxPaper, comboBoxEncoding);
        QWidget::setTabOrder(comboBoxEncoding, checkBoxAMS);
        QWidget::setTabOrder(checkBoxAMS, checkBoxIDX);
        QWidget::setTabOrder(checkBoxIDX, lineEditAuthor);
        QWidget::setTabOrder(lineEditAuthor, lineEditTitle);
        QWidget::setTabOrder(lineEditTitle, listWidgetOptions);
        QWidget::setTabOrder(listWidgetOptions, pushButtonClass);
        QWidget::setTabOrder(pushButtonClass, pushButtonPaper);
        QWidget::setTabOrder(pushButtonPaper, pushButtonEncoding);
        QWidget::setTabOrder(pushButtonEncoding, pushButtonOptions);

        retranslateUi(QuickDocumentDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QuickDocumentDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QuickDocumentDialog, SLOT(reject()));
        QObject::connect(checkBoxBabel, SIGNAL(toggled(bool)), listWidgetBabel, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxBabel, SIGNAL(toggled(bool)), pushButtonBabel, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxGeometry, SIGNAL(toggled(bool)), lineEditGeometry, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(QuickDocumentDialog);
    } // setupUi

    void retranslateUi(QDialog *QuickDocumentDialog)
    {
        labelClass->setText(QApplication::translate("QuickDocumentDialog", "Document Class", 0));
        pushButtonClass->setText(QApplication::translate("QuickDocumentDialog", "+", 0));
        labelOptions->setText(QApplication::translate("QuickDocumentDialog", "Other Options", 0));
        pushButtonOptions->setText(QApplication::translate("QuickDocumentDialog", "+", 0));
        labelSize->setText(QApplication::translate("QuickDocumentDialog", "Typeface Size", 0));
        labelPaper->setText(QApplication::translate("QuickDocumentDialog", "Paper Size", 0));
        pushButtonPaper->setText(QApplication::translate("QuickDocumentDialog", "+", 0));
        labelEncoding->setText(QApplication::translate("QuickDocumentDialog", "Encoding", 0));
        pushButtonEncoding->setText(QApplication::translate("QuickDocumentDialog", "+", 0));
        labelAuthor->setText(QApplication::translate("QuickDocumentDialog", "Author", 0));
        labelTitle->setText(QApplication::translate("QuickDocumentDialog", "Title", 0));
        checkBoxBabel->setText(QApplication::translate("QuickDocumentDialog", "babel Package", 0));
        pushButtonBabel->setText(QApplication::translate("QuickDocumentDialog", "+", 0));
        checkBoxGeometry->setText(QApplication::translate("QuickDocumentDialog", "geometry Package", 0));
        lineEditGeometry->setText(QApplication::translate("QuickDocumentDialog", "left=2cm,right=2cm,top=2cm,bottom=2cm", 0));
        checkBoxAMS->setText(QApplication::translate("QuickDocumentDialog", "AMS Packages", 0));
        checkBoxIDX->setText(QApplication::translate("QuickDocumentDialog", "makeidx Package", 0));
        checkBoxGraphicx->setText(QApplication::translate("QuickDocumentDialog", "graphicx Package", 0));
        checkBoxLmodern->setText(QApplication::translate("QuickDocumentDialog", "lmodern Package", 0));
        checkBoxKpfonts->setText(QApplication::translate("QuickDocumentDialog", "Kpfonts Package", 0));
        checkBoxFourier->setText(QApplication::translate("QuickDocumentDialog", "Fourier Package", 0));
        Q_UNUSED(QuickDocumentDialog);
    } // retranslateUi

};

namespace Ui {
    class QuickDocumentDialog: public Ui_QuickDocumentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKDOCUMENTDIALOG_H
