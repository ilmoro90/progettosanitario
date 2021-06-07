/********************************************************************************
** Form generated from reading UI file 'disdicidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISDICIDIALOG_H
#define UI_DISDICIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DisdiciDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *annulla;
    QPushButton *disdici;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QDoubleSpinBox *numeroPrenotazione;

    void setupUi(QDialog *DisdiciDialog)
    {
        if (DisdiciDialog->objectName().isEmpty())
            DisdiciDialog->setObjectName(QString::fromUtf8("DisdiciDialog"));
        DisdiciDialog->setWindowModality(Qt::NonModal);
        DisdiciDialog->resize(413, 325);
        gridLayout = new QGridLayout(DisdiciDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        annulla = new QPushButton(DisdiciDialog);
        annulla->setObjectName(QString::fromUtf8("annulla"));

        gridLayout->addWidget(annulla, 1, 0, 1, 1);

        disdici = new QPushButton(DisdiciDialog);
        disdici->setObjectName(QString::fromUtf8("disdici"));

        gridLayout->addWidget(disdici, 1, 1, 1, 1);

        groupBox = new QGroupBox(DisdiciDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        numeroPrenotazione = new QDoubleSpinBox(groupBox);
        numeroPrenotazione->setObjectName(QString::fromUtf8("numeroPrenotazione"));
        numeroPrenotazione->setDecimals(4);

        gridLayout_2->addWidget(numeroPrenotazione, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 2);


        retranslateUi(DisdiciDialog);

        QMetaObject::connectSlotsByName(DisdiciDialog);
    } // setupUi

    void retranslateUi(QDialog *DisdiciDialog)
    {
        DisdiciDialog->setWindowTitle(QCoreApplication::translate("DisdiciDialog", "Disdici", nullptr));
        annulla->setText(QCoreApplication::translate("DisdiciDialog", "Annulla", nullptr));
        disdici->setText(QCoreApplication::translate("DisdiciDialog", "Disdici", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DisdiciDialog", "Disdici", nullptr));
        label->setText(QCoreApplication::translate("DisdiciDialog", "Numero Prestazione", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DisdiciDialog: public Ui_DisdiciDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISDICIDIALOG_H
