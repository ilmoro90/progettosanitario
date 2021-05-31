/*
 * Prestazione.cpp
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#include "Prestazione.h"
#include "Medico.h"

Prestazione::Prestazione(){
	this->costo=costo;
		this->nome="";
		this->branca="";
		this->oraFine=-1;
		this->oraInizio=-1;
}

Prestazione::Prestazione(string nome, string branca, float costo){
	this->costo=costo;
	this->nome=nome;
	this->branca=branca;
	this->oraFine=-1;
	this->oraInizio=-1;
}
/*
Prestazione::Prestazione(string nome, string branca, float costo, Medico* medico) {
	this->costo=costo;
	this->nome=nome;
	this->branca=branca;
	this->oraFine=-1;
	this->oraInizio=-1;
}
*/
Prestazione::~Prestazione() {
	// TODO Auto-generated destructor stub
}

