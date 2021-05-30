/*
 * Strumento.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef STRUMENTO_H_
#define STRUMENTO_H_
#include <iostream>
using namespace std;

class Strumento {
private:
	string strumento;
public:
	Strumento(string strumento);
	virtual ~Strumento();

	const string& getStrumento() const {
		return strumento;
	}

	void setStrumento(const string &strumento) {
		this->strumento = strumento;
	}
};

#endif /* STRUMENTO_H_ */
