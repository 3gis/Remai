#include <iostream>

int main() {
  std::string vardas;
  std::cout << "Iveskite savo varda: " << std::endl;
  std::cin >> vardas;
  std::string Sveikas = "Sveikas, ";
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
