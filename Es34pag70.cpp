#include <iostream>
using namespace std;

main ()
{
    float n=0;// base della potenza
    int m=0;// esponente della potenza >=0
    float potenza;// risultato di n^m
    int I=1;//contatore ciclo for
    cout<<"oooooooooooooooooooooooooooooooooooooooo"<< endl;
    cout<<"QUESTO PROGRAMMA CALCOLA LA POTENZA n^m"<< endl;
    cout<<"oooooooooooooooooooooooooooooooooooooooo"<< endl;
    cout<<endl<<"Inserisci la base della potenza: ";
    cin>> n;
    cout<<"Inserisci l'esponente della potenza: ";
    cin>>m;
    while (m<0)
    {
      cout<<"ERRORE! L'esponente della potenza deve essere maggiore o uguale a zero. Reinserisci l'esponente della potenza: ";
      cin>>m;
    }
    if(n==0 && m==0)
    {
        cout<<"La potenza "<<n<<"^"<<m<<" e' INDETERMINATA."<< endl;
    }
    if(m==0)
    {
        cout<<n<<"^"<<m<<" = 1"<< endl;
    }
    potenza=1;
    for (I=1; I<=m; I++)
    {
        potenza=potenza*n;
    }
    cout<<n<<"^"<<m<<" = "<<potenza<< endl;

    return 0;
}
