/*
 * DirezioneSanitaria.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef DIREZIONESANITARIA_H_
#define DIREZIONESANITARIA_H_

#include <iostream>
#include <map>
#include "Utente.h"
#include "Struttura.h"
using namespace std;

class DirezioneSanitaria {
private:
	string direttore,localita,nome;
	map<int, Utente*> listaUtenti;
	map<int, Struttura*> listaStrutture;
	map<float, Prestazione*> listaPrestazioniDisponibili;
	int counterUtenti = 1;
	int counterStruttura = 1;
public:
	DirezioneSanitaria(string nome, string direttore, string localita);
	bool aggiungiUtente(Utente* utente);
	bool rimuoviUtente(int numeroUtente);
	bool aggiungiStruttura(Struttura* struttura);
	bool rimuoviStruttura(int numeroStruttura);
	float prenotaPrestazione(Utente* utente, string nomeVisita,int ora);
	bool disdiciPrestazione(float numeroPrenotazione);
	Utente* trovaUtente(string nome);
	void stampaListaStrutture();
	void stampaListaUtenti();
	void rilevaPrestazioniDisponibiliDalleStrutture();
	void stampaListaPrestazioniDisponibili();
	void stampaListaPrestazioniDisponibili(string tipo);
	virtual ~DirezioneSanitaria();

	const string& getDirettore() const {
		return direttore;
	}

	void setDirettore(const string &direttore) {
		this->direttore = direttore;
	}

	const map<int, Struttura*>& getListaStrutture() const {
		return listaStrutture;
	}

	void setListaStrutture(const map<int, Struttura*> &listaStrutture) {
		this->listaStrutture = listaStrutture;
	}

	const map<int, Utente*>& getListaUtenti() const {
		return listaUtenti;
	}

	void setListaUtenti(const map<int, Utente*> &listaUtenti) {
		this->listaUtenti = listaUtenti;
	}

	const string& getLocalita() const {
		return localita;
	}

	void setLocalita(const string &localita) {
		this->localita = localita;
	}
	string getNome() {
		return this->nome;
	}
};

#endif /* DIREZIONESANITARIA_H_ */
