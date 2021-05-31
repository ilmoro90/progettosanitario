#include "aggiungiprenotazionedialog.h"
#include "ui_aggiungiprenotazionedialog.h"

aggiungiPrenotazioneDialog::aggiungiPrenotazioneDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aggiungiPrenotazioneDialog)
{
    ui->setupUi(this);
}

aggiungiPrenotazioneDialog::~aggiungiPrenotazioneDialog()
{
    delete ui;
}
