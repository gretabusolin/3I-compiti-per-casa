#include <iostream>
#include <stdlib.h>

using namespace std;

//prototipi funzioni
int OttieniDimensione(int);

main ()
{
    int NumElementi, i;
    int v[10];

    cout << "Questo programma visualizza una serie di elementi nell'ordine inverso." << endl << endl;
    NumElementi = OttieniDimensione(NumElementi);
    for (i=0; i < NumElementi; i++) {
        cout << "Inserisci il " << i+1 << "' elemento: ";
        cin >> v[i];
    }
    cout << "L'ordine inverso degli elementi inseriti e': " << endl;
    for (i = NumElementi-1; i >= 0; i--){
        cout << v[i] << endl;
    }

system("PAUSE");
return 0;
}

int OttieniDimensione(int NumElementi){
    cout << "Inserisci il numero di elementi: ";
    cin >> NumElementi;
    while (NumElementi > 10 || NumElementi < 0){
        cout << "ERRORE!  Il numero di elementi dev'essere minore o ugluale a 10." << endl;
        cout << "Inserisci il numero di elementi: ";
        cin >> NumElementi;
    }
    return NumElementi;
}
