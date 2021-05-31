#ifndef RIMUOVISTRUTTURADIALOG_H
#define RIMUOVISTRUTTURADIALOG_H

#include <QDialog>

namespace Ui {
class rimuoviStrutturaDialog;
}

class rimuoviStrutturaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit rimuoviStrutturaDialog(QWidget *parent = nullptr);
    ~rimuoviStrutturaDialog();

private slots:
    void on_spinBoxId_valueChanged(int arg1);

    void on_pushButtonConferma_clicked();

    void on_pushButton_clicked();

private:
    int id;
    Ui::rimuoviStrutturaDialog *ui;
};

#endif // RIMUOVISTRUTTURADIALOG_H
