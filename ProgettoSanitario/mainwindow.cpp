#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "DirezioneSanitaria.h"
#include "InterfacciaAmministratore.h"
#include "Data.h"
#include "Utente.h"
using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_accediButton_clicked()
{

    string utente = ui->campoNomeUtente->toPlainText().toStdString();
    bool b = utente == Data::asl1->getAmministratoreSistema()->getUtente();
    string password = ui->campoPasswordUtente->toPlainText().toStdString();
    bool p = password==Data::asl1->getAmministratoreSistema()->getPassword();
    bool possonoEntraretutti = false;
    if(possonoEntraretutti){
        InterfacciaAmministratore* interfaccia = new InterfacciaAmministratore();
        interfaccia->show();
        this->close();
    }

    if(b and p){
        cout << "utente e password corretti" << endl;
        InterfacciaAmministratore* interfaccia = new InterfacciaAmministratore();
        interfaccia->show();
        this->close();
    }
    else{
        cout << "utente o password errati" << endl;
    }

}

