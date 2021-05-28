#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "DirezioneSanitaria.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{

    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    MainWindow(DirezioneSanitaria* direzione, QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_accediButton_clicked();

private:
    Ui::MainWindow *ui;
    DirezioneSanitaria* direzione;
};
#endif // MAINWINDOW_H
