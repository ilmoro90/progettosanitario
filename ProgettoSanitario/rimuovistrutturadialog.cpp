#include "rimuovistrutturadialog.h"
#include "ui_rimuovistrutturadialog.h"
#include "DirezioneSanitaria.h"
#include "Data.h"
#include <QMessageBox>

rimuoviStrutturaDialog::rimuoviStrutturaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::rimuoviStrutturaDialog)
{
    ui->setupUi(this);
    ui->textBrowser->clear();
    string nome,id;
    map<int,Struttura*>::iterator it = DirezioneSanitaria::listaStrutture.begin();
    if(it==DirezioneSanitaria::listaStrutture.end())
        ui->textBrowser->insertPlainText("Lista vuota");
    else{
        while(it != DirezioneSanitaria::listaStrutture.end()){
            nome = it->second->getNomeStruttura();
            id = to_string(it->first);
            QString s = "Id struttura: " + QString::fromStdString(id)
                    + " - Nome: " + QString::fromStdString(nome)
                    + " - Coordinate: " + QString::fromStdString(it->second->getCoordinate())
                    + "\n";
            ui->textBrowser->insertPlainText(s);
            it++;
        }
    }
}

rimuoviStrutturaDialog::~rimuoviStrutturaDialog()
{
    delete ui;
}



void rimuoviStrutturaDialog::on_spinBoxId_valueChanged(int arg1)
{
    this->id=arg1;
}


void rimuoviStrutturaDialog::on_pushButtonConferma_clicked()
{
    Data::asl1->rimuoviStruttura(this->id);
    QMessageBox qmb;
    qmb.setText("Struttura rimossa.");
    qmb.exec();
    this->accept();
}


void rimuoviStrutturaDialog::on_pushButton_clicked()
{
    this->reject();
}

