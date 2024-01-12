#include "Client.h"
#include<iostream>

Client::Client(string nume, string prenume, string adresa,
	unsigned nrConturi, const vector<ContBancar>& conturi) :
	nume(nume), prenume(prenume), adresa(adresa), nrConturi(nrConturi), conturi(conturi) {}

Client::Client(const Client& other) : nume(other.nume), prenume(other.prenume),
adresa(other.adresa), nrConturi(other.nrConturi),
conturi(other.conturi) {}

string Client::getNume() const {
	return nume;
}

void Client::setNume(string name) {
	nume = name;
}

string Client::getPrenume() const {
	return prenume;
}

void Client::setPrenume(string surname) {
	prenume = surname;
}

string Client::getAdresa() const {
	return adresa;
}

void Client::setAdresa(string adress) {
	adresa = adress;
}
unsigned Client::getNumarConturi() const {
	return nrConturi;
}

void Client::setNrConturi(unsigned nr) {
	nrConturi = nr;
}

const vector<ContBancar>& Client::getConturi() const {
	return conturi;
}

void Client::setConturi(const vector<ContBancar>& accounts) {
	conturi = accounts;
}

void Client::afisaredateClient() const {
	cout << "NUME: " << nume << endl;
	cout << "PRENUME: " << prenume << endl;
	cout << "ADRESA: " << adresa << endl;
	cout << "NUMAR CONT: " << nrConturi << endl;

	//afisare date conturi 
	for (const auto& cont : conturi) {
		cont.afisaredateCont();
	}
}
