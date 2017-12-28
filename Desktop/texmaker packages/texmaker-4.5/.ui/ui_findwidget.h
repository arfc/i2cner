/********************************************************************************
** Form generated from reading UI file 'findwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDWIDGET_H
#define UI_FINDWIDGET_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FindWidget
{
public:
    QGridLayout *gridLayout;
    QComboBox *comboFind;
    QPushButton *findButton;
    QRadioButton *radioForward;
    QRadioButton *radioBackward;
    QPushButton *closeButton;
    QSpacerItem *spacerItem;
    QCheckBox *checkWords;
    QCheckBox *checkCase;
    QCheckBox *checkBegin;
    QPushButton *moreButton;
    QFrame *extension;
    QHBoxLayout *horizontalLayout;
    QCheckBox *checkRegExp;
    QCheckBox *checkSelection;

    void setupUi(QWidget *FindWidget)
    {
        if (FindWidget->objectName().isEmpty())
            FindWidget->setObjectName(QStringLiteral("FindWidget"));
        FindWidget->resize(513, 94);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FindWidget->sizePolicy().hasHeightForWidth());
        FindWidget->setSizePolicy(sizePolicy);
        FindWidget->setFocusPolicy(Qt::NoFocus);
        gridLayout = new QGridLayout(FindWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        comboFind = new QComboBox(FindWidget);
        comboFind->setObjectName(QStringLiteral("comboFind"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboFind->sizePolicy().hasHeightForWidth());
        comboFind->setSizePolicy(sizePolicy1);
        comboFind->setFocusPolicy(Qt::WheelFocus);
        comboFind->setEditable(true);

        gridLayout->addWidget(comboFind, 0, 0, 1, 2);

        findButton = new QPushButton(FindWidget);
        findButton->setObjectName(QStringLiteral("findButton"));

        gridLayout->addWidget(findButton, 0, 2, 1, 1);

        radioForward = new QRadioButton(FindWidget);
        radioForward->setObjectName(QStringLiteral("radioForward"));
        radioForward->setChecked(true);

        gridLayout->addWidget(radioForward, 0, 3, 1, 1);

        radioBackward = new QRadioButton(FindWidget);
        radioBackward->setObjectName(QStringLiteral("radioBackward"));

        gridLayout->addWidget(radioBackward, 0, 4, 1, 1);

        closeButton = new QPushButton(FindWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/fileclose.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);
        closeButton->setAutoDefault(true);

        gridLayout->addWidget(closeButton, 0, 5, 1, 1);

        spacerItem = new QSpacerItem(41, 51, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(spacerItem, 0, 6, 3, 1);

        checkWords = new QCheckBox(FindWidget);
        checkWords->setObjectName(QStringLiteral("checkWords"));

        gridLayout->addWidget(checkWords, 1, 0, 1, 1);

        checkCase = new QCheckBox(FindWidget);
        checkCase->setObjectName(QStringLiteral("checkCase"));

        gridLayout->addWidget(checkCase, 1, 1, 1, 2);

        checkBegin = new QCheckBox(FindWidget);
        checkBegin->setObjectName(QStringLiteral("checkBegin"));

        gridLayout->addWidget(checkBegin, 1, 3, 1, 2);

        moreButton = new QPushButton(FindWidget);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(moreButton->sizePolicy().hasHeightForWidth());
        moreButton->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(moreButton, 1, 5, 1, 1);

        extension = new QFrame(FindWidget);
        extension->setObjectName(QStringLiteral("extension"));
        extension->setFrameShape(QFrame::NoFrame);
        extension->setFrameShadow(QFrame::Plain);
        extension->setLineWidth(0);
        horizontalLayout = new QHBoxLayout(extension);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        checkRegExp = new QCheckBox(extension);
        checkRegExp->setObjectName(QStringLiteral("checkRegExp"));

        horizontalLayout->addWidget(checkRegExp);

        checkSelection = new QCheckBox(extension);
        checkSelection->setObjectName(QStringLiteral("checkSelection"));

        horizontalLayout->addWidget(checkSelection);


        gridLayout->addWidget(extension, 2, 0, 1, 6);

        QWidget::setTabOrder(comboFind, findButton);
        QWidget::setTabOrder(findButton, radioForward);
        QWidget::setTabOrder(radioForward, radioBackward);
        QWidget::setTabOrder(radioBackward, checkWords);
        QWidget::setTabOrder(checkWords, checkCase);
        QWidget::setTabOrder(checkCase, checkBegin);
        QWidget::setTabOrder(checkBegin, closeButton);
        QWidget::setTabOrder(closeButton, moreButton);
        QWidget::setTabOrder(moreButton, checkRegExp);

        retranslateUi(FindWidget);

        findButton->setDefault(true);


        QMetaObject::connectSlotsByName(FindWidget);
    } // setupUi

    void retranslateUi(QWidget *FindWidget)
    {
        FindWidget->setWindowTitle(QApplication::translate("FindWidget", "Form", 0));
        findButton->setText(QApplication::translate("FindWidget", "Find", 0));
        radioForward->setText(QApplication::translate("FindWidget", "Forward", 0));
        radioBackward->setText(QApplication::translate("FindWidget", "Backward", 0));
        closeButton->setText(QString());
        checkWords->setText(QApplication::translate("FindWidget", "Whole words only", 0));
        checkCase->setText(QApplication::translate("FindWidget", "Case sensitive", 0));
        checkBegin->setText(QApplication::translate("FindWidget", "Start at Beginning", 0));
        moreButton->setText(QApplication::translate("FindWidget", "+", 0));
        checkRegExp->setText(QApplication::translate("FindWidget", "Regular Expression", 0));
#ifndef QT_NO_TOOLTIP
        checkSelection->setToolTip(QApplication::translate("FindWidget", "Text must be selected before checking this option.", 0));
#endif // QT_NO_TOOLTIP
        checkSelection->setText(QApplication::translate("FindWidget", "In selection only", 0));
    } // retranslateUi

};

namespace Ui {
    class FindWidget: public Ui_FindWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDWIDGET_H
