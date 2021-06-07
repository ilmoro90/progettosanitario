/********************************************************************************
** Form generated from reading UI file 'InterfacciaAmministratore.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INTERFACCIAAMMINISTRATORE_H
#define UI_INTERFACCIAAMMINISTRATORE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InterfacciaAmministratore
{
public:
    QAction *actioninserisciStruttura;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *prenotazioni;
    QVBoxLayout *verticalLayout_2;
    QPushButton *prenotaButton;
    QPushButton *disdiciPrenoButton;
    QPushButton *stampaPrenotaButton;
    QGroupBox *Utenti;
    QVBoxLayout *verticalLayout;
    QPushButton *inserisciUtenteButton;
    QPushButton *modificaUtenteButton;
    QPushButton *rimuoviUtenteButton;
    QPushButton *stampaUtenteButton;
    QGroupBox *Medici;
    QVBoxLayout *verticalLayout_3;
    QPushButton *aggiungiMedicoButton;
    QPushButton *modificaMedicoButton;
    QPushButton *rimuoviMedicoButton;
    QPushButton *stampaListaMedici;
    QGroupBox *Strutture;
    QGridLayout *gridLayout_2;
    QPushButton *inseriscistrutturaButton;
    QPushButton *modificaStrutturaButton;
    QPushButton *rimuoviStrutturaButton;
    QPushButton *stampaStruttureButton;
    QGroupBox *info;
    QVBoxLayout *verticalLayout_4;
    QTextBrowser *textBrowser;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuStruttura;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *InterfacciaAmministratore)
    {
        if (InterfacciaAmministratore->objectName().isEmpty())
            InterfacciaAmministratore->setObjectName(QString::fromUtf8("InterfacciaAmministratore"));
        InterfacciaAmministratore->resize(800, 600);
        actioninserisciStruttura = new QAction(InterfacciaAmministratore);
        actioninserisciStruttura->setObjectName(QString::fromUtf8("actioninserisciStruttura"));
        centralwidget = new QWidget(InterfacciaAmministratore);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        prenotazioni = new QGroupBox(centralwidget);
        prenotazioni->setObjectName(QString::fromUtf8("prenotazioni"));
        prenotazioni->setTitle(QString::fromUtf8("Prenotazioni"));
        prenotazioni->setFlat(false);
        verticalLayout_2 = new QVBoxLayout(prenotazioni);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        prenotaButton = new QPushButton(prenotazioni);
        prenotaButton->setObjectName(QString::fromUtf8("prenotaButton"));

        verticalLayout_2->addWidget(prenotaButton);

        disdiciPrenoButton = new QPushButton(prenotazioni);
        disdiciPrenoButton->setObjectName(QString::fromUtf8("disdiciPrenoButton"));

        verticalLayout_2->addWidget(disdiciPrenoButton);

        stampaPrenotaButton = new QPushButton(prenotazioni);
        stampaPrenotaButton->setObjectName(QString::fromUtf8("stampaPrenotaButton"));

        verticalLayout_2->addWidget(stampaPrenotaButton);


        gridLayout->addWidget(prenotazioni, 2, 3, 1, 1);

        Utenti = new QGroupBox(centralwidget);
        Utenti->setObjectName(QString::fromUtf8("Utenti"));
        Utenti->setTitle(QString::fromUtf8("Utenti"));
        Utenti->setFlat(false);
        verticalLayout = new QVBoxLayout(Utenti);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        inserisciUtenteButton = new QPushButton(Utenti);
        inserisciUtenteButton->setObjectName(QString::fromUtf8("inserisciUtenteButton"));

        verticalLayout->addWidget(inserisciUtenteButton);

        modificaUtenteButton = new QPushButton(Utenti);
        modificaUtenteButton->setObjectName(QString::fromUtf8("modificaUtenteButton"));

        verticalLayout->addWidget(modificaUtenteButton);

        rimuoviUtenteButton = new QPushButton(Utenti);
        rimuoviUtenteButton->setObjectName(QString::fromUtf8("rimuoviUtenteButton"));

        verticalLayout->addWidget(rimuoviUtenteButton);

        stampaUtenteButton = new QPushButton(Utenti);
        stampaUtenteButton->setObjectName(QString::fromUtf8("stampaUtenteButton"));

        verticalLayout->addWidget(stampaUtenteButton);


        gridLayout->addWidget(Utenti, 3, 2, 1, 1);

        Medici = new QGroupBox(centralwidget);
        Medici->setObjectName(QString::fromUtf8("Medici"));
        Medici->setTitle(QString::fromUtf8("Medici"));
        Medici->setFlat(false);
        verticalLayout_3 = new QVBoxLayout(Medici);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        aggiungiMedicoButton = new QPushButton(Medici);
        aggiungiMedicoButton->setObjectName(QString::fromUtf8("aggiungiMedicoButton"));

        verticalLayout_3->addWidget(aggiungiMedicoButton);

        modificaMedicoButton = new QPushButton(Medici);
        modificaMedicoButton->setObjectName(QString::fromUtf8("modificaMedicoButton"));

        verticalLayout_3->addWidget(modificaMedicoButton);

        rimuoviMedicoButton = new QPushButton(Medici);
        rimuoviMedicoButton->setObjectName(QString::fromUtf8("rimuoviMedicoButton"));

        verticalLayout_3->addWidget(rimuoviMedicoButton);

        stampaListaMedici = new QPushButton(Medici);
        stampaListaMedici->setObjectName(QString::fromUtf8("stampaListaMedici"));

        verticalLayout_3->addWidget(stampaListaMedici);


        gridLayout->addWidget(Medici, 3, 3, 1, 1);

        Strutture = new QGroupBox(centralwidget);
        Strutture->setObjectName(QString::fromUtf8("Strutture"));
        Strutture->setFlat(false);
        Strutture->setCheckable(false);
        gridLayout_2 = new QGridLayout(Strutture);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        inseriscistrutturaButton = new QPushButton(Strutture);
        inseriscistrutturaButton->setObjectName(QString::fromUtf8("inseriscistrutturaButton"));

        gridLayout_2->addWidget(inseriscistrutturaButton, 0, 0, 1, 1);

        modificaStrutturaButton = new QPushButton(Strutture);
        modificaStrutturaButton->setObjectName(QString::fromUtf8("modificaStrutturaButton"));

        gridLayout_2->addWidget(modificaStrutturaButton, 1, 0, 1, 1);

        rimuoviStrutturaButton = new QPushButton(Strutture);
        rimuoviStrutturaButton->setObjectName(QString::fromUtf8("rimuoviStrutturaButton"));

        gridLayout_2->addWidget(rimuoviStrutturaButton, 2, 0, 1, 1);

        stampaStruttureButton = new QPushButton(Strutture);
        stampaStruttureButton->setObjectName(QString::fromUtf8("stampaStruttureButton"));

        gridLayout_2->addWidget(stampaStruttureButton, 3, 0, 1, 1);


        gridLayout->addWidget(Strutture, 2, 2, 1, 1);

        info = new QGroupBox(centralwidget);
        info->setObjectName(QString::fromUtf8("info"));
        info->setFlat(false);
        verticalLayout_4 = new QVBoxLayout(info);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textBrowser = new QTextBrowser(info);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_4->addWidget(textBrowser);


        gridLayout->addWidget(info, 4, 2, 1, 2);

        InterfacciaAmministratore->setCentralWidget(centralwidget);
        menubar = new QMenuBar(InterfacciaAmministratore);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuStruttura = new QMenu(menubar);
        menuStruttura->setObjectName(QString::fromUtf8("menuStruttura"));
        InterfacciaAmministratore->setMenuBar(menubar);
        statusbar = new QStatusBar(InterfacciaAmministratore);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        InterfacciaAmministratore->setStatusBar(statusbar);
        toolBar = new QToolBar(InterfacciaAmministratore);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        InterfacciaAmministratore->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuStruttura->menuAction());
        menuStruttura->addAction(actioninserisciStruttura);

        retranslateUi(InterfacciaAmministratore);

        QMetaObject::connectSlotsByName(InterfacciaAmministratore);
    } // setupUi

    void retranslateUi(QMainWindow *InterfacciaAmministratore)
    {
        InterfacciaAmministratore->setWindowTitle(QCoreApplication::translate("InterfacciaAmministratore", "Asl Roma 1", nullptr));
        actioninserisciStruttura->setText(QCoreApplication::translate("InterfacciaAmministratore", "inserisciStruttura", nullptr));
#if QT_CONFIG(tooltip)
        actioninserisciStruttura->setToolTip(QCoreApplication::translate("InterfacciaAmministratore", "inserisci una struttura", nullptr));
#endif // QT_CONFIG(tooltip)
        prenotaButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Prenota", nullptr));
        disdiciPrenoButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Disdici", nullptr));
        stampaPrenotaButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Stampa Prenotazioni", nullptr));
        inserisciUtenteButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "inserisci Utente", nullptr));
        modificaUtenteButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Modifica Utente", nullptr));
        rimuoviUtenteButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Rimuovi Utente", nullptr));
        stampaUtenteButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Stampa Lista Utenti", nullptr));
        aggiungiMedicoButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Aggiungi Medico", nullptr));
        modificaMedicoButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Modifica Medico", nullptr));
        rimuoviMedicoButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Rimuovi Medico", nullptr));
        stampaListaMedici->setText(QCoreApplication::translate("InterfacciaAmministratore", "Stampa Lista Medici", nullptr));
        Strutture->setTitle(QCoreApplication::translate("InterfacciaAmministratore", "Strutture", nullptr));
        inseriscistrutturaButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Inserisci Struttura", nullptr));
        modificaStrutturaButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Modifica Struttura", nullptr));
        rimuoviStrutturaButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Rimuovi Struttura", nullptr));
        stampaStruttureButton->setText(QCoreApplication::translate("InterfacciaAmministratore", "Stampa Strutture", nullptr));
        info->setTitle(QCoreApplication::translate("InterfacciaAmministratore", "Info", nullptr));
        menuFile->setTitle(QCoreApplication::translate("InterfacciaAmministratore", "File", nullptr));
        menuStruttura->setTitle(QCoreApplication::translate("InterfacciaAmministratore", "Struttura", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("InterfacciaAmministratore", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InterfacciaAmministratore: public Ui_InterfacciaAmministratore {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INTERFACCIAAMMINISTRATORE_H
