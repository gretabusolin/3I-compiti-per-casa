#include <iostream>
using namespace std;
int main()
{
    int n;// numero intero e minore di mille
    int i=1;// contatore ciclo do while
    cout<<"********************************************************************" << endl;
    cout<<" QUESTO PROGRAMMA VISUALIZZA IL NUMERO DI CENTINAIA, DECINE E UNITA'"<< endl;
    cout<<"********************************************************************" << endl;
    cout<<endl<< "Inserisci un numero: ";
    cin>>n;
    while (n>=1000)
    {
        cout<< "ERRORE! Il numero deve essere minore e diverso da 1000"<< endl;
        cout<< "Inserisci un numero: ";
        cin>>n;
    }

    do{
        if(i==1)
        {
            cout<<"Il numero di unita' e':"<<n%10<< endl;
            n=n/10;
        }
        if(i==2)
        {
            cout<<"Il numero di decine e':"<<n%10<< endl;
            n=n/10;
        }
         if(i==3)
        {
            cout<<"Il numero di continaia e':"<<n%10<< endl;
            n=n/10;
        }
        i++;
    }
    while(i<=3 && n!=0);
    return 0;
}
