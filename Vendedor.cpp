#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado {

	private:
    double quotaMensalVendas;
  public:

  Vendedor(std::string novoNome, double novoSalarioHora, double novaQuotaMensalVendas):
    Empregado(novoNome, novoSalarioHora), quotaMensalVendas(novoSalarioHora) {}

	double quotaTotalAnual() {
	  return quotaMensalVendas * 12;
	}

};

