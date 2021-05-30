/*
 * Prestazione.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */
#include <iostream>
#include "Medico.h"
using namespace std;

#ifndef PRESTAZIONE_H_
#define PRESTAZIONE_H_

class Prestazione {
private:
	float costo;
	string nome;
	string branca;
	int oraInizio;
	int oraFine;
public:
	Prestazione();
	Prestazione(string nome,string branca,float costo);
	//Prestazione(string nome, string branca, float costo, Medico* medico);
	virtual ~Prestazione();
	virtual string getTipo(){};
	float getCosto(){
		return this->costo;
	}

	bool setCosto(float nuovoCosto){
		this->costo=nuovoCosto;
		return 1;
	}
	const string getNome() const {
		return this->nome;
	}

	void setNome(const string &nome) {
		this->nome = nome;
	}

	virtual string getBranca(){
		return branca;
	}

	void setBranca(string branca) {
		this->branca = branca;
	}

	int getOraFine(){
		return oraFine;
	}

	void setOraFine(int oraFine) {
		this->oraFine = oraFine;
	}

	int getOraInizio() {
		return oraInizio;
	}

	void setOraInizio(int oraInizio) {
		this->oraInizio = oraInizio;
	}
};

#endif /* PRESTAZIONE_H_ */
