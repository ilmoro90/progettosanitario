/*
 * Cittadino.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef CITTADINO_H_
#define CITTADINO_H_

#include "Utente.h"

class Cittadino: public Utente {
public:
	Cittadino(string nome);
	virtual ~Cittadino();
};

#endif /* CITTADINO_H_ */
