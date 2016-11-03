#include <iostream>
using namespace std;

main()
{
    int num=0; //numero pari
    int N=0; //numero dei numeri pari  che si vogliono visualizzare
    int I=0; //contatore ciclo
    int resto=0; //resto della divisione per verificare quali sono numeri pari

    cout<< "QUESTO PROGRAMMA VISUALIZZA I PRIMI N NUMERI PARI"<< endl<< endl;
    cout<< "Quanti numeri pari vuoi visualizzare?"<< endl;
    cin>> N;
    cout<< "I primi "<< N<< " numeri pari sono: ";
    while (I<=N)
    {
        resto=num%2;
        if (resto==0)
        {
            cout<< num<<"; ";
            I++;
        }
        num++;
    }

}
