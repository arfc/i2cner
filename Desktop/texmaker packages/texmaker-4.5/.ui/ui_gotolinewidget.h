/********************************************************************************
** Form generated from reading UI file 'gotolinewidget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOTOLINEWIDGET_H
#define UI_GOTOLINEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GotoLineWidget
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QSpinBox *spinLine;
    QPushButton *gotoButton;
    QPushButton *closeButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *GotoLineWidget)
    {
        if (GotoLineWidget->objectName().isEmpty())
            GotoLineWidget->setObjectName(QStringLiteral("GotoLineWidget"));
        GotoLineWidget->resize(516, 33);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GotoLineWidget->sizePolicy().hasHeightForWidth());
        GotoLineWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(GotoLineWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(GotoLineWidget);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinLine = new QSpinBox(GotoLineWidget);
        spinLine->setObjectName(QStringLiteral("spinLine"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(spinLine->sizePolicy().hasHeightForWidth());
        spinLine->setSizePolicy(sizePolicy2);
        spinLine->setMaximumSize(QSize(100, 16777215));
        spinLine->setReadOnly(false);
        spinLine->setKeyboardTracking(true);

        gridLayout->addWidget(spinLine, 0, 1, 1, 1);

        gotoButton = new QPushButton(GotoLineWidget);
        gotoButton->setObjectName(QStringLiteral("gotoButton"));
        gotoButton->setShortcut(QStringLiteral(""));
        gotoButton->setAutoDefault(false);

        gridLayout->addWidget(gotoButton, 0, 2, 1, 1);

        closeButton = new QPushButton(GotoLineWidget);
        closeButton->setObjectName(QStringLiteral("closeButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/fileclose.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton->setIcon(icon);

        gridLayout->addWidget(closeButton, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(172, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 4, 1, 1);


        retranslateUi(GotoLineWidget);

        gotoButton->setDefault(true);


        QMetaObject::connectSlotsByName(GotoLineWidget);
    } // setupUi

    void retranslateUi(QWidget *GotoLineWidget)
    {
        GotoLineWidget->setWindowTitle(QApplication::translate("GotoLineWidget", "Form", 0));
        label->setText(QApplication::translate("GotoLineWidget", "Line", 0));
        gotoButton->setText(QApplication::translate("GotoLineWidget", "Goto", 0));
        closeButton->setText(QApplication::translate("GotoLineWidget", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class GotoLineWidget: public Ui_GotoLineWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOTOLINEWIDGET_H
