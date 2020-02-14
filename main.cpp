#include <iostream>

using namespace std;

int main()
{
    string eil1, eil2, eil3, eil4, eil5;
    string vardas, pasisveikinimas;
    cout << "Iveskite savo varda: ";
    cin >> vardas;
    if(vardas[vardas.length()-1] =='a' || vardas[vardas.length()-1] == 'e' || vardas[vardas.length()-1] =='A' || vardas[vardas.length()-1] =='E')
        pasisveikinimas = "Sveika, ";
    else pasisveikinimas = "Sveikas, ";
    cout << endl;
    int dydis = pasisveikinimas.length() + vardas.length();
    for(int i = 0; i<dydis+4;i++)
        eil1+="*";
    eil2 += "*";
    for(int i = 0; i<dydis+2;i++)
        eil2+=" ";
    eil2+="*";
    eil3+= "* " + pasisveikinimas + vardas + " *";
    eil4=eil2;
    eil5 = eil1;
    cout << eil1 << endl << eil2 << endl << eil3 << endl << eil4 << endl << eil5;
    return 0;
}
