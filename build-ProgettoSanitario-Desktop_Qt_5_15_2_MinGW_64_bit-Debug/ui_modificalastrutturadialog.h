/********************************************************************************
** Form generated from reading UI file 'modificalastrutturadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICALASTRUTTURADIALOG_H
#define UI_MODIFICALASTRUTTURADIALOG_H

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
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_ModificaLaStrutturaDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButtonAnnulla;
    QPushButton *pushButtonConferma;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QSpinBox *spinBoxId;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QTextBrowser *textBrowserLista;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *ModificaLaStrutturaDialog)
    {
        if (ModificaLaStrutturaDialog->objectName().isEmpty())
            ModificaLaStrutturaDialog->setObjectName(QString::fromUtf8("ModificaLaStrutturaDialog"));
        ModificaLaStrutturaDialog->resize(400, 300);
        gridLayout = new QGridLayout(ModificaLaStrutturaDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButtonAnnulla = new QPushButton(ModificaLaStrutturaDialog);
        pushButtonAnnulla->setObjectName(QString::fromUtf8("pushButtonAnnulla"));

        gridLayout->addWidget(pushButtonAnnulla, 1, 0, 1, 1);

        pushButtonConferma = new QPushButton(ModificaLaStrutturaDialog);
        pushButtonConferma->setObjectName(QString::fromUtf8("pushButtonConferma"));

        gridLayout->addWidget(pushButtonConferma, 1, 1, 1, 1);

        groupBox = new QGroupBox(ModificaLaStrutturaDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        spinBoxId = new QSpinBox(groupBox);
        spinBoxId->setObjectName(QString::fromUtf8("spinBoxId"));

        gridLayout_2->addWidget(spinBoxId, 2, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 2, 2, 1, 1);

        textBrowserLista = new QTextBrowser(groupBox);
        textBrowserLista->setObjectName(QString::fromUtf8("textBrowserLista"));

        gridLayout_2->addWidget(textBrowserLista, 1, 0, 1, 3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 3, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);


        retranslateUi(ModificaLaStrutturaDialog);

        QMetaObject::connectSlotsByName(ModificaLaStrutturaDialog);
    } // setupUi

    void retranslateUi(QDialog *ModificaLaStrutturaDialog)
    {
        ModificaLaStrutturaDialog->setWindowTitle(QCoreApplication::translate("ModificaLaStrutturaDialog", "Modifica Struttura", nullptr));
        pushButtonAnnulla->setText(QCoreApplication::translate("ModificaLaStrutturaDialog", "Annulla", nullptr));
        pushButtonConferma->setText(QCoreApplication::translate("ModificaLaStrutturaDialog", "Conferma Modifiche", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("ModificaLaStrutturaDialog", "Di quale struttura vuoi modificare il nome?", nullptr));
        label_2->setText(QCoreApplication::translate("ModificaLaStrutturaDialog", "Id Struttura", nullptr));
        label_3->setText(QCoreApplication::translate("ModificaLaStrutturaDialog", "Nuovo Nome Struttura", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModificaLaStrutturaDialog: public Ui_ModificaLaStrutturaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICALASTRUTTURADIALOG_H
