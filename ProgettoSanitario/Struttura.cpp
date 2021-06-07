/*
 * Struttura.cpp
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#include "Struttura.h"
#include <String>
#include "Coordinate.h"

string correctNumber(int i){
	string aux = "";
	if(i<10){
		aux = "0"+to_string(i)+"";
	}
	else{
		aux = to_string(i);
	}
	return aux;
}

bool giaPresente(map<int,Prenotazione*> lista, Prenotazione* prenotazione){
	map<int,Prenotazione*>::iterator it = lista.begin();
	if(it==lista.end())
		return false;
	while(it!=lista.end()){
		if(it->second->getUtente()->getNome() == prenotazione->getUtente()->getNome() and it->second->getOra() == prenotazione->getOra())
			return true;
		it++;
	}
	return false;
}

Struttura::Struttura(Coordinate* coordinate, string nomeStruttura) {
	this->coordinate = coordinate;
	this->nomeStruttura = nomeStruttura;
	this->listaMediciStruttura = {};
	this->counter=0;

}

Struttura::~Struttura() {
	// TODO Auto-generated destructor stub
}

void Struttura::stampaMediciStruttura() {
	map<int,Medico*>::iterator it = listaMediciStruttura.begin();
	if(it==listaMediciStruttura.end()){
		cout << "Non ci sono medici in questa struttura!" << endl;
		return;
	}
	cout << "\n----------tMedici della struttura------------("<< this->nomeStruttura <<")------------" << endl;
	while(it != listaMediciStruttura.end()){
		cout << "- Matricola: " << it->first << " "
			 << " nome: " << it->second->getNome()
			 << " Turno: " << it->second->getOraInizio() << "-" << it->second->getOraFine()
			 << endl;
		it++;
	}
	cout << "---------------------------------------------------" << endl;
	return;
}

bool Struttura::aggiungiMedico(Medico* medico, int oraInizio, int oraFine, Prestazione* p) {
	map<int,Medico*>::iterator it = listaMediciStruttura.begin();
	if(it==listaMediciStruttura.end()){
		listaMediciStruttura.insert(pair<int,Medico*>(++counter,medico));
		medico->setMatricola(counter);
		medico->setOrarioLavoro(oraInizio,oraFine);
		cout << "Dottor " << medico->getNome() << " aggiunto. ";
		generaListaPrestazioni(medico,p);
		return true;
	}
	else{
		while(it!=listaMediciStruttura.end()){
			if( (it->second)->getNome() == medico->getNome() ){
				cout << "Medico già presente nella struttura" << endl;
				return false;
			}
			it++;
		}
		listaMediciStruttura.insert(pair<int,Medico*>(++counter,medico));
		medico->setMatricola(counter);
		medico->setOrarioLavoro(oraInizio,oraFine);
		cout << "Dottor " << medico->getNome() << " aggiunto. ";
		generaListaPrestazioni(medico,p);
		return true;
	}

}

bool Struttura::rimuoviMedico(int matricola) {
	map<int,Medico*>::iterator it = listaMediciStruttura.begin();
	while(it!=listaMediciStruttura.end()){
		if( (it->second)->getMatricola() == matricola ){
			listaMediciStruttura.erase(matricola);
			cout << "Medico con matricola " << matricola << " rimosso." << endl;
			return true;
		}
		it++;
	}
	cout << "Medico con matricola " << matricola << " non esistente" << endl;
	return false;
}



void Struttura::stampaListaPrestazioniDisponibili(){
	cout << "-------------------Lista Prestazioni Disponibili------("<< this->nomeStruttura <<")--------" << endl;
	for(auto i:this->listaPrestazioniDisponibili){
		cout << "prestazione numero: " << i.first
				<< " - branca: "  << i.second->getBranca()
				<< " - orario " << i.second->getOraInizio() << "-" << i.second->getOraFine()
				<<  endl;
	}
	cout << "------------------------------------------------------------\n" << endl;
}

void Struttura::stampaListaPrestazioniNonDisponibili(){
	cout << "-------------Lista Prestazioni Non Disponibili-----("<< this->nomeStruttura <<")---------" << endl;
	for(auto i:this->listaPrestazioniNonDisponibili){
		cout << "prestazione numero: " << i.first
				<< " - branca: "  << i.second->getBranca()
				<< " - orario " << i.second->getOraInizio() << "-" << i.second->getOraFine()
				<<  endl;
	}
	cout << "------------------------------------------------------------\n" << endl;
}

void Struttura::stampaListaPrenotazioni(){
	cout << "-------------Lista Prenotazioni-----------("<< this->nomeStruttura <<")------------------" << endl;
	for(auto i:this->listaPrenotazioniEffettuate){
		cout << "Prenotazione numero: " << i.first
				<< " - branca: " <<i.second->getBranca()
				<< " - a nome di: "  << i.second->getUtente()->getNome()
				<< " - alle ore: " << i.second->getOra()
				<<  endl;
	}
	cout << "------------------------------------------------------------\n" << endl;
}

void Struttura::generaListaPrestazioni(Medico* m, Prestazione* p){
	for(int i = m->getOraInizio(); i < m->getOraFine(); i++){
		//string aux = correctNumber(i)+correctNumber(i+1)+"-"+m->getSpecializzazione()+"-"+m->getNome();
		//Prestazione* p = new Prestazione("Generica", m->getSpecializzazione(),0);
		p->setOraInizio(i);
		p->setOraFine(i+1);
		this->listaPrestazioniDisponibili.insert(pair<int,Prestazione*>(++counterPrestazioni,p));
	}
	cout << "Lista prestazioni aggiornate." << endl;
}

void Struttura::filtraPrestazioniPerBranca(string branca){
	cout << "-------Lista Prestazioni Disponibili---("<< this->nomeStruttura <<")--("<< branca <<")------" << endl;
	map<int,Prestazione*>::iterator it = this->listaPrestazioniDisponibili.begin();
	while(it!=this->listaPrestazioniDisponibili.end()){
		if(it->second->getBranca()==branca){
			cout << "prestazione numero: " << it->first
				<< " - branca: "  << it->second->getBranca()
				<< " - orario " << it->second->getOraInizio() << "-" << it->second->getOraFine()
 				<<  endl;
		}
		it++;
	}
	cout << "------------------------------------------------------------\n" << endl;
}

int Struttura::prenotaPrestazione(Prenotazione* prenotazione){
	map<int,Prestazione*>::iterator it = this->listaPrestazioniDisponibili.begin();
	if(it==this->listaPrestazioniDisponibili.end()){
		cout << "Non ci sono prestazioni disponibili"<< endl;
		return -1;
	}
	int orarioPrenotazione = prenotazione->getOra();
	while(it != this->listaPrestazioniDisponibili.end()){
		bool prenotabile = (orarioPrenotazione >= it->second->getOraInizio()) and (orarioPrenotazione <= it->second->getOraFine());
		if(it->second->getBranca() == prenotazione->getPrestazione()->getBranca() and prenotabile){
			//già presente tra le prenotazioni nel sistema...
			if(giaPresente(this->listaPrenotazioniEffettuate,prenotazione)){
				cout << "Hai già prenotato!" << endl;
                return 0;
			}
			int numeroPrenotazione = it->first;
			this->listaPrestazioniNonDisponibili.insert(pair<int,Prestazione*>(it->first,it->second));
			this->listaPrestazioniDisponibili.erase(it->first);
			this->listaPrenotazioniEffettuate.insert(pair<int,Prenotazione*>(numeroPrenotazione,prenotazione));
			return numeroPrenotazione;
		}
		it++;
	}
	return -1;
}

bool Struttura::aggiungiVisita(Visita *v) {
	map<int,Visita*>::iterator it = this->listaVisite.begin();
	// caso lista vuota
	if(it==this->listaVisite.end()){
		this->listaVisite.insert(pair<int,Visita*>(counterVisite,v));
		counterVisite++;
		cout << "Visita aggiunta alla lista di visite." << endl;
		return true;
	}
	//controllo tutta la lista e vedo se c'è già
	while(it != this->listaVisite.end()){
		if(it->second->getNome()==v->getNome()){
			cout << "Visita già presente." << endl;
			return false;
		}
		it++;
	}
	//esame non presente
	this->listaVisite.insert(pair<int,Visita*>(counterVisite,v));
	counterVisite++;
	cout << "Visita aggiunta alla lista di visite." << endl;
	return true;
}

void Struttura::stampaListaVisite() {
	cout << "-------------Lista Visite-------("<< this->nomeStruttura <<")----------------------------" << endl;
	for(auto i:this->listaVisite){
		cout << "Prenotazione numero: " << i.first
				<< " - Nome: " << i.second->getNome()
				<< " - branca: " <<i.second->getBranca()
				<<  endl;
	}
	cout << "------------------------------------------------------------\n" << endl;
}

void Struttura::stampaListaEsami() {
	cout << "-------------Lista Esami-----------("<< this->nomeStruttura <<")------------------------" << endl;
	for(auto i:this->listaEsami){
		cout << "Prenotazione numero: " << i.first
				<< " - Nome: " << i.second->getNome()
				<< " - branca: " <<i.second->getBranca()
				<<  endl;
	}
	cout << "------------------------------------------------------------\n" << endl;
}

bool Struttura::disdiciPrenotazione(int numeroPrenotazione){
	map<int,Prenotazione*>::iterator it = listaPrenotazioniEffettuate.begin();
	if(it==listaPrenotazioniEffettuate.end()){
		cout << "Non ci sono prestazioni disponibili"<< endl;
		return false;
	}
	while(it != listaPrenotazioniEffettuate.end()){
		if(it->first == numeroPrenotazione){
			auto aux = listaPrestazioniNonDisponibili.find(numeroPrenotazione);
			if(aux!=listaPrestazioniNonDisponibili.end()){
				//rimetto tra le prenotazionidisponibili
				listaPrestazioniDisponibili.insert(pair<int,Prestazione*>(aux->first,aux->second));

				//rimuovo dalla lista di prenotazioni non disponibili
				listaPrestazioniNonDisponibili.erase(numeroPrenotazione);

				//rimuovo dalle prenotazioni effettuate
				listaPrenotazioniEffettuate.erase(numeroPrenotazione);
				cout << "Prenotazione " << numeroPrenotazione
						<< " disdetta con sucesso, presso la struttura "
						<< this->nomeStruttura
						<< endl;
				return true;
			}
		}
		it++;
	}
	cout << "Questa prenotazione non esiste."<< endl;
	return false;
}

bool Struttura::aggiungiEsame(Esame *e) {
	map<int,Esame*>::iterator it = this->listaEsami.begin();
	// caso lista vuota
	if(it==this->listaEsami.end()){
		this->listaEsami.insert(pair<int,Esame*>(counterEsami,e));
		counterEsami++;
		cout << "Esame aggiunto alla lista di esami." << endl;
		return true;
	}
	//controllo tutta la lista e vedo se c'è già
	while(it != this->listaEsami.end()){
		if(it->second->getNome()==e->getNome()){
			cout << "Visita già presente." << endl;
			return false;
		}
		it++;
	}
	//esame non presente
	this->listaEsami.insert(pair<int,Esame*>(counterEsami,e));
	counterEsami++;
	cout << "Esame aggiunto alla lista di esami." << endl;
	return true;
}









