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

}


void InterfacciaAmministratore::on_stampaPrenotaButton_clicked()
{

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

