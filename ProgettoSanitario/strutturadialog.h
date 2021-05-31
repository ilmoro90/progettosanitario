#ifndef STRUTTURADIALOG_H
#define STRUTTURADIALOG_H

#include <QDialog>

namespace Ui {
class strutturaDialog;
}

class strutturaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit strutturaDialog(QWidget *parent = nullptr);
    ~strutturaDialog();

private slots:

    void on_lineEditNomeStruttura_textChanged(const QString &arg1);

    void on_spinBoxGradi_valueChanged(int arg1);

    void on_spinBoxMinuti_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_pushButtonInserisci_clicked();

    void on_pushButtonAnnulla_clicked();

private:
    QString nomeStrutt;
    int gradi,minuti,secondi;
    Ui::strutturaDialog *ui;
};

#endif // STRUTTURADIALOG_H
