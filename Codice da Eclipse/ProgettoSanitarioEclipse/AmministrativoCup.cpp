/*
 * AmministrativoCup.cpp
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#include "AmministrativoCup.h"

AmministrativoCup::AmministrativoCup(string nome, string utente, string password)
	:DipendenteStruttura(nome){
	this->utente=utente;
	this->password=password;

}

AmministrativoCup::~AmministrativoCup() {
	// TODO Auto-generated destructor stub
}

