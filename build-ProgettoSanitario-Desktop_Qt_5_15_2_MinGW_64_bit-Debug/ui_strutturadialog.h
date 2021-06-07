/********************************************************************************
** Form generated from reading UI file 'strutturadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRUTTURADIALOG_H
#define UI_STRUTTURADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_strutturaDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonInserisci;
    QPushButton *pushButtonAnnulla;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QSpinBox *spinBoxGradi;
    QSpinBox *spinBoxMinuti;
    QSpinBox *spinBox_3;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEditNomeStruttura;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QDialog *strutturaDialog)
    {
        if (strutturaDialog->objectName().isEmpty())
            strutturaDialog->setObjectName(QString::fromUtf8("strutturaDialog"));
        strutturaDialog->resize(339, 240);
        gridLayout = new QGridLayout(strutturaDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonInserisci = new QPushButton(strutturaDialog);
        pushButtonInserisci->setObjectName(QString::fromUtf8("pushButtonInserisci"));

        gridLayout->addWidget(pushButtonInserisci, 2, 1, 1, 1);

        pushButtonAnnulla = new QPushButton(strutturaDialog);
        pushButtonAnnulla->setObjectName(QString::fromUtf8("pushButtonAnnulla"));

        gridLayout->addWidget(pushButtonAnnulla, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(strutturaDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 3, 1, 1);

        spinBoxGradi = new QSpinBox(groupBox_2);
        spinBoxGradi->setObjectName(QString::fromUtf8("spinBoxGradi"));

        gridLayout_3->addWidget(spinBoxGradi, 0, 1, 1, 1);

        spinBoxMinuti = new QSpinBox(groupBox_2);
        spinBoxMinuti->setObjectName(QString::fromUtf8("spinBoxMinuti"));

        gridLayout_3->addWidget(spinBoxMinuti, 0, 4, 1, 1);

        spinBox_3 = new QSpinBox(groupBox_2);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));

        gridLayout_3->addWidget(spinBox_3, 0, 7, 1, 1);

        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 0, 6, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 5, 1, 1);


        gridLayout->addWidget(groupBox_2, 1, 0, 1, 2);

        groupBox = new QGroupBox(strutturaDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEditNomeStruttura = new QLineEdit(groupBox);
        lineEditNomeStruttura->setObjectName(QString::fromUtf8("lineEditNomeStruttura"));

        gridLayout_2->addWidget(lineEditNomeStruttura, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);


        retranslateUi(strutturaDialog);

        QMetaObject::connectSlotsByName(strutturaDialog);
    } // setupUi

    void retranslateUi(QDialog *strutturaDialog)
    {
        strutturaDialog->setWindowTitle(QCoreApplication::translate("strutturaDialog", "Dialog", nullptr));
        pushButtonInserisci->setText(QCoreApplication::translate("strutturaDialog", "Inserisci", nullptr));
        pushButtonAnnulla->setText(QCoreApplication::translate("strutturaDialog", "Annula", nullptr));
        groupBox_2->setTitle(QString());
        label_3->setText(QCoreApplication::translate("strutturaDialog", "Minuti", nullptr));
        label_4->setText(QCoreApplication::translate("strutturaDialog", "Secondi", nullptr));
        label_2->setText(QCoreApplication::translate("strutturaDialog", "Gradi", nullptr));
        groupBox->setTitle(QCoreApplication::translate("strutturaDialog", "Dati Struttura", nullptr));
        label->setText(QCoreApplication::translate("strutturaDialog", "Nome Struttura", nullptr));
    } // retranslateUi

};

namespace Ui {
    class strutturaDialog: public Ui_strutturaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRUTTURADIALOG_H
