#ifndef MODIFICALASTRUTTURADIALOG_H
#define MODIFICALASTRUTTURADIALOG_H
#include<iostream>
#include <QDialog>
using namespace std;

namespace Ui {
class ModificaLaStrutturaDialog;
}

class ModificaLaStrutturaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ModificaLaStrutturaDialog(QWidget *parent = nullptr);
    ~ModificaLaStrutturaDialog();

private slots:
    void on_spinBoxId_valueChanged(int arg1);

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButtonConferma_clicked();

    void on_pushButtonAnnulla_clicked();

private:
    int id;
    string nuovoNome;
    Ui::ModificaLaStrutturaDialog *ui;
};

#endif // MODIFICALASTRUTTURADIALOG_H
