#include <iostream>

using namespace std;

struct Remai{
string eil1, eil2, eil3, eil4, eil5;
string vardas, pasisveikinimas;
int plotis;
    Remai(){
        cout << endl << "Iveskite savo varda: ";
        cin >> vardas;
        if(vardas[vardas.length()-1] =='a' || vardas[vardas.length()-1] =='A' || vardas[vardas.length()-1] =='E' || vardas[vardas.length()-1] =='I' || vardas[vardas.length()-1] =='i' || vardas[vardas.length()-1] == 'e')
            pasisveikinimas = "Sveika, ";
        else pasisveikinimas = "Sveikas, ";
        cout << endl << "Iveskite remu ploti: ";
        cin >> plotis;
        if(plotis < 3)
            plotis = 3;
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
        cout << eil1 << endl;
        for(int i = 0; i<(plotis-3)/2;i++)
            cout<< eil2 << endl;
        cout << eil3 << endl;
        if((plotis-3)%2 != 0){
        for(int i = 0; i<(plotis-2)/2;i++)
            cout << eil4 << endl;
        }
        else{
            for(int i = 0; i<(plotis-3)/2;i++){
                cout << eil4 << endl;
            }
        }
        cout << eil5;
    }

};

int main()
{
    Remai remas;

    return 0;
}
