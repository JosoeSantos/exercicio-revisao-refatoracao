#include <string>
#include "Empregado.hpp"
#define MONTHS_ON_YEAR 12

class Vendedor : public Empregado {

	private:
    double quotaMensalVendas;
  public:

  Vendedor(std::string novoNome, double novoSalarioHora, double novaQuotaMensalVendas):
    Empregado(novoNome, novoSalarioHora), quotaMensalVendas(novoSalarioHora) {}

	double quotaTotalAnual() {
	  return quotaMensalVendas * MONTHS_ON_YEAR;
	}

};

