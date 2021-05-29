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

private:
    Ui::strutturaDialog *ui;
};

#endif // STRUTTURADIALOG_H
