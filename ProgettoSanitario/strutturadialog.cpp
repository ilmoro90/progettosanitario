#include "strutturadialog.h"
#include "ui_strutturadialog.h"
#include <iostream>
#include "Data.h"
#include "Coordinate.h"
#include "Struttura.h"
#include <QMessageBox>
using namespace std;
strutturaDialog::strutturaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::strutturaDialog)
{
    ui->setupUi(this);
}

strutturaDialog::~strutturaDialog()
{
    delete ui;
}

void strutturaDialog::on_lineEditNomeStruttura_textChanged(const QString &arg1)
{
    this->nomeStrutt = arg1;
    cout << "Nome Struttura: " << nomeStrutt.toStdString() << endl;
}




void strutturaDialog::on_spinBoxGradi_valueChanged(int arg1)
{
    this->gradi=arg1;
}


void strutturaDialog::on_spinBoxMinuti_valueChanged(int arg1)
{
    this->minuti=arg1;
}


void strutturaDialog::on_spinBox_3_valueChanged(int arg1)
{
    this->secondi=arg1;
}


void strutturaDialog::on_pushButtonInserisci_clicked()
{
    Coordinate* coo = new Coordinate();
    coo->setGradi(this->gradi);
    coo->setMinuti(this->minuti);
    coo->setSecondi(this->secondi);
    Struttura* strutt = new Struttura(coo, this->nomeStrutt.toStdString());
    Data::asl1->aggiungiStruttura(strutt);
    cout << "Struttura aggiunta" << endl;
    Data::asl1->stampaListaStrutture();
    QMessageBox qmb;
    qmb.setText("Struttura inserita con successo");
    qmb.exec();
    this->accept();

}


void strutturaDialog::on_pushButtonAnnulla_clicked()
{
    this->reject();
}

