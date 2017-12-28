/********************************************************************************
** Form generated from reading UI file 'replacewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPLACEWIDGET_H
#define UI_REPLACEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReplaceWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *comboFind;
    QPushButton *findButton;
    QRadioButton *radioForward;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QComboBox *comboReplace;
    QPushButton *replaceallButton;
    QCheckBox *checkWords;
    QCheckBox *checkCase;
    QCheckBox *checkBegin;
    QPushButton *moreButton;
    QFrame *extension;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkRegExp;
    QCheckBox *checkSelection;
    QRadioButton *radioBackward;

    void setupUi(QWidget *ReplaceWidget)
    {
        if (ReplaceWidget->objectName().isEmpty())
            ReplaceWidget->setObjectName(QStringLiteral("ReplaceWidget"));
        ReplaceWidget->resize(470, 122);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ReplaceWidget->sizePolicy().hasHeightForWidth());
        ReplaceWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ReplaceWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(ReplaceWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        comboFind = new QComboBox(ReplaceWidget);
        comboFind->setObjectName(QStringLiteral("comboFind"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboFind->sizePolicy().hasHeightForWidth());
        comboFind->setSizePolicy(sizePolicy2);
        comboFind->setFocusPolicy(Qt::WheelFocus);
        comboFind->setEditable(true);

        gridLayout->addWidget(comboFind, 0, 1, 1, 2);

        findButton = new QPushButton(ReplaceWidget);
        findButton->setObjectName(QStringLiteral("findButton"));

        gridLayout->addWidget(findButton, 0, 3, 1, 2);

        radioForward = new QRadioButton(ReplaceWidget);
        radioForward->setObjectName(QStringLiteral("radioForward"));
        radioForward->setChecked(true);

        gridLayout->addWidget(radioForward, 0, 5, 1, 1);

        closeButton = new QPushButton(ReplaceWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/fileclose.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);

        gridLayout->addWidget(closeButton, 0, 7, 1, 1);

        horizontalSpacer = new QSpacerItem(26, 78, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 8, 4, 1);

        label_2 = new QLabel(ReplaceWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        comboReplace = new QComboBox(ReplaceWidget);
        comboReplace->setObjectName(QStringLiteral("comboReplace"));
        sizePolicy2.setHeightForWidth(comboReplace->sizePolicy().hasHeightForWidth());
        comboReplace->setSizePolicy(sizePolicy2);
        comboReplace->setFocusPolicy(Qt::WheelFocus);
        comboReplace->setEditable(true);

        gridLayout->addWidget(comboReplace, 1, 1, 1, 2);

        replaceallButton = new QPushButton(ReplaceWidget);
        replaceallButton->setObjectName(QStringLiteral("replaceallButton"));

        gridLayout->addWidget(replaceallButton, 1, 3, 1, 2);

        checkWords = new QCheckBox(ReplaceWidget);
        checkWords->setObjectName(QStringLiteral("checkWords"));

        gridLayout->addWidget(checkWords, 2, 0, 1, 2);

        checkCase = new QCheckBox(ReplaceWidget);
        checkCase->setObjectName(QStringLiteral("checkCase"));

        gridLayout->addWidget(checkCase, 2, 2, 1, 2);

        checkBegin = new QCheckBox(ReplaceWidget);
        checkBegin->setObjectName(QStringLiteral("checkBegin"));

        gridLayout->addWidget(checkBegin, 2, 4, 1, 2);

        moreButton = new QPushButton(ReplaceWidget);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(moreButton->sizePolicy().hasHeightForWidth());
        moreButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(moreButton, 2, 7, 1, 1);

        extension = new QFrame(ReplaceWidget);
        extension->setObjectName(QStringLiteral("extension"));
        extension->setFrameShape(QFrame::NoFrame);
        extension->setFrameShadow(QFrame::Plain);
        extension->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(extension);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        checkRegExp = new QCheckBox(extension);
        checkRegExp->setObjectName(QStringLiteral("checkRegExp"));
#ifndef QT_NO_TOOLTIP
        checkRegExp->setToolTip(QStringLiteral("Captured text for the \"Replace\" field : $1 $2.."));
#endif // QT_NO_TOOLTIP

        horizontalLayout->addWidget(checkRegExp);

        checkSelection = new QCheckBox(extension);
        checkSelection->setObjectName(QStringLiteral("checkSelection"));

        horizontalLayout->addWidget(checkSelection);


        gridLayout->addWidget(extension, 3, 0, 1, 8);

        radioBackward = new QRadioButton(ReplaceWidget);
        radioBackward->setObjectName(QStringLiteral("radioBackward"));

        gridLayout->addWidget(radioBackward, 1, 5, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(comboFind);
        label_2->setBuddy(comboReplace);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(comboFind, comboReplace);
        QWidget::setTabOrder(comboReplace, findButton);
        QWidget::setTabOrder(findButton, radioForward);
        QWidget::setTabOrder(radioForward, replaceallButton);
        QWidget::setTabOrder(replaceallButton, checkWords);
        QWidget::setTabOrder(checkWords, checkCase);
        QWidget::setTabOrder(checkCase, checkBegin);
        QWidget::setTabOrder(checkBegin, closeButton);
        QWidget::setTabOrder(closeButton, moreButton);
        QWidget::setTabOrder(moreButton, checkRegExp);

        retranslateUi(ReplaceWidget);

        findButton->setDefault(true);


        QMetaObject::connectSlotsByName(ReplaceWidget);
    } // setupUi

    void retranslateUi(QWidget *ReplaceWidget)
    {
        ReplaceWidget->setWindowTitle(QApplication::translate("ReplaceWidget", "Form", 0));
        label->setText(QApplication::translate("ReplaceWidget", "Find", 0));
        findButton->setText(QApplication::translate("ReplaceWidget", "Find", 0));
        radioForward->setText(QApplication::translate("ReplaceWidget", "Forward", 0));
        closeButton->setText(QString());
        label_2->setText(QApplication::translate("ReplaceWidget", "Replace", 0));
        replaceallButton->setText(QApplication::translate("ReplaceWidget", "Replace All", 0));
        checkWords->setText(QApplication::translate("ReplaceWidget", "Whole words only", 0));
        checkCase->setText(QApplication::translate("ReplaceWidget", "Case sensitive", 0));
        checkBegin->setText(QApplication::translate("ReplaceWidget", "Start at Beginning", 0));
        moreButton->setText(QApplication::translate("ReplaceWidget", "+", 0));
        checkRegExp->setText(QApplication::translate("ReplaceWidget", "Regular Expression", 0));
#ifndef QT_NO_TOOLTIP
        checkSelection->setToolTip(QApplication::translate("ReplaceWidget", "Text must be selected before checking this option.", 0));
#endif // QT_NO_TOOLTIP
        checkSelection->setText(QApplication::translate("ReplaceWidget", "In selection only", 0));
        radioBackward->setText(QApplication::translate("ReplaceWidget", "Backward", 0));
    } // retranslateUi

};

namespace Ui {
    class ReplaceWidget: public Ui_ReplaceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPLACEWIDGET_H
