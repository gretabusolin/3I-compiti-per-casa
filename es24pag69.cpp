#include <iostream>
using namespace std;
main(void)
{
    int N=0;
    int num_first=0;
    int numMAX=0;
    int numMIN=0;
    int num=0;
    int i=2;

    cout<<"PROGRAMMA CHE STABILISCE QUALE, TRA I NUMERI INSERITI, E' IL MAGGIORE E QUALE E' IL MINORE"<<endl;
    cout<<endl<<"Quanti numeri vuoi inserire? [>0] ";
    cin>>N;
    cout<<endl<<"Inserisci un numero: ";
    cin>>num_first;
    numMAX=num_first;
    numMIN=num_first;
    while (i<=N)
    {
        cout<<endl<<"Inserisci un numero: ";
        cin>>num;
        if (num>numMAX)
        {
            numMAX=num;
        }
        else
        {
            if (num<numMIN)
            {
                numMIN=num;
            }
        }
        i++;
    }
    cout<<endl<<"Il numero massimo tra quelli inseriti e': "<<numMAX<<endl;
    cout<<endl<<"Il numero minimo tra quelli inseriti e': "<<numMIN<<endl;
}





