/*
 * Utente.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */
#include<iostream>
using namespace std;

#ifndef UTENTE_H_
#define UTENTE_H_

class Utente {
private:
	string nome;
public:
	Utente();
	Utente(string nome);
	virtual ~Utente();

	const string& getNome() const {
		return nome;
	}

	void setNome(const string &nome) {
		this->nome = nome;
	}
};

#endif /* UTENTE_H_ */
