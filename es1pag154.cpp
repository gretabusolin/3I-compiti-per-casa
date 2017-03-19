#include <iostream>
#include <stdlib.h>
using namespace std;

main ()
{
    int i, j;
    int array [100];
    cout<<"QUESTO PROGRAMMA VISUALIZZA I NUMERI PRIMI COMPRESI TRA 1 E 100"<<endl;
    //inizializza vettore a 1
    for (i=0; i<100; i++)
    {
        array [i]==1;        // in questo modo, all' elemento di ogni cella viene assegnato valore 1
    }
    for (i=2; i<100; i++)
    {
        if(array[i]==1)
        {
            for (j=1; j<(100/i)+1; j++)
            array[i*j]=0;   // in questo modo, si cercano le celle che hanno indice pari e ai loro elementi viene assegnato vaolore 0
        }
    }
    cout<< "numeri primi <100";
    for (i=1; i<100; i++)
    {
        if (array[i]!=0)
        {
            cout<<" "<<i<<";";
        }
    }
    system("PAUSE");
}
