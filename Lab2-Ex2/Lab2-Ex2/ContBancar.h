#pragma once

#ifndef CONTBANCAR_H
#define CONTBANCAR_H
#include<string>
#include "Operatiuni.h"
using namespace std;
class ContBancar :public Operatiuni {
private:
	string numarCont;
	float suma;
	string moneda;
public:
	ContBancar(string nrCont, float suma, string moneda);
	ContBancar(const ContBancar& other);
	float getSumaTotala() const override;
	float getDobanda() const override;
	void depunere(float suma) override;
	void retragere(float suma) override;
	void transfer(ContBancar& contDest, float suma);

	string getNumarCont() const;
	void setNumarCont(string nrCont);
	string getMoneda() const;
	void setMoneda(string mon);
	void afisaredateCont() const;
};
#endif
