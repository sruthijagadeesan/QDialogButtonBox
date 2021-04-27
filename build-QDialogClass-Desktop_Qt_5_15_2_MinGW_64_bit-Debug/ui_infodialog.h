/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *PositionlineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *WindowsradioButton;
    QRadioButton *MACradioButton;
    QRadioButton *LinuxradioButton;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *OKpushButton;
    QPushButton *CANCELpushButton_2;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(721, 349);
        verticalLayout_2 = new QVBoxLayout(InfoDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(InfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(InfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        PositionlineEdit = new QLineEdit(InfoDialog);
        PositionlineEdit->setObjectName(QString::fromUtf8("PositionlineEdit"));

        horizontalLayout_2->addWidget(PositionlineEdit);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        WindowsradioButton = new QRadioButton(groupBox);
        WindowsradioButton->setObjectName(QString::fromUtf8("WindowsradioButton"));

        verticalLayout->addWidget(WindowsradioButton);

        MACradioButton = new QRadioButton(groupBox);
        MACradioButton->setObjectName(QString::fromUtf8("MACradioButton"));

        verticalLayout->addWidget(MACradioButton);

        LinuxradioButton = new QRadioButton(groupBox);
        LinuxradioButton->setObjectName(QString::fromUtf8("LinuxradioButton"));

        verticalLayout->addWidget(LinuxradioButton);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(428, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OKpushButton = new QPushButton(InfoDialog);
        OKpushButton->setObjectName(QString::fromUtf8("OKpushButton"));

        horizontalLayout->addWidget(OKpushButton);

        CANCELpushButton_2 = new QPushButton(InfoDialog);
        CANCELpushButton_2->setObjectName(QString::fromUtf8("CANCELpushButton_2"));

        horizontalLayout->addWidget(CANCELpushButton_2);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoDialog", "Your Information", nullptr));
        label_2->setText(QCoreApplication::translate("InfoDialog", "Position:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InfoDialog", "Your favourite OS:", nullptr));
        WindowsradioButton->setText(QCoreApplication::translate("InfoDialog", "Windows", nullptr));
        MACradioButton->setText(QCoreApplication::translate("InfoDialog", "MAC", nullptr));
        LinuxradioButton->setText(QCoreApplication::translate("InfoDialog", "Linux", nullptr));
        OKpushButton->setText(QCoreApplication::translate("InfoDialog", "OK", nullptr));
        CANCELpushButton_2->setText(QCoreApplication::translate("InfoDialog", "CANCEL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
