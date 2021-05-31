#include "modificalastrutturadialog.h"
#include "ui_modificalastrutturadialog.h"
#include "Struttura.h"
#include "DirezioneSanitaria.h"
#include "Data.h"
#include <QMessageBox>
ModificaLaStrutturaDialog::ModificaLaStrutturaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ModificaLaStrutturaDialog)
{
    ui->setupUi(this);

    ui->textBrowserLista->clear();
    string nome,id;
    map<int,Struttura*>::iterator it = DirezioneSanitaria::listaStrutture.begin();
    if(it==DirezioneSanitaria::listaStrutture.end())
        ui->textBrowserLista->insertPlainText("Lista vuota");
    else{
        while(it != DirezioneSanitaria::listaStrutture.end()){
            nome = it->second->getNomeStruttura();
            id = to_string(it->first);
            QString s = "Id struttura: " + QString::fromStdString(id)
                    + " - Nome: " + QString::fromStdString(nome)
                    + " - Coordinate: " + QString::fromStdString(it->second->getCoordinate())
                    + "\n";
            ui->textBrowserLista->insertPlainText(s);
            it++;
        }
    }

}

ModificaLaStrutturaDialog::~ModificaLaStrutturaDialog()
{
    delete ui;
}

void ModificaLaStrutturaDialog::on_spinBoxId_valueChanged(int arg1)
{
    this->id=arg1;
}


void ModificaLaStrutturaDialog::on_lineEdit_textChanged(const QString &arg1)
{
    this->nuovoNome=arg1.toStdString();
}



void ModificaLaStrutturaDialog::on_pushButtonConferma_clicked()
{
    auto stru = Data::asl1->getListaStrutture().find(this->id);
    stru->second->setNomeStruttura(nuovoNome);
    QMessageBox qmb;
    qmb.setText("Nome modificato con successo!");
    qmb.exec();
    this->accept();
}


void ModificaLaStrutturaDialog::on_pushButtonAnnulla_clicked()
{
    this->reject();
}

