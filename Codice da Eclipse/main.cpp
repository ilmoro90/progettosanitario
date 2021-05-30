/*
 * main.cpp
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#include <iostream>
#include "Prestazione.h"
#include "Esame.h"
#include "Medico.h"
#include "Strumento.h"
#include "Coordinate.h"
#include "Struttura.h"
#include "Prenotazione.h"
#include "Utente.h"
#include "Cittadino.h"
#include "DirezioneSanitaria.h"
#include "AmministrativoCup.h"

using namespace std;

int main(){
	//inserisco i medici
	Medico* m = new Medico("mario","pneumologia");
	Medico* m2 = new Medico("beatrice","chirurgia");
	Medico* m3 = new Medico("bianca","cardiologia");
	Medico* m4 = new Medico("francesca","podologia");
	Medico* m5 = new Medico("antonio","ortopedia");

	Strumento* s = new Strumento("fonendoscopio");
	Strumento* s1 = new Strumento("Tac");
	Strumento* s2 = new Strumento("RX");

	Esame* e = new Esame(s,"Visitapneumologica", "pneumologia", 150.0,m);
	Esame* e1 = new Esame(s1,"Esameaddome", "chirurgia", 150.0,m);
	Esame* e2 = new Esame(s2,"RX", "ortopedia", 150.0,m);
	Visita* v = new Visita("Visitacardiologica", "cardiologia", 170, m5);
	Visita* v1 = new Visita("Visitapiede", "podologia", 170, m5);

	Coordinate* c = new Coordinate(12, 134, 45);
	Coordinate* c2 = new Coordinate(11, 13, 5);

	//inserisco la struttura
	Struttura* struttura = new Struttura(c, "Gemelli");
	Struttura* struttura2 = new Struttura(c2, "Policlinico");


	//aggiungo medici in struttura
	struttura->aggiungiMedico(m, 10, 12, e);
	struttura->aggiungiMedico(m2, 8, 10, e1);
	struttura->aggiungiMedico(m3, 12, 14, v);

	struttura2->aggiungiMedico(m4, 7, 9, v1);
	struttura2->aggiungiMedico(m5, 14, 16, e2);

	struttura->stampaMediciStruttura();
	struttura2->stampaMediciStruttura();
	struttura->stampaListaPrestazioniDisponibili();
	struttura2->stampaListaPrestazioniDisponibili();

	struttura->filtraPrestazioniPerBranca("chirurgia");

	//creo i cittadini
	Cittadino* cittadino = new Cittadino("daniele");
	Cittadino* cittadino1 = new Cittadino("elena");
	Cittadino* cittadino2 = new Cittadino("gianluca");

	//creo le prenotazioni
	/*
	Prenotazione* prenotazione0 = new Prenotazione(cittadino, e->getBranca(),11,e->getCosto());
	Prenotazione* prenotazione = new Prenotazione(cittadino, "cardiologia", 10, 120);
	Prenotazione* prenotazione2 = new Prenotazione(cittadino, "chirurgia", 13, 130);
	Prenotazione* prenotazione3 = new Prenotazione(cittadino, e->getBranca(),12,e->getCosto());
	*/
	//tengo traccia dei numeri di prenotazione e prenoto anche presso la struttura
	/*
	int numeroPrenotazione0 = struttura->prenotaPrestazione(prenotazione0);
	int numeroPrenotazione = struttura->prenotaPrestazione(prenotazione);
	int numeroPrenotazione2 = struttura->prenotaPrestazione(prenotazione2);
	int numeroPrenotazione3 = struttura->prenotaPrestazione(prenotazione3);
	//faccio delle stampe
	struttura->stampaListaPrestazioniDisponibili();
	struttura->stampaListaPrestazioniNonDisponibili();
	struttura->stampaListaPrenotazioni();

	//disdico una prenotazione
	struttura->disdiciPrenotazione(numeroPrenotazione);

	struttura->stampaListaPrestazioniDisponibili();
	struttura->stampaListaPrestazioniNonDisponibili();
	 */

	//aggiungo direzione sanitaria
	DirezioneSanitaria* asl1 = new DirezioneSanitaria("asl1","Mario Rossi", "Roma1" );

	//aggiungo utenti alla direzione sanitaria
	asl1->aggiungiUtente(cittadino);
	asl1->aggiungiUtente(cittadino1);
	asl1->aggiungiUtente(cittadino2);

	asl1->stampaListaUtenti();

	//rimuovo utenti dalla lista
	//asl1->rimuoviUtente(0);
	asl1->stampaListaUtenti();
	asl1->aggiungiUtente(cittadino);
	asl1->stampaListaUtenti();

	//aggiungo struttura alla direzione sanitaria
	asl1->aggiungiStruttura(struttura);
	asl1->aggiungiStruttura(struttura2);
	//asl1->aggiungiStruttura(struttura);	//aggiungo la stessa struttura, gestisco,OK

	asl1->stampaListaStrutture();		//ristampo,OK
	//asl1->rimuoviStruttura(0);			//rimuovo una struttura,OK
	//asl1->stampaListaStrutture();		//stampa le strutture, OK
	//asl1->aggiungiStruttura(struttura);	//riaggiungo la struttura, nuovo identificativo, OK
	//asl1->stampaListaStrutture();

	AmministrativoCup* amministratore = new AmministrativoCup("Marco","admin","password");

	bool loop = 1;

	while(loop){
		string utente,password;
		cout << "\n----------------------Log in---------------------------" << endl;
		cout << "Inserisci utente e password"<< endl;
		getline(cin, utente);
		cin.clear();
		getline(cin, password);
		cin.clear();
		if(utente == amministratore->getUtente() and amministratore->getPassword()==password){
			cout << "Bentornato " << utente << "!" << endl;
			cout << "-------------------------------------------------------\n" << endl;
			break;
		}
		else{
			cout << "Spiacente accesso negato" << endl;
		}
	}
	while(loop){
		cout << "\n----------------Interfaccia Amministrativo-------------" << endl;
		char c;
		cout << "Cosa vuoi fare?" << endl;
		cout << 	" i. Inserisci Struttura\n"
				<<	" e. Elimina struttura\n"
				<<	" o. Modifica struttura\n"
				<<	" u. Aggiungi Utente alla direzione sanitaria\n"
				<< 	" x. Elimina Utente\n"
				//<<  " m. Modifica Utente\n"
				<< 	" p. Prenota Prestazione\n"
				<<	" r. Rimuovi Prestazione\n"
				<<	" s. Stampa\n"
				<< 	" q. Esci\n"
				<< 	endl;
		cin >> c;

		switch(c){
			//inserisci struttura
			case 'i':{
				float secondi, minuti, gradi;
				string nomeStruttura;
				cout << "Come si chiama la struttura?" << endl;
				cin >> nomeStruttura;
				cout << "Inserisci gradi minuti e secondi" << endl;
				cin >> gradi;
				cin >> minuti;
				cin >> secondi;
				Coordinate* coo = new Coordinate();
				coo->setGradi(gradi);
				coo->setMinuti(minuti);
				coo->setSecondi(secondi);
				Struttura* strutt = new Struttura(coo, nomeStruttura);
				asl1->aggiungiStruttura(strutt);
				break;
			}

			//elimina struttura
			case 'e':{
				int in;
				cout << "Quale struttura vuoi rimuovere?" << endl;
				asl1->stampaListaStrutture();
				cin >> in;
				asl1->rimuoviStruttura(in);
				break;
			}

			//modifica struttura
			case 'o':{
				int in,choice;
				cout << "Quale struttura vuoi modificare?" << endl;
				asl1->stampaListaStrutture();
				cin >> in;

				cout << "Cosa vuoi modificare?\n"
						<< "1. Rimuovere medico\n"
						<< "2. Cambiare nome alla struttura\n"
						<< endl;
				cin >> choice;
				switch(choice){
					case 1:{
						int matricolaMedico;
						cout << "Quale medico vuoi rimuovere?" << endl;
						auto stru = asl1->getListaStrutture().find(in);
						stru->second->stampaMediciStruttura();
						cin >> matricolaMedico;
						stru->second->rimuoviMedico(matricolaMedico);
						break;
					}

					case 2:{
						string nuovoNome;
						cout << "Inserisci il nuovo nome." << endl;
						cin >> nuovoNome;
						auto stru = asl1->getListaStrutture().find(in);
						stru->second->setNomeStruttura(nuovoNome);
						break;
					}

					default:{
						cout << "Input errato"<<endl;
						break;
					}
				}

				break;
			}

			//inserisci utente
			case 'u':{
				string _nome;
				cout << "Come si chiama l'utente?" << endl;
				cin >> _nome;
				Utente* ut = new Utente(_nome);
				asl1->aggiungiUtente(ut);
				break;
			}

			//elimina utente
			case 'x':{
				int utenteDaRimuovere;
				cout << "Quale utente vuoi rimuovere?" << endl;
				asl1->stampaListaUtenti();
				cin >> utenteDaRimuovere;
				asl1->rimuoviUtente(utenteDaRimuovere);
				break;
			}
			/*
			//modifica utente
			case 'm':{
				cout << "caso m" << endl;
				break;
			}*/

			//prenota prestazione
			case 'p':{
				int in;
				string tipo,nomeUtente;
				Utente* utenteAux;
				cout << "Come si chiama l'utente?"<< endl;
				cin >> nomeUtente;
				utenteAux = asl1->trovaUtente(nomeUtente);
				if(utenteAux->getNome()==""){
					break;
				}
				cout << "Che tipo prestazione vuoi prenotare?\n"
						<< "1. Esame\n"
						<< "2. Visita\n"
						<< endl;
				cin >> in;
				switch(in){
					//Esame
					case 1:{
						tipo = "esame";
						asl1->stampaListaPrestazioniDisponibili(tipo);
						break;
					}

					//visita
					case 2:{
						tipo = "visita";
						asl1->stampaListaPrestazioniDisponibili(tipo);
						break;
					}
					default:{

					}
				}
				int ora;
				string nomePrestazione;
				cout << "A che ora vorresti prenotare?" << endl;
				cin >> ora;
				cout << "Come si chiama la prestazione?" << endl;
				cin >> nomePrestazione;
				float numeroPrenotazione = asl1->prenotaPrestazione(utenteAux, nomePrestazione, ora);
				if(numeroPrenotazione<0){
					cout << "Prestazione non disponibile, mi dispiace" << endl;
					break;
				}
				break;
			}

			//rimuovi prestazione
			case 'r':{
				float fin;
				cout << "Inserisci numero di prenotazione "<< endl;
				cin >> fin;
				asl1->disdiciPrestazione(fin);
				break;
			}

			//rimuovi prestazione
			case 's':{
				int in;
				cout << "Cosa vuoi stampare?\n"
						<< " 1. Lista delle strutture\n"
						<< " 2. Lista degli utenti\n"
						<< " 3. Lista delle prestazioni disponibili\n"
						<< endl;
				cin >> in;
				switch(in){
					//stampa lista strutture
					case 1:{
						asl1->stampaListaStrutture();
						break;
					}
					//stampa lista utenti
					case 2:{
						asl1->stampaListaUtenti();
						break;
					}
					//stampa lista prestazioni disponibili
					case 3:{
						asl1->stampaListaPrestazioniDisponibili();
						break;
					}
					default:{
						cout << "Non riconosciuto" << endl;
						break;
					}
				}
				break;
			}

			//esci
			case 'q':{
				cout << "Alla prossima, buona giornata!" << endl;
				loop=0;
				break;
			}

			default:
				cout << "Comando non riconosciuto." << endl;
		}
	}

	return 0;
}
