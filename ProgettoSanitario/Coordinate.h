/*
 * Coordinate.h
 *
 *  Created on: 24 mag 2021
 *      Author: Moro
 */

#ifndef COORDINATE_H_
#define COORDINATE_H_

class Coordinate {
private:
	float gradi,minuti,secondi;
public:
	Coordinate();
	Coordinate(float gradi, float minuti, float secondi);
	virtual ~Coordinate();

	float getGradi() const {
		return gradi;
	}

	void setGradi(float gradi) {
		this->gradi = gradi;
	}

	float getMinuti() const {
		return minuti;
	}

	void setMinuti(float minuti) {
		this->minuti = minuti;
	}

	float getSecondi() const {
		return secondi;
	}

	void setSecondi(float secondi) {
		this->secondi = secondi;
	}
};

#endif /* COORDINATE_H_ */
