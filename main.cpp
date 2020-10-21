#include "Engenheiro.cpp"
#include "Vendedor.cpp"

void mostraEmpregado(Empregado empregado) {
  std::cout << "Nome: " << empregado.getNome() << std::endl;
  std::cout << "Salario Mes: " << empregado.pagamentoMes() << std::endl;
}

void mostraEngenheiro(Engenheiro eng) {
  mostraEmpregado(eng);
  std::cout << "Projetos: " << eng.getProjetos() << std::endl;
  std::cout << std::endl;
}

void mostraVendedor(Vendedor vendedor) {
  mostraEmpregado(vendedor);
  std::cout << "Quota vendas: " << vendedor.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;
}

int main() {

  Engenheiro eng1 = Engenheiro("Joao Snow", 35, 3);
  eng1.setHorasTrabalhadas(9.5);
  mostraEngenheiro(eng1);
  
  Engenheiro eng2 = Engenheiro("Daniela Targaryen", 30, 1);
  eng2.setHorasTrabalhadas(8);
  mostraEngenheiro(eng2);
  
  Engenheiro eng3 = Engenheiro("Bruno Stark", 30, 2);
  eng2.setHorasTrabalhadas(8);
  mostraEngenheiro(eng3);
  
  Vendedor vend1 = Vendedor("Tonho Lannister", 20, 5000);
  vend1.setHorasTrabalhadas(6);
  mostraVendedor(vend1);

  Vendedor vend2 = Vendedor("Jose Mormont", 25, 3000);
  vend2.setHorasTrabalhadas(8);
  mostraVendedor(vend2);
  
  Vendedor vend3 = Vendedor("Sonia Stark", 30, 4000);
  vend3.setHorasTrabalhadas(8);
  mostraVendedor(vend3);

  return 0;	
}