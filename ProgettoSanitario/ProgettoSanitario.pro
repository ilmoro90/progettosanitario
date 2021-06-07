QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Data.cpp \
    InterfacciaAmministratore.cpp \
    aggiungiprenotazionedialog.cpp \
    disdicidialog.cpp \
    main.cpp \
    mainwindow.cpp \
    AmministrativoCup.cpp \
    Cittadino.cpp \
    Coordinate.cpp \
    DipendenteStruttura.cpp \
    DirezioneSanitaria.cpp \
    Esame.cpp \
    Medico.cpp \
    Prenotazione.cpp \
    Prestazione.cpp \
    Strumento.cpp \
    Struttura.cpp \
    Utente.cpp \
    Visita.cpp \
    modificalastrutturadialog.cpp \
    rimuovistrutturadialog.cpp \
    strutturadialog.cpp


HEADERS += \
    Data.h \
    InterfacciaAmministratore.h \
    aggiungiprenotazionedialog.h \
    disdicidialog.h \
    mainwindow.h \
    mainwindow.h \
    AmministrativoCup.h \
    Cittadino.h \
    Coordinate.h \
    DipendenteStruttura.h \
    DirezioneSanitaria.h \
    Esame.h \
    Medico.h \
    Prenotazione.h \
    Prestazione.h \
    Strumento.h \
    Struttura.h \
    Utente.h \
    Visita.h \
    modificalastrutturadialog.h \
    rimuovistrutturadialog.h \
    strutturadialog.h

FORMS += \
    InterfacciaAmministratore.ui \
    aggiungiprenotazionedialog.ui \
    disdicidialog.ui \
    mainwindow.ui \
    modificalastrutturadialog.ui \
    rimuovistrutturadialog.ui \
    strutturadialog.ui

TRANSLATIONS += \
    ProgettoSanitario_it_IT.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
