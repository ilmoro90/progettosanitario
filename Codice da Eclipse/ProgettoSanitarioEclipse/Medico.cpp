/*
 * Medico.cpp
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#include "Medico.h"
Medico::Medico()
:DipendenteStruttura(nome){
	this->matricola=-1;
	this->oraInizio=-1;
	this->oraFine=-1;
}
Medico::Medico(string nome, string specializzazione)
:DipendenteStruttura(nome){
	this->matricola=0;
	this->oraInizio=-1;
	this->oraFine=-1;
	this->specializzazione=specializzazione;
}

Medico::~Medico() {
	// TODO Auto-generated destructor stub
}

bool Medico::setOrarioLavoro(int oraInizio, int oraFine) {
	this->oraInizio=oraInizio;
	this->oraFine=oraFine;
	return true;
}

void Medico::calcolaTurno(){

}

