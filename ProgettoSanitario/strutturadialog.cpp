#include "strutturadialog.h"
#include "ui_strutturadialog.h"

strutturaDialog::strutturaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::strutturaDialog)
{
    ui->setupUi(this);
}

strutturaDialog::~strutturaDialog()
{
    delete ui;
}
