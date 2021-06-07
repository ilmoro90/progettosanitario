/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QPushButton *accediButton;
    QTextEdit *campoNomeUtente;
    QSpacerItem *horizontalSpacer_2;
    QTextEdit *campoPasswordUtente;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_3;
    QLabel *messaggio;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(300, 500);
        MainWindow->setMinimumSize(QSize(300, 500));
        MainWindow->setMaximumSize(QSize(300, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer_2 = new QSpacerItem(20, 157, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 0, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 156, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 6, 2, 1, 1);

        accediButton = new QPushButton(centralwidget);
        accediButton->setObjectName(QString::fromUtf8("accediButton"));
        accediButton->setEnabled(true);
        accediButton->setCheckable(false);

        gridLayout->addWidget(accediButton, 4, 2, 1, 1);

        campoNomeUtente = new QTextEdit(centralwidget);
        campoNomeUtente->setObjectName(QString::fromUtf8("campoNomeUtente"));
        campoNomeUtente->setMaximumSize(QSize(200, 25));
        campoNomeUtente->setTabChangesFocus(true);
        campoNomeUtente->setUndoRedoEnabled(false);
        campoNomeUtente->setAcceptRichText(false);

        gridLayout->addWidget(campoNomeUtente, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 3, 1, 1);

        campoPasswordUtente = new QTextEdit(centralwidget);
        campoPasswordUtente->setObjectName(QString::fromUtf8("campoPasswordUtente"));
        campoPasswordUtente->setMaximumSize(QSize(200, 25));
        campoPasswordUtente->setTabChangesFocus(true);

        gridLayout->addWidget(campoPasswordUtente, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(12, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 3, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 1, 1, 2);

        messaggio = new QLabel(centralwidget);
        messaggio->setObjectName(QString::fromUtf8("messaggio"));

        gridLayout->addWidget(messaggio, 5, 2, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 300, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(campoNomeUtente, campoPasswordUtente);
        QWidget::setTabOrder(campoPasswordUtente, accediButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Log In", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Nome Utente", nullptr));
        accediButton->setText(QCoreApplication::translate("MainWindow", "Accedi", nullptr));
#if QT_CONFIG(shortcut)
        accediButton->setShortcut(QCoreApplication::translate("MainWindow", "Return", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(tooltip)
        campoNomeUtente->setToolTip(QCoreApplication::translate("MainWindow", "inserisci nome utente", nullptr));
#endif // QT_CONFIG(tooltip)
        campoNomeUtente->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nome Utente", nullptr));
#if QT_CONFIG(tooltip)
        campoPasswordUtente->setToolTip(QCoreApplication::translate("MainWindow", "inserisci password", nullptr));
#endif // QT_CONFIG(tooltip)
        campoPasswordUtente->setPlaceholderText(QCoreApplication::translate("MainWindow", "password", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt;\">ASL Roma 1 - log in</span></p></body></html>", nullptr));
        messaggio->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
