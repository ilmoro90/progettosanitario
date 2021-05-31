#include "mainwindow.h"

#include <QApplication>
#include <QLocale>
#include <QTranslator>
#include <iostream>
#include "Prestazione.h"
#include "Esame.h"
#include "Medico.h"
#include "Strumento.h"
#include "Coordinate.h"
#include "Struttura.h"
#include "Prenotazione.h"
#include "Utente.h"
#include "Cittadino.h"
#include "DirezioneSanitaria.h"
#include "AmministrativoCup.h"
#include "Data.h"
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
        Medico* m = new Medico("mario","pneumologia");
        Medico* m2 = new Medico("beatrice","chirurgia");
        Medico* m3 = new Medico("bianca","cardiologia");
        Medico* m4 = new Medico("francesca","podologia");
        Medico* m5 = new Medico("antonio","ortopedia");

        Strumento* s = new Strumento("fonendoscopio");
        Strumento* s1 = new Strumento("Tac");
        Strumento* s2 = new Strumento("RX");

        Esame* e = new Esame(s,"Visitapneumologica", "pneumologia", 150.0,m);
        Esame* e1 = new Esame(s1,"Esameaddome", "chirurgia", 150.0,m);
        Esame* e2 = new Esame(s2,"RX", "ortopedia", 150.0,m);
        Visita* v = new Visita("Visitacardiologica", "cardiologia", 170, m5);
        Visita* v1 = new Visita("Visitapiede", "podologia", 170, m5);

        Coordinate* c = new Coordinate(12, 134, 45);
        Coordinate* c2 = new Coordinate(11, 13, 5);

        //inserisco la struttura
        Struttura* struttura = new Struttura(c, "Gemelli");
        Struttura* struttura2 = new Struttura(c2, "Policlinico");


        //aggiungo medici in struttura
        struttura->aggiungiMedico(m, 10, 12, e);
        struttura->aggiungiMedico(m2, 8, 10, e1);
        struttura->aggiungiMedico(m3, 12, 14, v);

        struttura2->aggiungiMedico(m4, 7, 9, v1);
        struttura2->aggiungiMedico(m5, 14, 16, e2);

        struttura->stampaMediciStruttura();
        struttura2->stampaMediciStruttura();
        struttura->stampaListaPrestazioniDisponibili();
        struttura2->stampaListaPrestazioniDisponibili();

        struttura->filtraPrestazioniPerBranca("chirurgia");

        //creo i cittadini
        Cittadino* cittadino = new Cittadino("daniele");
        Cittadino* cittadino1 = new Cittadino("elena");
        Cittadino* cittadino2 = new Cittadino("gianluca");

        //creo le prenotazioni
        /*
        Prenotazione* prenotazione0 = new Prenotazione(cittadino, e->getBranca(),11,e->getCosto());
        Prenotazione* prenotazione = new Prenotazione(cittadino, "cardiologia", 10, 120);
        Prenotazione* prenotazione2 = new Prenotazione(cittadino, "chirurgia", 13, 130);
        Prenotazione* prenotazione3 = new Prenotazione(cittadino, e->getBranca(),12,e->getCosto());
        */
        //tengo traccia dei numeri di prenotazione e prenoto anche presso la struttura
        /*
        int numeroPrenotazione0 = struttura->prenotaPrestazione(prenotazione0);
        int numeroPrenotazione = struttura->prenotaPrestazione(prenotazione);
        int numeroPrenotazione2 = struttura->prenotaPrestazione(prenotazione2);
        int numeroPrenotazione3 = struttura->prenotaPrestazione(prenotazione3);
        //faccio delle stampe
        struttura->stampaListaPrestazioniDisponibili();
        struttura->stampaListaPrestazioniNonDisponibili();
        struttura->stampaListaPrenotazioni();

        //disdico una prenotazione
        struttura->disdiciPrenotazione(numeroPrenotazione);

        struttura->stampaListaPrestazioniDisponibili();
        struttura->stampaListaPrestazioniNonDisponibili();
         */

        //aggiungo direzione sanitaria
        Data::asl1 = new DirezioneSanitaria("asl1","Mario Rossi", "Roma1" );

        //aggiungo utenti alla direzione sanitaria
        Data::asl1->aggiungiUtente(cittadino);
        Data::asl1->aggiungiUtente(cittadino1);
        Data::asl1->aggiungiUtente(cittadino2);

        Data::asl1->stampaListaUtenti();

        //rimuovo utenti dalla lista
        //asl1->rimuoviUtente(0);
        Data::asl1->stampaListaUtenti();
        Data::asl1->aggiungiUtente(cittadino);
        Data::asl1->stampaListaUtenti();

        //aggiungo struttura alla direzione sanitaria
        Data::asl1->aggiungiStruttura(struttura);
        Data::asl1->aggiungiStruttura(struttura2);
        //asl1->aggiungiStruttura(struttura);	//aggiungo la stessa struttura, gestisco,OK

        Data::asl1->stampaListaStrutture();		//ristampo,OK
        //asl1->rimuoviStruttura(0);			//rimuovo una struttura,OK
        //asl1->stampaListaStrutture();		//stampa le strutture, OK
        //asl1->aggiungiStruttura(struttura);	//riaggiungo la struttura, nuovo identificativo, OK
        //asl1->stampaListaStrutture();

        AmministrativoCup* amministratore = new AmministrativoCup("Marco","admin","password");
        Data::asl1->setAmministratoreSistema(amministratore);
        cout << Data::asl1->getAmministratoreSistema()->getNome()<< endl;


        DirezioneSanitaria::listaProva[1] = 100;
        DirezioneSanitaria::listaProva[2] = 200;
        DirezioneSanitaria::listaProva[3] = 300;

    QApplication a(argc, argv);

    QTranslator translator;
    const QStringList uiLanguages = QLocale::system().uiLanguages();
    for (const QString &locale : uiLanguages) {
        const QString baseName = "ProgettoSanitario_" + QLocale(locale).name();
        if (translator.load(":/i18n/" + baseName)) {
            a.installTranslator(&translator);
            break;
        }
    }

    MainWindow* w = new MainWindow();
    w->show();
    return a.exec();
}
