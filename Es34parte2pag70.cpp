#include <iostream>
using namespace std;

main ()
{
    float n=0;// base della potenza
    float m=0;// esponente della potenza >=0
    float potenza;// risultato di n^m
    int I=1;//contatore ciclo for
    float resto=0;
    cout<<"oooooooooooooooooooooooooooooooooooooooo"<< endl;
    cout<<"QUESTO PROGRAMMA CALCOLA LA POTENZA n^m"<< endl;
    cout<<"oooooooooooooooooooooooooooooooooooooooo"<< endl;
    cout<<endl<<"Inserisci la base della potenza: ";
    cin>> n;
    cout<<"Inserisci l'esponente della potenza: ";
    cin>>m;
    if(n==0 && m==0)
    {
        cout<<"La potenza "<<n<<"^"<<m<<" e' INDETERMINATA."<< endl;
    }
    if(m==0)
    {
        cout<<n<<"^"<<m<<" = 1"<< endl;
    }
    if (m==1)
    {
        cout<<n<<"^"<<m<<"="<<n<< endl;
    }
    else
    {if (m<0) {
        m=m*(-1);
        for (int I=0;I<m;I++) {
            potenza=potenza*n;
        }
        potenza=1/potenza;
        cout<<n<<"^"<<m<<"="<<potenza<< endl;
    }
    else {
        for (int I=0;I<m;I++) {
            potenza=potenza*n;
        }
        cout<<n<<"^"<<m<<"="<<potenza<< endl;
    }
    }
    return 0;
}

