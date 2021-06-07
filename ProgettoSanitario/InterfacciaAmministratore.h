#ifndef INTERFACCIAAMMINISTRATORE_H
#define INTERFACCIAAMMINISTRATORE_H

#include <QMainWindow>

namespace Ui {
class InterfacciaAmministratore;
}

class InterfacciaAmministratore : public QMainWindow
{
    Q_OBJECT

public:
    explicit InterfacciaAmministratore(QWidget *parent = nullptr);
    ~InterfacciaAmministratore();

private slots:
    void on_inseriscistrutturaButton_clicked();

    void on_actioninserisciStruttura_triggered();

    void on_stampaStruttureButton_clicked();

    void on_modificaStrutturaButton_clicked();

    void on_rimuoviStrutturaButton_clicked();

    void on_prenotaButton_clicked();

    void on_disdiciPrenoButton_clicked();

    void on_stampaPrenotaButton_clicked();

    void on_inserisciUtenteButton_clicked();

    void on_modificaUtenteButton_clicked();

    void on_rimuoviUtenteButton_clicked();

    void on_stampaUtenteButton_clicked();

    void on_aggiungiMedicoButton_clicked();

    void on_modificaMedicoButton_clicked();

    void on_rimuoviMedicoButton_clicked();

    void on_stampaListaMedici_clicked();

    void on_actionStampa_Struttura_triggered();

    void on_actionRimuovi_Struttura_triggered();

    void on_actionModifica_Struttura_triggered();

    void on_actionPrenota_triggered();

    void on_actionDisdici_triggered();

private:
    int count = 0;
    Ui::InterfacciaAmministratore *ui;
};

#endif // INTERFACCIAAMMINISTRATORE_H
