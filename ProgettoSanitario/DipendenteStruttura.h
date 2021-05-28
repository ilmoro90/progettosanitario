/*
 * DipendenteStruttura.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef DIPENDENTESTRUTTURA_H_
#define DIPENDENTESTRUTTURA_H_

#include "Utente.h"

class DipendenteStruttura: public Utente {
public:
	DipendenteStruttura(string nome);
	virtual ~DipendenteStruttura();
};

#endif /* DIPENDENTESTRUTTURA_H_ */
