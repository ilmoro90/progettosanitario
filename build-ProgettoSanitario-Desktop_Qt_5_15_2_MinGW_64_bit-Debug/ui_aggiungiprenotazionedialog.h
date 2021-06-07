/********************************************************************************
** Form generated from reading UI file 'aggiungiprenotazionedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGGIUNGIPRENOTAZIONEDIALOG_H
#define UI_AGGIUNGIPRENOTAZIONEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_aggiungiPrenotazioneDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_4;
    QTextBrowser *textBrowser;
    QPushButton *pushButtonPrenota;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_3;
    QSpinBox *spinBoxOrario;
    QRadioButton *radioButtonEsame;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label;
    QRadioButton *radioButtonVisita;
    QPushButton *pushButtonCerca;
    QLineEdit *nomeUtente;
    QLineEdit *lineEdit_2;

    void setupUi(QDialog *aggiungiPrenotazioneDialog)
    {
        if (aggiungiPrenotazioneDialog->objectName().isEmpty())
            aggiungiPrenotazioneDialog->setObjectName(QString::fromUtf8("aggiungiPrenotazioneDialog"));
        aggiungiPrenotazioneDialog->resize(556, 337);
        gridLayout = new QGridLayout(aggiungiPrenotazioneDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 0, 1, 2);

        textBrowser = new QTextBrowser(aggiungiPrenotazioneDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(150);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy);
        textBrowser->setMinimumSize(QSize(300, 0));

        gridLayout->addWidget(textBrowser, 0, 1, 1, 3);

        pushButtonPrenota = new QPushButton(aggiungiPrenotazioneDialog);
        pushButtonPrenota->setObjectName(QString::fromUtf8("pushButtonPrenota"));

        gridLayout->addWidget(pushButtonPrenota, 1, 3, 1, 1);

        pushButton_2 = new QPushButton(aggiungiPrenotazioneDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 1, 2, 1, 1);

        groupBox = new QGroupBox(aggiungiPrenotazioneDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        spinBoxOrario = new QSpinBox(groupBox);
        spinBoxOrario->setObjectName(QString::fromUtf8("spinBoxOrario"));

        gridLayout_2->addWidget(spinBoxOrario, 2, 1, 1, 1);

        radioButtonEsame = new QRadioButton(groupBox);
        radioButtonEsame->setObjectName(QString::fromUtf8("radioButtonEsame"));

        gridLayout_2->addWidget(radioButtonEsame, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        radioButtonVisita = new QRadioButton(groupBox);
        radioButtonVisita->setObjectName(QString::fromUtf8("radioButtonVisita"));

        gridLayout_2->addWidget(radioButtonVisita, 1, 5, 1, 1);

        pushButtonCerca = new QPushButton(groupBox);
        pushButtonCerca->setObjectName(QString::fromUtf8("pushButtonCerca"));

        gridLayout_2->addWidget(pushButtonCerca, 4, 5, 1, 2);

        nomeUtente = new QLineEdit(groupBox);
        nomeUtente->setObjectName(QString::fromUtf8("nomeUtente"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(nomeUtente->sizePolicy().hasHeightForWidth());
        nomeUtente->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(nomeUtente, 0, 5, 1, 1);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        sizePolicy1.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(lineEdit_2, 3, 5, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_3->setBuddy(spinBoxOrario);
        label_2->setBuddy(radioButtonEsame);
        label_4->setBuddy(lineEdit_2);
        label->setBuddy(nomeUtente);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(nomeUtente, radioButtonEsame);
        QWidget::setTabOrder(radioButtonEsame, radioButtonVisita);
        QWidget::setTabOrder(radioButtonVisita, spinBoxOrario);
        QWidget::setTabOrder(spinBoxOrario, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, pushButtonCerca);
        QWidget::setTabOrder(pushButtonCerca, pushButtonPrenota);
        QWidget::setTabOrder(pushButtonPrenota, pushButton_2);
        QWidget::setTabOrder(pushButton_2, textBrowser);

        retranslateUi(aggiungiPrenotazioneDialog);

        QMetaObject::connectSlotsByName(aggiungiPrenotazioneDialog);
    } // setupUi

    void retranslateUi(QDialog *aggiungiPrenotazioneDialog)
    {
        aggiungiPrenotazioneDialog->setWindowTitle(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Prenota", nullptr));
        pushButtonPrenota->setText(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Prenota", nullptr));
        pushButton_2->setText(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Annulla", nullptr));
        groupBox->setTitle(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Prenotazione prestazione", nullptr));
        label_3->setText(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Orario", nullptr));
        radioButtonEsame->setText(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Esame", nullptr));
        label_2->setText(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Tipologia Esame", nullptr));
        label_4->setText(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Nome della Prestazione", nullptr));
        label->setText(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Nome Utente", nullptr));
        radioButtonVisita->setText(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Visita", nullptr));
        pushButtonCerca->setText(QCoreApplication::translate("aggiungiPrenotazioneDialog", "Cerca", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aggiungiPrenotazioneDialog: public Ui_aggiungiPrenotazioneDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGGIUNGIPRENOTAZIONEDIALOG_H
