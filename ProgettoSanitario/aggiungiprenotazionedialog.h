#ifndef AGGIUNGIPRENOTAZIONEDIALOG_H
#define AGGIUNGIPRENOTAZIONEDIALOG_H

#include <QDialog>
#include <iostream>
using namespace std;

namespace Ui {
class aggiungiPrenotazioneDialog;
}

class aggiungiPrenotazioneDialog : public QDialog
{
    Q_OBJECT

public:
    explicit aggiungiPrenotazioneDialog(QWidget *parent = nullptr);
    ~aggiungiPrenotazioneDialog();

private slots:
    void on_nomeUtente_textChanged(const QString &arg1);

    void on_radioButtonEsame_clicked();

    void on_radioButtonVisita_clicked();


    void on_spinBoxOrario_valueChanged(int arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_pushButtonCerca_clicked();

    void on_pushButtonPrenota_clicked();

    void on_pushButton_2_clicked(); //annulla

private:
    string nome;
    string tipologia;
    string nomePrestazione;
    int ora;
    Ui::aggiungiPrenotazioneDialog *ui;
};

#endif // AGGIUNGIPRENOTAZIONEDIALOG_H
