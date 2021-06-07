/********************************************************************************
** Form generated from reading UI file 'rimuovistrutturadialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RIMUOVISTRUTTURADIALOG_H
#define UI_RIMUOVISTRUTTURADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_rimuoviStrutturaDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *pushButtonConferma;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBoxId;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QLabel *label;

    void setupUi(QDialog *rimuoviStrutturaDialog)
    {
        if (rimuoviStrutturaDialog->objectName().isEmpty())
            rimuoviStrutturaDialog->setObjectName(QString::fromUtf8("rimuoviStrutturaDialog"));
        rimuoviStrutturaDialog->resize(400, 300);
        gridLayout = new QGridLayout(rimuoviStrutturaDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(rimuoviStrutturaDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        pushButtonConferma = new QPushButton(rimuoviStrutturaDialog);
        pushButtonConferma->setObjectName(QString::fromUtf8("pushButtonConferma"));

        gridLayout->addWidget(pushButtonConferma, 1, 1, 1, 1);

        groupBox = new QGroupBox(rimuoviStrutturaDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spinBoxId = new QSpinBox(groupBox);
        spinBoxId->setObjectName(QString::fromUtf8("spinBoxId"));

        gridLayout_2->addWidget(spinBoxId, 2, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        gridLayout_2->addWidget(textBrowser, 1, 0, 1, 2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);


        retranslateUi(rimuoviStrutturaDialog);

        QMetaObject::connectSlotsByName(rimuoviStrutturaDialog);
    } // setupUi

    void retranslateUi(QDialog *rimuoviStrutturaDialog)
    {
        rimuoviStrutturaDialog->setWindowTitle(QCoreApplication::translate("rimuoviStrutturaDialog", "Rimuovi Struttura", nullptr));
        pushButton->setText(QCoreApplication::translate("rimuoviStrutturaDialog", "Annulla", nullptr));
        pushButtonConferma->setText(QCoreApplication::translate("rimuoviStrutturaDialog", "Conferma Eliminazione", nullptr));
        groupBox->setTitle(QString());
        label_2->setText(QCoreApplication::translate("rimuoviStrutturaDialog", "Id Struttura", nullptr));
        label->setText(QCoreApplication::translate("rimuoviStrutturaDialog", "Quale struttura vuoi rimuovere?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rimuoviStrutturaDialog: public Ui_rimuoviStrutturaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RIMUOVISTRUTTURADIALOG_H
