/*
 * Visita.cpp
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#include "Visita.h"
#include "Medico.h"

Visita::Visita(string nome, string branca, float costo,Medico* medico)
	:Prestazione(nome,branca,costo){
	this->medico=medico;
}
/*
Visita::Visita(string nome, string branca, float costo,Medico* medico)
	:Prestazione(nome,branca,costo,medico){

}
*/
Visita::~Visita() {
	// TODO Auto-generated destructor stub
}

