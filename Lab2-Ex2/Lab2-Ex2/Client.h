#pragma once

#ifndef CLIENT_H
#define CLIENT_H

#include<string>
#include<vector>
#include "ContBancar.h"

class Client {
private:
	string nume;
	string prenume;
	string adresa;
	unsigned nrConturi;
	vector<ContBancar> conturi;

public:
	Client(string nume, string prenume, string adresa,
		unsigned nrConturi, const vector<ContBancar>& conturi);
	Client(const Client& other);

	string getNume() const;
	void setNume(string name);
	string getPrenume() const;
	void setPrenume(string surname);
	string getAdresa() const;
	void setAdresa(string adress);
	unsigned getNumarConturi() const;
	void setNrConturi(unsigned nr);
	const vector<ContBancar>& getConturi() const;
	void setConturi(const vector<ContBancar>& accounts);

	void afisaredateClient() const;
};
#endif

