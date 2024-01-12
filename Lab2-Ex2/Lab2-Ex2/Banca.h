#pragma once
#ifndef BANCA_H
#define BANCA_H

#include <string>
#include <vector>
#include "Client.h"

class Banca {
private:
    std::string codBanca;
    unsigned nrClienti;
    std::vector<Client> clienti;

public:
    Banca(std::string codBanca, unsigned nrClienti, const std::vector<Client>& clienti);
    Banca(const Banca& other);

    std::string getCodBanca() const;
    void setCodBanca(std::string cod);
    unsigned getNrClienti() const;
    void setNrClienti(unsigned nr);
    const std::vector<Client>& getClienti() const;
    void setClienti(const std::vector<Client>& clients);

    void afisaredateBanca() const;
};

#endif 