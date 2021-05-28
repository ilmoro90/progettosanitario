/*
 * Esame.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef ESAME_H_
#define ESAME_H_

#include "Prestazione.h"
#include "Strumento.h"
#include "Medico.h"

class Esame: public Prestazione {
private:
	Strumento* strumento;
	Medico* medico;
	string tipo = "esame";
public:
	Esame(Strumento* strumento, string nome, string branca, float costo, Medico* medico);
	//Esame(Medico* medico, Strumento* strumento, string nome, string branca, float costo);
	virtual ~Esame();

	Strumento* getStrumento(){
		return this->strumento;
	}
	void setStrumento(Strumento* strumento){
		this->strumento=strumento;
	}
	string getTipo(){
		return this->tipo;
	}
};

#endif /* ESAME_H_ */
