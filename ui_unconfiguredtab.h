/********************************************************************************
** Form generated from reading UI file 'unconfiguredtab.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UNCONFIGUREDTAB_H
#define UI_UNCONFIGUREDTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UnconfiguredTab
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *UnconfiguredTab)
    {
        if (UnconfiguredTab->objectName().isEmpty())
            UnconfiguredTab->setObjectName(QString::fromUtf8("UnconfiguredTab"));
        UnconfiguredTab->resize(400, 300);
        horizontalLayout = new QHBoxLayout(UnconfiguredTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(UnconfiguredTab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(UnconfiguredTab);

        QMetaObject::connectSlotsByName(UnconfiguredTab);
    } // setupUi

    void retranslateUi(QWidget *UnconfiguredTab)
    {
        UnconfiguredTab->setWindowTitle(QCoreApplication::translate("UnconfiguredTab", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("UnconfiguredTab", "Configure", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UnconfiguredTab: public Ui_UnconfiguredTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UNCONFIGUREDTAB_H
