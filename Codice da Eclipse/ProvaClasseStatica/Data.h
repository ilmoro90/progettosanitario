/*
 * Data.h
 *
 *  Created on: 30 mag 2021
 *      Author: Moro
 */
#include <iostream>
using namespace std;

#ifndef DATA_H_
#define DATA_H_

static int dato=3;
class Data {
public:
	Data();
	virtual ~Data();
	static void setDato(int d){
		dato = d;
	}
	static void stampa(){
		cout << dato << endl;
	}
};

#endif /* DATA_H_ */
