#include "InterfacciaAmministratore.h"
#include "ui_InterfacciaAmministratore.h"
#include "strutturadialog.h"
#include "Data.h"
#include <map>
#include "Struttura.h"
#include "DirezioneSanitaria.h"
#include <iostream>
#include "modificalastrutturadialog.h"
#include "rimuovistrutturadialog.h"
#include "aggiungiprenotazionedialog.h"
#include "disdicidialog.h"
#include "Prestazione.h"

using namespace std;
InterfacciaAmministratore::InterfacciaAmministratore(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InterfacciaAmministratore)
{
    ui->setupUi(this);
}

InterfacciaAmministratore::~InterfacciaAmministratore()
{
    delete ui;
}



void InterfacciaAmministratore::on_inseriscistrutturaButton_clicked()
{
    strutturaDialog* struttDial = new strutturaDialog();
    struttDial->exec();
}


void InterfacciaAmministratore::on_actioninserisciStruttura_triggered()
{
    strutturaDialog* struttDial = new strutturaDialog();
    struttDial->exec();
}


void InterfacciaAmministratore::on_stampaStruttureButton_clicked()
{
    ui->textBrowser->clear();
    string nome,id;
    map<int,Struttura*>::iterator it = DirezioneSanitaria::listaStrutture.begin();
    if(it==DirezioneSanitaria::listaStrutture.end())
        ui->textBrowser->insertPlainText("Lista vuota");
    else{
        while(it != DirezioneSanitaria::listaStrutture.end()){
            nome = it->second->getNomeStruttura();
            id = to_string(it->first);
            QString s = "Id Struttura: " + QString::fromStdString(id)
                    + " - Nome: " + QString::fromStdString(nome)
                    + " - Coordinate: " + QString::fromStdString(it->second->getCoordinate())
                    + "\n";
            ui->textBrowser->insertPlainText(s);

            count++;
            it++;
        }
    }
}


void InterfacciaAmministratore::on_modificaStrutturaButton_clicked()
{

    ModificaLaStrutturaDialog* w = new ModificaLaStrutturaDialog();
    w->exec();

}


void InterfacciaAmministratore::on_rimuoviStrutturaButton_clicked()
{
    rimuoviStrutturaDialog* w = new rimuoviStrutturaDialog();
    w->exec();
}


void InterfacciaAmministratore::on_prenotaButton_clicked()
{
    aggiungiPrenotazioneDialog* w = new aggiungiPrenotazioneDialog();
    w->exec();
}


void InterfacciaAmministratore::on_disdiciPrenoButton_clicked()
{
    DisdiciDialog* w = new DisdiciDialog();
    w->exec();
}


void InterfacciaAmministratore::on_stampaPrenotaButton_clicked()
{
    ui->textBrowser->clear();
    QString qs = "";
    map<int,Struttura*>::iterator it = DirezioneSanitaria::listaStrutture.begin();
    if(it==DirezioneSanitaria::listaStrutture.end())
        ui->textBrowser->insertPlainText("Lista vuota");
    else{
        ui->textBrowser->insertPlainText("--------------Prestazioni Disponibili------------\n");
        while(it != DirezioneSanitaria::listaStrutture.end()){
            map<int,Prestazione*>::iterator it2 = it->second->getListaPrestazioniDisponibili().begin();
            while(it2 != it->second->getListaPrestazioniDisponibili().end()){
                qs = "";

                QString numPres = QString::fromStdString(to_string(it2->first));
                QString oraIn = QString::fromStdString(to_string(it2->second->getOraInizio()));
                QString oraFin = QString::fromStdString(to_string(it2->second->getOraFine()));
                QString branca = QString::fromStdString(it2->second->getBranca());

                qs = "prestazione numero: " + numPres
                                + " - branca: " +  branca
                                + " - orario " + oraIn + "-" + oraFin + "\n";

                ui->textBrowser->insertPlainText(qs);
                it2++;
            }
            it++;
        }

    }
}


void InterfacciaAmministratore::on_inserisciUtenteButton_clicked()
{

}


void InterfacciaAmministratore::on_modificaUtenteButton_clicked()
{

}


void InterfacciaAmministratore::on_rimuoviUtenteButton_clicked()
{

}


void InterfacciaAmministratore::on_stampaUtenteButton_clicked()
{
    ui->textBrowser->clear();
    QString qs;
    map<int,Utente*>::iterator it = Data::asl1->listaUtenti.begin();
    if(it == Data::asl1->listaUtenti.end()) {
        ui->textBrowser->insertPlainText("non ci sono utenti.");
    }else{
        while(it!=Data::asl1->listaUtenti.end()){
            qs = "";
            qs = QString::fromStdString(it->second->getNome())+"\n";
            ui->textBrowser->insertPlainText(qs);
            it++;
        }

    }

}


void InterfacciaAmministratore::on_aggiungiMedicoButton_clicked()
{

}


void InterfacciaAmministratore::on_modificaMedicoButton_clicked()
{

}


void InterfacciaAmministratore::on_rimuoviMedicoButton_clicked()
{

}


void InterfacciaAmministratore::on_stampaListaMedici_clicked()
{

}


void InterfacciaAmministratore::on_actionStampa_Struttura_triggered()
{
    ui->textBrowser->clear();
    string nome,id;
    map<int,Struttura*>::iterator it = DirezioneSanitaria::listaStrutture.begin();
    if(it==DirezioneSanitaria::listaStrutture.end())
        ui->textBrowser->insertPlainText("Lista vuota");
    else{
        while(it != DirezioneSanitaria::listaStrutture.end()){
            nome = it->second->getNomeStruttura();
            id = to_string(it->first);
            QString s = "Id Struttura: " + QString::fromStdString(id)
                    + " - Nome: " + QString::fromStdString(nome)
                    + " - Coordinate: " + QString::fromStdString(it->second->getCoordinate())
                    + "\n";
            ui->textBrowser->insertPlainText(s);
            count++;
            it++;
        }
    }
}


void InterfacciaAmministratore::on_actionRimuovi_Struttura_triggered()
{
    rimuoviStrutturaDialog* w = new rimuoviStrutturaDialog();
    w->exec();
}


void InterfacciaAmministratore::on_actionModifica_Struttura_triggered()
{
    ModificaLaStrutturaDialog* w = new ModificaLaStrutturaDialog();
    w->exec();
}


void InterfacciaAmministratore::on_actionPrenota_triggered()
{
    aggiungiPrenotazioneDialog* w = new aggiungiPrenotazioneDialog();
    w->exec();
}


void InterfacciaAmministratore::on_actionDisdici_triggered()
{
    DisdiciDialog* w = new DisdiciDialog();
    w->exec();
}

