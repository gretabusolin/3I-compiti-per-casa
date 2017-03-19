#include <iostream>
#include <stdlib.h>
#define MAX 1000

using namespace std;

main()
{
    int arrayNumeri[MAX], dato, m;
    unsigned int i, num=0, posizMax;
    arrayNumeri[0]=0;                   // se non immetto niente...
    cout<<"Inserire i valori (0 per terminare): "<< endl;
    cin>> dato;
    while (dato != 0 && num < MAX)
    {
        arrayNumeri[num] = dato;
        num++;
        if (num < MAX)                  // non leggo il dato seguente
        { // se l'array é finito
          cin>> dato;
        }
    }
    m = arrayNumeri[0];
    posizMax = 0;
    for (i = 1; i < MAX; i++)
    {
        if (arrayNumeri[i] > MAX)
        {
            m = arrayNumeri[i];
            posizMax = i;
        }
    }
    cout<< "Max "<< m << " Posizione "<< posizMax<< endl;
    system("PAUSE");
}
