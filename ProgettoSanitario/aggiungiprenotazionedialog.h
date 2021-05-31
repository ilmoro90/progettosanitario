#ifndef AGGIUNGIPRENOTAZIONEDIALOG_H
#define AGGIUNGIPRENOTAZIONEDIALOG_H

#include <QDialog>

namespace Ui {
class aggiungiPrenotazioneDialog;
}

class aggiungiPrenotazioneDialog : public QDialog
{
    Q_OBJECT

public:
    explicit aggiungiPrenotazioneDialog(QWidget *parent = nullptr);
    ~aggiungiPrenotazioneDialog();

private:
    Ui::aggiungiPrenotazioneDialog *ui;
};

#endif // AGGIUNGIPRENOTAZIONEDIALOG_H
