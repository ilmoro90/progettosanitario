/*
 * AmministrativoCup.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef AMMINISTRATIVOCUP_H_
#define AMMINISTRATIVOCUP_H_

#include "DipendenteStruttura.h"

class AmministrativoCup: public DipendenteStruttura {
private:
	string utente,password;
public:
	AmministrativoCup(string nome, string utente, string password);
	virtual ~AmministrativoCup();

	const string& getPassword() const {
		return password;
	}

	void setPassword(const string &password) {
		this->password = password;
	}

	const string& getUtente() const {
		return utente;
	}

	void setUtente(const string &utente) {
		this->utente = utente;
    }
};

#endif /* AMMINISTRATIVOCUP_H_ */
