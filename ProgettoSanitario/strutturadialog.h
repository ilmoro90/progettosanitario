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
    void on_lineNomeStruttura_textChanged(const QString &arg1);
    QString aux;
    int gradi,minuti,secondi;

    void on_gradiSpinBox_valueChanged(int arg1);

    void on_minutiSpinBox_valueChanged(int arg1);

    void on_secondiSpinBox_valueChanged(int arg1);

    void on_pushButton_inserisci_clicked();

private:
    Ui::strutturaDialog *ui;
};

#endif // STRUTTURADIALOG_H
