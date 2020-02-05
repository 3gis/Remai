#include <iostream>

int main() {
  std::string vardas;
  std::cout << "Iveskite savo varda: " << std::endl;
  std::cin >> vardas;
  std::string Sveikas;
  if(vardas[vardas.length()-1] == 's')
    Sveikas = "Sveikas, ";
  else
    Sveikas = "Sveika, ";
  for(int i = 0; i<vardas.length() + Sveikas.length()+2;i++)
  std::cout << "*";
  std::cout << std::endl << "*";
  for(int i = 0; i<vardas.length() + Sveikas.length()+2;i++)
  std::cout << " ";
  std::cout << "*" << std::endl;
  std::cout << "* " << Sveikas << vardas << " *";
  std::cout << std::endl << "*";
  for(int i = 0; i<vardas.length() + Sveikas.length()+2;i++)
  std::cout << " ";
  std::cout << "*" << std::endl;
  for(int i = 0; i<vardas.length() + Sveikas.length()+2;i++)
  std::cout << "*";

}
