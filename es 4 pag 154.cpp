#include <iostream>
#include <stdlib.h>

using namespace std;

// prototipo funzione
int OttieniDimensione(int);

int main (){
int v[10];
int NumComponenti, i;
int prodotto = 1;
int somma = 0;

    NumComponenti = OttieniDimensione(NumComponenti);
    for (i=1; i <= NumComponenti; i++) {
        cout << "Inserisci il " << i << "' componenti: ";
        cin >> v[i];
    }
    for (int j=i; j > 0; j--){// j=4; 4>0; j--       3>0; j--          2>0; j--            1>=0; j--
        if (i%2 == 0){         // 4%2 =0                               2%2=0
            prodotto = prodotto*v[i]; //prodotto = 1*4                 *2
        }
        else {                  //                   3%2=1                                  1%2 =1
            somma = somma+v[i]; //                   somma = 0+3                            +1
        }                       // j=3               j=2               j=1                  j=0
    }
    cout << "Il prodotto delle componenti di posto pari e': "<< prodotto << endl;
    cout << "La somma delle componenti di posto dispari e': "<< somma << endl;
system("PAUSE");
return 0;
}


int OttieniDimensione(int NumComponenti){
    cout << "Inserisci il numero di componenti: ";
    cin >> NumComponenti;
    while (NumComponenti > 10 || NumComponenti < 0){
        cout << "ERRORE!  Il numero di componenti dev'essere minore o ugluale a 10." << endl;
        cout << "Inserisci il numero di componenti: ";
        cin >> NumComponenti;
    }
    return NumComponenti;
}













