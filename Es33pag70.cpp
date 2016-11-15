#include <iostream>
using namespace std;

main()
{
    int x=0;// base intera e non negativa della potenza
    int y=0;// esponente intero e non negativo della potenza
    int potenza;// risultato dlla potenza x^y
    int I=1;// contatore ciclo for

    cout<<"********************************************************"<< endl;
    cout<<"QUESTO PROGRAMMA CALCOLA IL RISULTATO DELLA POTENZA X^Y,"<< endl;
    cout<<"     UTILIZZANDO L'OPERAZIONE DI MOLTIPLICAZIONE"<< endl;
    cout<<"********************************************************"<< endl;
    cout<<"Inserisci la base della potenza:";
    cin>>x;
    while (x<0)
    {
        cout<<"ERRORE! La base deve essere maggiore di 0. Reinserisci la base della potenza:";
        cin>>x;
    }
    cout<<"Inserisci l'esponente della potenza:";
    cin>>y;
    while (y<0)
    {
        cout<<"ERRORE! L'esponente deve essere maggiore di 0. Reinserisci l'esponente della potenza:";
        cin>>y;
    }
    if(x==0 && y==0)
    {
        cout<<"La potenza "<<x<<"^"<<y<<" e' INDETERMINATA."<< endl;
    }
    if(y==0)
    {
        cout<<x<<"^"<<y<<" = 1"<< endl;
    }
    potenza=1;
    for (I=1; I<=y; I++)
    {
        potenza=potenza*x;
    }
    cout<<x<<"^"<<y<<" = "<<potenza<< endl;

    return 0;
}










