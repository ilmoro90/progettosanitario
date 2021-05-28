/*
 * Visita.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef VISITA_H_
#define VISITA_H_

#include "Prestazione.h"
#include "Medico.h"

class Visita: public Prestazione {
private:
	Medico* medico;
	string tipo = "visita";
public:
	Visita( string nome, string branca, float costo, Medico* medico);
	virtual ~Visita();
	string getTipo(){
		return this->tipo;
	}
};

#endif /* VISITA_H_ */
