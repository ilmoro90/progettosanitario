/*
 * Esame.cpp
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#include "Esame.h"
#include "Medico.h"
#include "Strumento.h"

Esame::Esame(Strumento* strumento, string nome, string branca, float costo, Medico* medico)
	:Prestazione(nome,branca,costo){
	this->strumento= strumento;
	this->medico=medico;
}
/*
Esame::Esame(Medico* medico, Strumento* strumento, string nome, string branca, float costo)
	:Prestazione(nome,branca,costo,medico){
	this->strumento= strumento;
}
*/
Esame::~Esame() {
	// TODO Auto-generated destructor stub
}

