#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado {
  private:
	  int projetos;
  public:

    Engenheiro(std::string novoNome, double novoSalarioHora, int projetosIniciais):
      Empregado(novoNome, novoSalarioHora), projetos(projetosIniciais) {}

    int const getProjetos() {return projetos;};
};

