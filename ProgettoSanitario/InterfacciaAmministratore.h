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

private:
    Ui::InterfacciaAmministratore *ui;
};

#endif // INTERFACCIAAMMINISTRATORE_H
