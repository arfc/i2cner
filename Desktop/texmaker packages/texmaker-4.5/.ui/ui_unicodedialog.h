/********************************************************************************
** Form generated from reading UI file 'unicodedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNICODEDIALOG_H
#define UI_UNICODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_UnicodeDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelEncoding;
    QComboBox *comboBoxEncoding;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButtonConvert;
    QFrame *line;
    QFrame *frameEditor;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *closeButton;

    void setupUi(QDialog *UnicodeDialog)
    {
        if (UnicodeDialog->objectName().isEmpty())
            UnicodeDialog->setObjectName(QStringLiteral("UnicodeDialog"));
        UnicodeDialog->resize(670, 512);
        verticalLayout = new QVBoxLayout(UnicodeDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(UnicodeDialog);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(label);

        lineEdit = new QLineEdit(UnicodeDialog);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        horizontalLayout_4->addWidget(lineEdit);

        pushButton = new QPushButton(UnicodeDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/fileopen16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 16));

        horizontalLayout_4->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelEncoding = new QLabel(UnicodeDialog);
        labelEncoding->setObjectName(QStringLiteral("labelEncoding"));

        horizontalLayout_3->addWidget(labelEncoding);

        comboBoxEncoding = new QComboBox(UnicodeDialog);
        comboBoxEncoding->setObjectName(QStringLiteral("comboBoxEncoding"));

        horizontalLayout_3->addWidget(comboBoxEncoding);

        horizontalSpacer_2 = new QSpacerItem(478, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        pushButtonConvert = new QPushButton(UnicodeDialog);
        pushButtonConvert->setObjectName(QStringLiteral("pushButtonConvert"));

        horizontalLayout_3->addWidget(pushButtonConvert);


        verticalLayout->addLayout(horizontalLayout_3);

        line = new QFrame(UnicodeDialog);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        frameEditor = new QFrame(UnicodeDialog);
        frameEditor->setObjectName(QStringLiteral("frameEditor"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frameEditor->sizePolicy().hasHeightForWidth());
        frameEditor->setSizePolicy(sizePolicy2);
        frameEditor->setFrameShape(QFrame::StyledPanel);
        frameEditor->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frameEditor);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(278, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        closeButton = new QPushButton(UnicodeDialog);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/fileclose.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon1);
        closeButton->setAutoDefault(true);

        horizontalLayout_2->addWidget(closeButton);


        verticalLayout->addLayout(horizontalLayout_2);

        frameEditor->raise();
        line->raise();
#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(pushButton, lineEdit);
        QWidget::setTabOrder(lineEdit, comboBoxEncoding);
        QWidget::setTabOrder(comboBoxEncoding, closeButton);

        retranslateUi(UnicodeDialog);
        QObject::connect(closeButton, SIGNAL(clicked()), UnicodeDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(UnicodeDialog);
    } // setupUi

    void retranslateUi(QDialog *UnicodeDialog)
    {
        UnicodeDialog->setWindowTitle(QApplication::translate("UnicodeDialog", "Convert to unicode", 0));
        label->setText(QApplication::translate("UnicodeDialog", "File", 0));
        pushButton->setText(QString());
        labelEncoding->setText(QApplication::translate("UnicodeDialog", "Original Encoding", 0));
        pushButtonConvert->setText(QApplication::translate("UnicodeDialog", "Convert to unicode", 0));
        closeButton->setText(QApplication::translate("UnicodeDialog", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class UnicodeDialog: public Ui_UnicodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNICODEDIALOG_H
