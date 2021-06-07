#include "disdicidialog.h"
#include "ui_disdicidialog.h"
#include <iostream>
#include "Data.h"
#include "QMessageBox"

using namespace std;

DisdiciDialog::DisdiciDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DisdiciDialog)
{
    this->numeroPrenotazione = -1;
    ui->setupUi(this);
}

DisdiciDialog::~DisdiciDialog()
{
    delete ui;
}

void DisdiciDialog::on_numeroPrenotazione_valueChanged(double arg1)
{
    this->numeroPrenotazione = (float)arg1;
    cout << arg1 << endl;
}


void DisdiciDialog::on_annulla_clicked()
{
    this->reject();
}


void DisdiciDialog::on_disdici_clicked()
{
    cout << "sono qui1" << endl;
    if(Data::asl1->disdiciPrestazione(this->numeroPrenotazione)){
        QString qs = QString::fromStdString(to_string(this->numeroPrenotazione));
        QMessageBox qmb;
        qmb.setText("Prenotazione disdetta "+ qs +" con successo");
        qmb.exec();
        this->accept();
    }
    else{
        cout << "sono qui2" << endl;
        QMessageBox qmb;
        qmb.setText("Impossibile disdire");
        qmb.exec();
    }
}

