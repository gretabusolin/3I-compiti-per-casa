#include <iostream>
using namespace std;
main ()
{
    int num=0;
    int I=1;
    int resto=0;

    cout<<"QUESTO PROGRAMMA VISUALIZZA I PRIMI 100 NUMERI PARI"<< endl<< endl;
    cout<<"I primi 100 numeri pari sono:";
    while (I<=100)
    {
       resto=num%2;
       if (resto==0)
       {
           cout<< " ";
           cout<<num<< "; ";
           I++;
       }
       num++;
    }
}
