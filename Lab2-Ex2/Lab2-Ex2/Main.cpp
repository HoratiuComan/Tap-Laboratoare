#include "Banca.h"
#include "Client.h"
#include "ContBancar.h"
#include <vector>

int main() {
	Banca banca("BT436", 2, {});
	Client client1("Boradas", "Valentin", "Str. Transilavniei 5", 2, {});
	Client client2("Coman", "Petru", "Str. Armoniei 16", 2, {});
	ContBancar contRon1("RO5367", 10350.0f, "RON");
	ContBancar contEur1("EUR4561", 4300.0f, "EUR"); 
	client1.setConturi({ contRon1, contEur1 }); 
	ContBancar contRon2("RO7849", 1754.0f, "RON");
	ContBancar contRon3("RO0125", 3500.0f, "RON"); 
	client2.setConturi({ contRon2, contRon3 });
	banca.setClienti({ client1, client2 });
	banca.afisaredateBanca();
	return 0;
}