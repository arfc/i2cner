/********************************************************************************
** Form generated from reading UI file 'quickbeamerdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUICKBEAMERDIALOG_H
#define UI_QUICKBEAMERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QuickBeamerDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QCheckBox *checkBoxAMS;
    QLabel *labelEncoding;
    QLineEdit *lineEditAuthor;
    QLabel *labelSize;
    QCheckBox *checkBoxBabel;
    QComboBox *comboBoxSize;
    QLineEdit *lineEditTitle;
    QCheckBox *checkBoxGraphicx;
    QLabel *labelTitle;
    QListWidget *listWidgetBabel;
    QComboBox *comboBoxEncoding;
    QLabel *labelAuthor;
    QLabel *labelTheme;
    QComboBox *comboBoxTheme;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QuickBeamerDialog)
    {
        if (QuickBeamerDialog->objectName().isEmpty())
            QuickBeamerDialog->setObjectName(QStringLiteral("QuickBeamerDialog"));
        QuickBeamerDialog->resize(944, 474);
        gridLayout_2 = new QGridLayout(QuickBeamerDialog);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        checkBoxAMS = new QCheckBox(QuickBeamerDialog);
        checkBoxAMS->setObjectName(QStringLiteral("checkBoxAMS"));

        gridLayout->addWidget(checkBoxAMS, 7, 0, 1, 1);

        labelEncoding = new QLabel(QuickBeamerDialog);
        labelEncoding->setObjectName(QStringLiteral("labelEncoding"));

        gridLayout->addWidget(labelEncoding, 3, 0, 1, 1);

        lineEditAuthor = new QLineEdit(QuickBeamerDialog);
        lineEditAuthor->setObjectName(QStringLiteral("lineEditAuthor"));

        gridLayout->addWidget(lineEditAuthor, 4, 1, 1, 1);

        labelSize = new QLabel(QuickBeamerDialog);
        labelSize->setObjectName(QStringLiteral("labelSize"));

        gridLayout->addWidget(labelSize, 1, 0, 1, 1);

        checkBoxBabel = new QCheckBox(QuickBeamerDialog);
        checkBoxBabel->setObjectName(QStringLiteral("checkBoxBabel"));

        gridLayout->addWidget(checkBoxBabel, 6, 0, 1, 1);

        comboBoxSize = new QComboBox(QuickBeamerDialog);
        comboBoxSize->setObjectName(QStringLiteral("comboBoxSize"));

        gridLayout->addWidget(comboBoxSize, 1, 1, 1, 1);

        lineEditTitle = new QLineEdit(QuickBeamerDialog);
        lineEditTitle->setObjectName(QStringLiteral("lineEditTitle"));

        gridLayout->addWidget(lineEditTitle, 5, 1, 1, 1);

        checkBoxGraphicx = new QCheckBox(QuickBeamerDialog);
        checkBoxGraphicx->setObjectName(QStringLiteral("checkBoxGraphicx"));

        gridLayout->addWidget(checkBoxGraphicx, 8, 0, 1, 1);

        labelTitle = new QLabel(QuickBeamerDialog);
        labelTitle->setObjectName(QStringLiteral("labelTitle"));

        gridLayout->addWidget(labelTitle, 5, 0, 1, 1);

        listWidgetBabel = new QListWidget(QuickBeamerDialog);
        listWidgetBabel->setObjectName(QStringLiteral("listWidgetBabel"));

        gridLayout->addWidget(listWidgetBabel, 6, 1, 1, 1);

        comboBoxEncoding = new QComboBox(QuickBeamerDialog);
        comboBoxEncoding->setObjectName(QStringLiteral("comboBoxEncoding"));

        gridLayout->addWidget(comboBoxEncoding, 3, 1, 1, 1);

        labelAuthor = new QLabel(QuickBeamerDialog);
        labelAuthor->setObjectName(QStringLiteral("labelAuthor"));

        gridLayout->addWidget(labelAuthor, 4, 0, 1, 1);

        labelTheme = new QLabel(QuickBeamerDialog);
        labelTheme->setObjectName(QStringLiteral("labelTheme"));

        gridLayout->addWidget(labelTheme, 0, 0, 1, 1);

        comboBoxTheme = new QComboBox(QuickBeamerDialog);
        comboBoxTheme->setObjectName(QStringLiteral("comboBoxTheme"));

        gridLayout->addWidget(comboBoxTheme, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        scrollArea = new QScrollArea(QuickBeamerDialog);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMinimumSize(QSize(500, 0));
        scrollArea->setMaximumSize(QSize(500, 16777215));
        scrollArea->setAutoFillBackground(false);
        scrollArea->setWidgetResizable(false);
        scrollArea->setAlignment(Qt::AlignCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 494, 474));
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_2->addWidget(scrollArea, 0, 1, 1, 1);

        buttonBox = new QDialogButtonBox(QuickBeamerDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 1, 0, 1, 2);

        QWidget::setTabOrder(comboBoxTheme, comboBoxSize);
        QWidget::setTabOrder(comboBoxSize, comboBoxEncoding);
        QWidget::setTabOrder(comboBoxEncoding, lineEditAuthor);
        QWidget::setTabOrder(lineEditAuthor, lineEditTitle);
        QWidget::setTabOrder(lineEditTitle, listWidgetBabel);
        QWidget::setTabOrder(listWidgetBabel, checkBoxBabel);
        QWidget::setTabOrder(checkBoxBabel, checkBoxAMS);
        QWidget::setTabOrder(checkBoxAMS, checkBoxGraphicx);
        QWidget::setTabOrder(checkBoxGraphicx, buttonBox);
        QWidget::setTabOrder(buttonBox, scrollArea);

        retranslateUi(QuickBeamerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), QuickBeamerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), QuickBeamerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QuickBeamerDialog);
    } // setupUi

    void retranslateUi(QDialog *QuickBeamerDialog)
    {
        QuickBeamerDialog->setWindowTitle(QApplication::translate("QuickBeamerDialog", "Dialog", 0));
        checkBoxAMS->setText(QApplication::translate("QuickBeamerDialog", "AMS Packages", 0));
        labelEncoding->setText(QApplication::translate("QuickBeamerDialog", "Encoding", 0));
        labelSize->setText(QApplication::translate("QuickBeamerDialog", "Typeface Size", 0));
        checkBoxBabel->setText(QApplication::translate("QuickBeamerDialog", "babel Package", 0));
        checkBoxGraphicx->setText(QApplication::translate("QuickBeamerDialog", "graphicx Package", 0));
        labelTitle->setText(QApplication::translate("QuickBeamerDialog", "Title", 0));
        labelAuthor->setText(QApplication::translate("QuickBeamerDialog", "Author", 0));
        labelTheme->setText(QApplication::translate("QuickBeamerDialog", "Theme", 0));
    } // retranslateUi

};

namespace Ui {
    class QuickBeamerDialog: public Ui_QuickBeamerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUICKBEAMERDIALOG_H
