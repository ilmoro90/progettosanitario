#include "aggiungiprenotazionedialog.h"
#include "ui_aggiungiprenotazionedialog.h"
#include "Data.h"
#include <math.h>
#include "DirezioneSanitaria.h"
#include <QMessageBox>

aggiungiPrenotazioneDialog::aggiungiPrenotazioneDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aggiungiPrenotazioneDialog)
{
    Data::asl1->rilevaPrestazioniDisponibiliDalleStrutture();
    ui->setupUi(this);
}

aggiungiPrenotazioneDialog::~aggiungiPrenotazioneDialog()
{
    delete ui;
}




void aggiungiPrenotazioneDialog::on_nomeUtente_textChanged(const QString &arg1)
{
    this->nome=arg1.toStdString();
}


void aggiungiPrenotazioneDialog::on_radioButtonEsame_clicked()
{
    this->tipologia="esame";
}


void aggiungiPrenotazioneDialog::on_radioButtonVisita_clicked()
{
    this->tipologia="visita";
}

void aggiungiPrenotazioneDialog::on_spinBoxOrario_valueChanged(int arg1)
{
    this->ora=arg1;
}


void aggiungiPrenotazioneDialog::on_lineEdit_2_textChanged(const QString &arg1)
{
    this->nomePrestazione=arg1.toStdString();
}

void aggiungiPrenotazioneDialog::on_pushButtonCerca_clicked()
{
    ui->textBrowser->clear();
    if(this->tipologia != ""){
        Data::asl1->rilevaPrestazioniDisponibiliDalleStrutture();
        map<float,Prestazione*>::iterator it = Data::asl1->listaPrestazioniDisponibili.begin();
        if(it == Data::asl1->listaPrestazioniDisponibili.end()){
            ui->textBrowser->setText("Nessuna prestazione disponibile");
        }
        while(it != Data::asl1->listaPrestazioniDisponibili.end()){
            string aux = "";
            if(it->second->getTipo()==this->tipologia){
                float id = it->first;
                float costo = roundf(it->second->getCosto()*100)/100;
                aux =  "Prestazione numero: " + to_string(id)
                        + " - Branca: " + (it->second)->getBranca()
                        + " - orario: " + to_string(it->second->getOraInizio()) + "-" + to_string(it->second->getOraFine())
                        + " - Tipo: " + it->second->getTipo()
                        + " - Nome: " + it->second->getNome()
                        + " - Costo: " + to_string((int)costo) +"\n";

            }
            ui->textBrowser->insertPlainText(QString::fromStdString(aux));
            it++;
        }
    }
    else {
        ui->textBrowser->setText("Spunta il flag Visita o Esame");
    }

}


void aggiungiPrenotazioneDialog::on_pushButtonPrenota_clicked()
{
    Utente* utenteAux = Data::asl1->trovaUtente(this->nome);

    if(this->nome == ""){
        QMessageBox qmb;
        qmb.setText("Non hai inserito il nome!");
        qmb.exec();
    }
    else if (this->nome == utenteAux->getNome()){
        float numeroPrenotazione = Data::asl1->prenotaPrestazione(utenteAux, this->nomePrestazione, this->ora);
            if(numeroPrenotazione < 0){
                QMessageBox qmb;
                qmb.setText("ERRORE: Non è stato possibile prenotare");
                qmb.exec();
            }
            else if(numeroPrenotazione==0){
                QMessageBox qmb;
                qmb.setText("ERRORE: Hai già prenotato");
                qmb.exec();
            }
            else{
                QMessageBox qmb;
                QString qs = QString::fromStdString(to_string(numeroPrenotazione));
                qmb.setText("Prenotazione andata a buon fine!\nId: "+qs);
                qmb.exec();
                this->accept();
            }
    }
    else{
        QMessageBox qmb;
        qmb.setText("Utente non presente in asl1");
        qmb.exec();
    }


}

//annulla
void aggiungiPrenotazioneDialog::on_pushButton_2_clicked()
{
    cout << "prova bottone" << endl;
    this->reject();
}

