/*
 * Struttura.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef STRUTTURA_H_
#define STRUTTURA_H_
#include "Prestazione.h"
#include "Prenotazione.h"
#include "Coordinate.h"
#include "Medico.h"
#include "Esame.h"
#include "Visita.h"
#include <map>

class Struttura {
private:
	Coordinate* coordinate;
	string nomeStruttura;
	map<int,Medico*> listaMediciStruttura;
	map<int,Prestazione*> listaPrestazioniDisponibili;
	map<int,Prestazione*> listaPrestazioniNonDisponibili;
	map<int,Prenotazione*> listaPrenotazioniEffettuate;
	map<int,Esame*> listaEsami;
	map<int,Visita*>listaVisite;
	int counter;	//per i numeri di matricola
	int counterPrestazioni = 0;
	int counterEsami = 0;
	int counterVisite = 0;
	void generaListaPrestazioni(Medico* m,Prestazione* p);
public:
	Struttura(Coordinate* coordinate, string nomeStruttura);
	virtual ~Struttura();
	void stampaMediciStruttura();
	bool aggiungiMedico(Medico* medico, int oraInizio, int oraFine,Prestazione* p);
	bool rimuoviMedico(int matricola);
	void stampaListaPrestazioniDisponibili();
	void stampaListaPrestazioniNonDisponibili();
	void stampaListaPrenotazioni();
	void stampaListaVisite();
	void stampaListaEsami();
	void filtraPrestazioniPerBranca(string branca);
	int prenotaPrestazione(Prenotazione* prenotazione);
	bool aggiungiEsame(Esame* e);
	bool aggiungiVisita(Visita* v);
	bool disdiciPrenotazione(int numeroPrenotazione);

	string getCoordinate() {
		string result = to_string(this->coordinate->getGradi())+ "\°" + to_string(this->coordinate->getMinuti())+ "\'" + to_string(this->coordinate->getSecondi()) + "\"";
		return result;
	}

	void setCoordinate(Coordinate* coordinate) {
		this->coordinate = coordinate;
	}

	const map<int, Medico*> getListaMediciStruttura(){
		return listaMediciStruttura;
	}

	void setListaMediciStruttura(
			const map<int, Medico*> &listaMediciStruttura) {
		this->listaMediciStruttura = listaMediciStruttura;
	}

	const string& getNomeStruttura() const {
		return nomeStruttura;
	}

	void setNomeStruttura(const string &nomeStruttura) {
		this->nomeStruttura = nomeStruttura;
		cout << "Nome della struttura modificato." << endl;
	}

	map<int, Esame*>getListaEsami() {
		return listaEsami;
	}

	void setListaEsami(const map<int, Esame*> &listaEsami) {
		this->listaEsami = listaEsami;
	}

	map<int, Prenotazione*> getListaPrenotazioniEffettuate() {
		return listaPrenotazioniEffettuate;
	}

	void setListaPrenotazioniEffettuate(
			const map<int, Prenotazione*> &listaPrenotazioniEffettuate) {
		this->listaPrenotazioniEffettuate = listaPrenotazioniEffettuate;
	}

	map<int, Prestazione*> getListaPrestazioniDisponibili() {
		return listaPrestazioniDisponibili;
	}

	void setListaPrestazioniDisponibili(
			const map<int, Prestazione*> &listaPrestazioniDisponibili) {
		this->listaPrestazioniDisponibili = listaPrestazioniDisponibili;
	}

	const map<int, Prestazione*>& getListaPrestazioniNonDisponibili() const {
		return listaPrestazioniNonDisponibili;
	}

	void setListaPrestazioniNonDisponibili(
			const map<int, Prestazione*> &listaPrestazioniNonDisponibili) {
		this->listaPrestazioniNonDisponibili = listaPrestazioniNonDisponibili;
	}

	map<int, Visita*> getListaVisite(){
		return listaVisite;
	}

	void setListaVisite(const map<int, Visita*> &listaVisite) {
		this->listaVisite = listaVisite;
	}
};

#endif /* STRUTTURA_H_ */
