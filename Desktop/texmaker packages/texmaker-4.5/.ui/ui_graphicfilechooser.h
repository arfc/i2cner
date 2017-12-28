/********************************************************************************
** Form generated from reading UI file 'graphicfilechooser.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICFILECHOOSER_H
#define UI_GRAPHICFILECHOOSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_GraphicFileChooser
{
public:
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *moreButton;
    QSpacerItem *horizontalSpacer;
    QDialogButtonBox *buttonBox;
    QFrame *extension;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelCaption;
    QLineEdit *lineEditCaption;
    QComboBox *comboBoxCaption;
    QLabel *labelPlacement;
    QLineEdit *lineEditPlacement;
    QLabel *labelFigure;
    QCheckBox *checkBoxCentering;

    void setupUi(QDialog *GraphicFileChooser)
    {
        if (GraphicFileChooser->objectName().isEmpty())
            GraphicFileChooser->setObjectName(QStringLiteral("GraphicFileChooser"));
        GraphicFileChooser->resize(469, 220);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GraphicFileChooser->sizePolicy().hasHeightForWidth());
        GraphicFileChooser->setSizePolicy(sizePolicy);
        gridLayout_3 = new QGridLayout(GraphicFileChooser);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(GraphicFileChooser);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(GraphicFileChooser);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy2);
        lineEdit->setMinimumSize(QSize(250, 0));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(GraphicFileChooser);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/fileopen16.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(16, 16));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        moreButton = new QPushButton(GraphicFileChooser);
        moreButton->setObjectName(QStringLiteral("moreButton"));
        sizePolicy1.setHeightForWidth(moreButton->sizePolicy().hasHeightForWidth());
        moreButton->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(moreButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(GraphicFileChooser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_3->addWidget(buttonBox, 0, 1, 1, 1);

        extension = new QFrame(GraphicFileChooser);
        extension->setObjectName(QStringLiteral("extension"));
        extension->setFrameShape(QFrame::StyledPanel);
        extension->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(extension);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelCaption = new QLabel(extension);
        labelCaption->setObjectName(QStringLiteral("labelCaption"));
        sizePolicy.setHeightForWidth(labelCaption->sizePolicy().hasHeightForWidth());
        labelCaption->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelCaption, 1, 0, 1, 1);

        lineEditCaption = new QLineEdit(extension);
        lineEditCaption->setObjectName(QStringLiteral("lineEditCaption"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lineEditCaption->sizePolicy().hasHeightForWidth());
        lineEditCaption->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(lineEditCaption, 1, 1, 1, 1);

        comboBoxCaption = new QComboBox(extension);
        comboBoxCaption->setObjectName(QStringLiteral("comboBoxCaption"));
        sizePolicy.setHeightForWidth(comboBoxCaption->sizePolicy().hasHeightForWidth());
        comboBoxCaption->setSizePolicy(sizePolicy);

        gridLayout->addWidget(comboBoxCaption, 1, 2, 1, 1);

        labelPlacement = new QLabel(extension);
        labelPlacement->setObjectName(QStringLiteral("labelPlacement"));
        sizePolicy.setHeightForWidth(labelPlacement->sizePolicy().hasHeightForWidth());
        labelPlacement->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelPlacement, 2, 0, 1, 1);

        lineEditPlacement = new QLineEdit(extension);
        lineEditPlacement->setObjectName(QStringLiteral("lineEditPlacement"));
        sizePolicy4.setHeightForWidth(lineEditPlacement->sizePolicy().hasHeightForWidth());
        lineEditPlacement->setSizePolicy(sizePolicy4);

        gridLayout->addWidget(lineEditPlacement, 2, 1, 1, 2);

        labelFigure = new QLabel(extension);
        labelFigure->setObjectName(QStringLiteral("labelFigure"));
        sizePolicy.setHeightForWidth(labelFigure->sizePolicy().hasHeightForWidth());
        labelFigure->setSizePolicy(sizePolicy);
        labelFigure->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(labelFigure, 0, 0, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        checkBoxCentering = new QCheckBox(extension);
        checkBoxCentering->setObjectName(QStringLiteral("checkBoxCentering"));
        checkBoxCentering->setChecked(true);

        gridLayout_2->addWidget(checkBoxCentering, 1, 0, 1, 1);


        gridLayout_3->addWidget(extension, 2, 0, 1, 2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(lineEdit, pushButton);

        retranslateUi(GraphicFileChooser);
        QObject::connect(buttonBox, SIGNAL(accepted()), GraphicFileChooser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), GraphicFileChooser, SLOT(reject()));

        QMetaObject::connectSlotsByName(GraphicFileChooser);
    } // setupUi

    void retranslateUi(QDialog *GraphicFileChooser)
    {
        label->setText(QApplication::translate("GraphicFileChooser", "File", 0));
        pushButton->setText(QString());
        moreButton->setText(QApplication::translate("GraphicFileChooser", "+", 0));
        labelCaption->setText(QApplication::translate("GraphicFileChooser", "Caption", 0));
        comboBoxCaption->clear();
        comboBoxCaption->insertItems(0, QStringList()
         << QApplication::translate("GraphicFileChooser", "Above", 0)
         << QApplication::translate("GraphicFileChooser", "Below", 0)
        );
        labelPlacement->setText(QApplication::translate("GraphicFileChooser", "Placement", 0));
        lineEditPlacement->setText(QApplication::translate("GraphicFileChooser", "hbtp", 0));
        labelFigure->setText(QApplication::translate("GraphicFileChooser", "Use \"figure\" environment", 0));
        checkBoxCentering->setText(QApplication::translate("GraphicFileChooser", "Center", 0));
        Q_UNUSED(GraphicFileChooser);
    } // retranslateUi

};

namespace Ui {
    class GraphicFileChooser: public Ui_GraphicFileChooser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICFILECHOOSER_H
