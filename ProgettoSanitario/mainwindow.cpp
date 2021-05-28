#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "DirezioneSanitaria.h"
#include "InterfacciaAmministratore.h"
using namespace std;

MainWindow::MainWindow(DirezioneSanitaria* direzione, QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->direzione = direzione;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_accediButton_clicked()
{
    string utente = ui->campoNomeUtente->toPlainText().toStdString();
    bool b = utente == direzione->getAmministratoreSistema()->getUtente();
    string password = ui->campoPasswordUtente->toPlainText().toStdString();
    bool p = password==direzione->getAmministratoreSistema()->getPassword();

    if(b and p){
        cout << "utente e password corretti" << endl;
        InterfacciaAmministratore* interfaccia = new InterfacciaAmministratore(direzione);
        interfaccia->show();
        this->close();
    }
    else{
        cout << "utente o password errati" << endl;
    }

}

