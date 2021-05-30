/*
 * Prenotazione.cpp
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#include "Prenotazione.h"
/*
Prenotazione::Prenotazione(Utente* utente, string branca,int ora, float costo) {
	this->utente = utente;
	this->branca = branca;
	this->costo = costo;
	this->ora = ora;
}
*/
Prenotazione::Prenotazione(Utente *utente, int ora, Prestazione *prestazione) {
	this->utente = utente;
	this->ora = ora;
	this->prestazione=prestazione;
}

Prenotazione::~Prenotazione() {
	// TODO Auto-generated destructor stub
}

