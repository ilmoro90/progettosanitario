#include "strutturadialog.h"
#include "ui_strutturadialog.h"

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

void strutturaDialog::on_lineNomeStruttura_textChanged(const QString &arg1)
{
    this->aux = arg1;
}



void strutturaDialog::on_gradiSpinBox_valueChanged(int arg1)
{
    this->gradi=arg1;
}


void strutturaDialog::on_minutiSpinBox_valueChanged(int arg1)
{
    this->minuti=arg1;
}


void strutturaDialog::on_secondiSpinBox_valueChanged(int arg1)
{
    this->secondi=arg1;
}




void strutturaDialog::on_pushButton_inserisci_clicked()
{

}

