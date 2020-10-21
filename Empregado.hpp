#ifndef EMPREGADO_H
#define EMPREGADO_H
#define NORMAL_HOURS_PER_DAY 8
#include <iostream>
#include <string>

class Empregado {
  private:
    std::string nome;  	  
    double salarioHora;
    double horasTrabalhadas;
  public:
    Empregado(std::string novoNome, double novoSalarioHora): nome(novoNome), salarioHora(novoSalarioHora) {}
    double pagamentoMes() {
 
      double t = horasTrabalhadas;

	    //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > NORMAL_HOURS_PER_DAY) {
        double x = horasTrabalhadas - NORMAL_HOURS_PER_DAY;
        t += x / 2;
      }
  	  return t * salarioHora;
    }

    void setHorasTrabalhadas(double novasHorasTrabalhadas) {
      horasTrabalhadas = novasHorasTrabalhadas;
    }

    std::string const getNome() {return nome;}

    double const getSalarioHora() {return salarioHora;}

};

#endif