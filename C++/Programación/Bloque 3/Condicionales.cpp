#include<iostream>
using namespace std;
int main ()
{
    int Numero, Dato = 5;

    cout<<"Digite un numero: "; cin>>Numero;

    if(Numero == Dato)         // ==, !=, <=, >=, <, >,
    {
        cout<<"\nEl numero es igual a 5";
    }
    else if(Numero ==0)
    {
        cout<<"\nEl numero es igual a 0";
    }
    else 
    {
        cout<<"\nEl numero es distinto a 5 y 0";
    }
    
    return 0;
}