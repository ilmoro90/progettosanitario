/*
 * Medico.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef MEDICO_H_
#define MEDICO_H_

#include "DipendenteStruttura.h"
#include "Prestazione.h"
#include <iostream>
#include <map>
using namespace std;


class Medico: public DipendenteStruttura {
private:
	string nome;
	int matricola;
	int oraInizio,oraFine;
	string specializzazione;
	//map<int,Prestazione*> storicoPrestazioniEffettuate;

public:
	Medico();
	Medico(string nome,string specializzazione);
	virtual ~Medico();
	bool setOrarioLavoro(int oraInizio, int oraFine);

	int getMatricola() const {
		return matricola;
	}

	void setMatricola(int matricola) {
		this->matricola = matricola;
	}
	void calcolaTurno();

	int getOraFine() const {
		return oraFine;
	}

	void setOraFine(int oraFine) {
		this->oraFine = oraFine;
	}

	int getOraInizio() const {
		return oraInizio;
	}

	void setOraInizio(int oraInizio) {
		this->oraInizio = oraInizio;
	}

	string getSpecializzazione(){
		return specializzazione;
	}

	void setSpecializzazione(string specializzazione) {
		this->specializzazione = specializzazione;
	}
};

#endif /* MEDICO_H_ */
