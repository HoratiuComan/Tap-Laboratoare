#include "Banca.h"
#include <iostream>

Banca::Banca(string codBanca, unsigned nrClienti, const vector<Client>& clienti) :codBanca(codBanca), nrClienti(nrClienti), clienti(clienti) {}

Banca::Banca(const Banca& other)
    : codBanca(other.codBanca), nrClienti(other.nrClienti), clienti(other.clienti) {}

std::string Banca::getCodBanca() const {
    return codBanca;
}

void Banca::setCodBanca(std::string cod) {
    codBanca = cod;
}

unsigned Banca::getNrClienti() const {
    return nrClienti;
}

void Banca::setNrClienti(unsigned nr) {
    nrClienti = nr;
}

const std::vector<Client>& Banca::getClienti() const {
    return clienti;
}

void Banca::setClienti(const std::vector<Client>& clients) {
    clienti = clients;
}

void Banca::afisaredateBanca() const {
    std::cout << "Cod Banca: " << codBanca << std::endl;
    std::cout << "Numar clienti: " << nrClienti << std::endl;


    for (const auto& client : clienti) {
        client.afisaredateClient();
    }
}
