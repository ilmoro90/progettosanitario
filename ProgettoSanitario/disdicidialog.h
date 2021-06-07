#ifndef DISDICIDIALOG_H
#define DISDICIDIALOG_H

#include <QDialog>

namespace Ui {
class DisdiciDialog;
}

class DisdiciDialog : public QDialog
{
    Q_OBJECT

public:
    explicit DisdiciDialog(QWidget *parent = nullptr);
    ~DisdiciDialog();

private slots:
    void on_numeroPrenotazione_valueChanged(double arg1);

    void on_annulla_clicked();

    void on_disdici_clicked();

private:
    float numeroPrenotazione;
    Ui::DisdiciDialog *ui;
};

#endif // DISDICIDIALOG_H
