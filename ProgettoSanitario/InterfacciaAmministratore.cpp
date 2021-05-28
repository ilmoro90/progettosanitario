#include "InterfacciaAmministratore.h"
#include "ui_InterfacciaAmministratore.h"
#include "strutturadialog.h"
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

