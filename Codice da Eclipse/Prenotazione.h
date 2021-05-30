/*
 * Prenotazione.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */
#include "Prestazione.h"
#include "Utente.h"
#ifndef PRENOTAZIONE_H_
#define PRENOTAZIONE_H_

class Prenotazione {
private:
	float costo;
	string branca;
	Utente* utente;
	int ora;
	Medico* medico;
	Prestazione* prestazione;
public:
	Prenotazione(Utente* utente, int ora, Prestazione* prestazione);
	//Prenotazione(Utente* utente, string branca, int ora, float costo);
	virtual ~Prenotazione();
	string getBranca() {
		return branca;
	}

	void setBranca(const string &branca) {
		this->branca = branca;
	}

	float getCosto() const {
		return costo;
	}

	void setCosto(float costo) {
		this->costo = costo;
	}

	int getOra() const {
		return ora;
	}

	void setOra(int ora) {
		this->ora = ora;
	}

	Utente* getUtente() {
		return utente;
	}

	void setUtente(Utente* utente) {
		this->utente = utente;
	}

	void setMedico(Medico* medico){
		this->medico=medico;
	}

	Medico* getMedico(){
		return this->medico;
	}

	Prestazione* getPrestazione(){
		return this->prestazione;
	}
	void setPrestazione(Prestazione* prestazione){
		this->prestazione = prestazione;
	}
};

#endif /* PRENOTAZIONE_H_ */
