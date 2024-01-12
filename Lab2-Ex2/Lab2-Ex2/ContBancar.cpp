#include "ContBancar.h"
#include<iostream>
using namespace std;

ContBancar::ContBancar(string nrCont, float suma, string moneda) :
	numarCont(nrCont), suma(suma), moneda(moneda) {}

ContBancar::ContBancar(const ContBancar& other) :numarCont(other.numarCont),
suma(other.suma), moneda(other.moneda) {}

float ContBancar::getSumaTotala() const {
	return suma;
}

float ContBancar::getDobanda() const {
	if (moneda == "RON" && suma < 500) {
		return 0.3f;
	}
	else if (moneda == "RON") {
		return 0.8f;
	}
	else if (moneda == "EUR") {
		return 0.1f;
	}
	return 0.0f;
}
void ContBancar::depunere(float suma) {
	this->suma += suma;
}

void ContBancar::retragere(float suma) {
	if (this->suma >= suma) {
		this->suma -= suma;
	}
	else {
		cout << "Fonduri insuficiente saracieeeee!!!" << endl;
	}
}

void ContBancar::transfer(ContBancar& contDest, float suma) {
	if (this->suma >= suma && moneda == "RON" && contDest.moneda == "RON") {
		this->retragere(suma);
		contDest.depunere(suma);
		cout << "Transfer realizat cu succes!" << endl;
	}
	else {
		cout << "Transferul nu poate fi realizat!" << endl;
	}
}

string ContBancar::getNumarCont() const {
	return numarCont;
}

void ContBancar::setNumarCont(string nrCont) {
	numarCont = nrCont;
}

string ContBancar::getMoneda() const {
	return moneda;
}

void ContBancar::setMoneda(string mon) {
	moneda = mon;
}

void ContBancar::afisaredateCont()const {
	cout << "Numar cont: " << numarCont << endl;
	cout << "Suma: " << suma << " " << moneda << endl;
}
