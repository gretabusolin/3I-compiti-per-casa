#include <iostream>
using namespace std;
main (void)
{
    int i=1;
    int N=0;
    int X=0;
    int num=0;
    int numMAX=0;
    int numMIN=0;
    int numUGUALI=0;

    cout<<"PROGRAMMA CHE DETERMINA QUANTI NUMERI SONO MAGGIORI, MINORI O UGUALI RISPETTO A UN NUMERO INSERITO"<< endl;
    cout<<endl<<"Quanti numeri vuoi inserire? (>0) ";
    cin>>N;
    cout<<endl<<"Inserisci un numero sulla base del quale verrano valutati gli altri numeri che inserirai: ";
    cin>>X;
    while (i<=N)
    {
        cout<<endl<<"Inserisci un numero: ";
        cin>>num;
        if (num>X)
        {
            numMAX=numMAX+1;
        }
        else
        {
            if (num<X)
            {
                numMIN=numMIN+1;
            }
            else
            {
                numUGUALI=numUGUALI+1;
            }
        }
        i++;
    }
cout<<endl<<"I numeri maggiori di "<<X<<" sono: "<<numMAX<< endl;
cout<<endl<<"I numeri minori di "<<X<<" sono: "<<numMIN<< endl;
cout<<endl<<"I numeri uguali a "<<X<<" sono: "<<numUGUALI<< endl;

}
