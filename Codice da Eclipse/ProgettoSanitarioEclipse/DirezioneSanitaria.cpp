/*
 * DirezioneSanitaria.cpp
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#include "DirezioneSanitaria.h"
#include <map>
#include "Utente.h"
#include <math.h>

map<int,Prestazione*> merge(map<int,Prestazione*> primaMappa, map<int,Prestazione*> secondaMappa){
	map<int,Prestazione*> result;
	map<int,Prestazione*>::iterator it_prova = primaMappa.begin();
	while(it_prova != primaMappa.end()){
		result.insert(pair<int,Prestazione*>(it_prova->first,it_prova->second));
		it_prova++;
	}

	it_prova = secondaMappa.begin();
	while(it_prova != secondaMappa.end()){
		result.insert(pair<int,Prestazione*>(it_prova->first,it_prova->second));
		it_prova++;
	}
	return result;
}

bool giaPresente(map<int,Utente*> lista, Utente* utente){
	map<int,Utente*>::iterator it = lista.begin();
	if(it==lista.end())
		return false;
	while(it!=lista.end()){
		if(it->second->getNome() == utente->getNome())
			return true;
		it++;
	}
	return false;
}

bool giaPresente(map<int,Struttura*> lista, Struttura* struttura){
	map<int,Struttura*>::iterator it = lista.begin();
	if(it==lista.end())
		return false;
	while(it!=lista.end()){
		if(it->second->getNomeStruttura() == struttura->getNomeStruttura() and it->second->getCoordinate()==struttura->getCoordinate() )
			return true;
		it++;
	}
	return false;
}

DirezioneSanitaria::DirezioneSanitaria(string nome, string direttore, string localita) {
	this->direttore=direttore;
	this->localita=localita;
	this->nome=nome;
    counterStruttura = 1;
    counterUtenti = 1;
}

bool DirezioneSanitaria::aggiungiUtente(Utente* utente) {
	map<int,Utente*>::iterator it = listaUtenti.begin();
	if(it == listaUtenti.end()){
		listaUtenti.insert(pair<int,Utente*>(counterUtenti,utente));
		counterUtenti++;
		cout << "Utente " << utente->getNome() <<" aggiunto." << endl;
		return true;
	}
	if(giaPresente(listaUtenti, utente)){
		cout << "Utente già inserito." << endl;
		return false;
	}
	listaUtenti.insert(pair<int,Utente*>(counterUtenti,utente));
	counterUtenti++;
	cout << "Utente " << utente->getNome() <<" aggiunto." << endl;
	return true;
}

bool DirezioneSanitaria::rimuoviUtente(int numeroUtente) {
	auto it = listaUtenti.find(numeroUtente);
	if(it!=listaUtenti.end()) {
		listaUtenti.erase(numeroUtente);
		cout << "Utente " << numeroUtente << " rimosso con successo" << endl;
		return true;
	}
	cout << "Utente non presente in database" << endl;
	return false;
}

bool DirezioneSanitaria::aggiungiStruttura(Struttura* struttura) {
	map<int,Struttura*>::iterator it = listaStrutture.begin();
	if(it == listaStrutture.end()){
		listaStrutture.insert(pair<int,Struttura*>(counterStruttura,struttura));
		counterStruttura++;
		cout << "Struttura "<< struttura->getNomeStruttura() <<" aggiunta." << endl;
		return true;
	}
	if(giaPresente(listaStrutture, struttura)){
		cout << "Struttura "<< struttura->getNomeStruttura() << " già inserita." << endl;
		return false;
	}
	listaStrutture.insert(pair<int,Struttura*>(counterStruttura,struttura));
	counterStruttura++;
	cout << "Struttura "<< struttura->getNomeStruttura() <<" aggiunta." << endl;
	return true;
}

bool DirezioneSanitaria::rimuoviStruttura(int numeroStruttura) {
	auto it = listaStrutture.find(numeroStruttura);
	if(it!=listaStrutture.end()) {
		listaStrutture.erase(numeroStruttura);
		cout << "Struttura " << numeroStruttura << " rimossa con successo" << endl;
		return true;
	}
	cout << "Struttura non presente in database" << endl;
	return false;
}

void DirezioneSanitaria::stampaListaStrutture() {
	map<int,Struttura*>::iterator it = listaStrutture.begin();
	if(it == listaStrutture.end()){
		cout << "Non ci sono strutture." << endl;
		return;
	}
	cout << "\n------------Lista Strutture --("<< this->nome <<")-----------------------" << endl;
	while(it != listaStrutture.end()){
		cout << "Id struttura: " << it->first << " - "
				<< "Nome: " << (it->second)->getNomeStruttura()
				<< " Coordinate: " << it->second->getCoordinate()
				<< endl;
		it++;
	}
	cout << "-------------------------------------------------------------------\n" << endl;
	return;
}

void DirezioneSanitaria::stampaListaUtenti() {
	map<int,Utente*>::iterator it = listaUtenti.begin();
	if(it == listaUtenti.end()){
		cout << "Non ci sono utenti." << endl;
		return;
	}
	cout << "\n------------Lista Utenti --("<< this->nome <<")-----------------------" << endl;
	while(it != listaUtenti.end()){
		cout << "Id utente: " << it->first << " - "
				<< "Nome: " << (it->second)->getNome()
				<< endl;
		it++;
	}
	cout << "--------------------------------------------------------------\n" << endl;
	return;

}

DirezioneSanitaria::~DirezioneSanitaria() {
	// TODO Auto-generated destructor stub
}

void DirezioneSanitaria::rilevaPrestazioniDisponibiliDalleStrutture() {
	//svuoto la lista
	map<float,Prestazione*>::iterator _it = listaPrestazioniDisponibili.begin();
	while(_it != listaPrestazioniDisponibili.end()){
		listaPrestazioniDisponibili.erase(_it);
		_it++;
	}
	//itero sulle strutture e per ogni struttura inserisco le prestazioni nella lista della direzione sanitaria
	map<int,Struttura*>::iterator it_strutt = listaStrutture.begin();
	if(it_strutt == listaStrutture.end()){
		cout << "Mi dispiace, ancora non sono presenti strutture." << endl;
		return;
	}

	while(it_strutt != listaStrutture.end()){
		//prendo la lista esami della struttura
		map<int,Prestazione*> aux = it_strutt->second->getListaPrestazioniDisponibili();
		map<int,Prestazione*>::iterator it_prestDisp = aux.begin();
		while(it_prestDisp != aux.end()){
			//float f =  5+(5.34/100);
			//int intero = (int)f;
			//float d = (f-intero)*10000;
			float f = float(it_prestDisp->first) + float(it_strutt->first)/10000;
			listaPrestazioniDisponibili.insert(pair<float,Prestazione*>(f,it_prestDisp->second));
			it_prestDisp++;
		}
		it_strutt++;
	}

}

void DirezioneSanitaria::stampaListaPrestazioniDisponibili() {
	rilevaPrestazioniDisponibiliDalleStrutture();
	map<float,Prestazione*>::iterator it = listaPrestazioniDisponibili.begin();
	if(it == listaPrestazioniDisponibili.end()){
		cout << "Non ci sono prestazioni disponibili." << endl;
		return;
	}
	cout << "\n------------Lista Prestazioni disponibili --("<< this->nome <<")-----------------------" << endl;
	while(it != listaPrestazioniDisponibili.end()){
		cout << "Prestazione numero: " << it->first
				<< " - Branca: " << (it->second)->getBranca()
				<< " - orario: " << it->second->getOraInizio() << "-" << it->second->getOraFine()
				<< " - Tipologia: " << it->second->getTipo()
				<< " - Nome: " << it->second->getNome()
				<< " - Costo: " << it->second->getCosto()
				<< endl;
		it++;
	}
	cout << "---------------------------------------------------------------------\n" << endl;
	return;
}

void DirezioneSanitaria::stampaListaPrestazioniDisponibili(string tipo) {
	rilevaPrestazioniDisponibiliDalleStrutture();
	map<float,Prestazione*>::iterator it = listaPrestazioniDisponibili.begin();
	if(it == listaPrestazioniDisponibili.end()){
		cout << "Non ci sono prestazioni disponibili." << endl;
		return;
	}
	cout << "\n------------Lista Prestazioni disponibili --("<< this->nome <<")-----------------------" << endl;
	while(it != listaPrestazioniDisponibili.end()){
		if(it->second->getTipo()==tipo){
		cout << "Prestazione numero: " << it->first
				<< " - Branca: " << (it->second)->getBranca()
				<< " - orario: " << it->second->getOraInizio() << "-" << it->second->getOraFine()
				<< " - Tipo: " << it->second->getTipo()
				<< " - Nome: " << it->second->getNome()
				<< " - Costo: " << it->second->getCosto()
				<< endl;
		}
		it++;
	}
	cout << "---------------------------------------------------------------------\n" << endl;
	return;
}

float DirezioneSanitaria::prenotaPrestazione(Utente* utente, string nomePrestazione,int ora){
	map<float,Prestazione*>::iterator it = listaPrestazioniDisponibili.begin();
	//ciclo sulle prenotazioni disponibili per filtro di ora e tipo esame
	if(it == listaPrestazioniDisponibili.end()){
		cout << "Non ci sono prestazioni disponibili." << endl;
		return -1;
	}
	float f;
	while(it != listaPrestazioniDisponibili.end()){
		if(it->second->getNome()==nomePrestazione
			and ora>=it->second->getOraInizio()
			and ora<=it->second->getOraFine()){
				Prestazione* prestazione = it->second;
				prestazione->setNome(nomePrestazione);
				Prenotazione* p = new Prenotazione(utente, ora, prestazione );
				f = it->first;
				float aux = (f-int(f))*10000;
				aux=roundf(aux);
				int idStruttura = (int)aux;
				int r = listaStrutture[idStruttura]->prenotaPrestazione(p);
				if(r=0){
					return 0;
				}
				cout << "Prenotazione effettuata presso la struttura: "
						<< listaStrutture[idStruttura]->getNomeStruttura()
						<< " - numero prestazione: " << f
						<< endl;
				return f;
		}
		it++;
	}
	cout << "---------------------------------------------------------------------\n" << endl;
	return -1;
}

Utente* DirezioneSanitaria::trovaUtente(string nome){
	Utente* aux = new Utente();
	map<int,Utente*>::iterator it = listaUtenti.begin();
	if(it == listaUtenti.end()){
		cout << "non ci sono utenti nel sistema." << endl;
		return aux;
	}
	while(it != listaUtenti.end()){
		if(it->second->getNome()==nome){
			cout << "Utente "<< nome << " trovato."<< endl;
			return it->second;
		}
		it++;
	}
	cout << "Utente "<< nome << " non presente in "<< this->nome <<"." << endl;
	return aux;
}

bool DirezioneSanitaria::disdiciPrestazione(float numeroPrenotazioneDirezione) {
	float aux = (numeroPrenotazioneDirezione-int(numeroPrenotazioneDirezione))*10000;
	aux=roundf(aux);
	int idStruttura = (int)aux;
	if (idStruttura==0)
		return false;
	else{
		int numeroPrenotazioneStruttura = (int)numeroPrenotazioneDirezione;
		return listaStrutture[idStruttura]->disdiciPrenotazione(numeroPrenotazioneStruttura);
	}

}
