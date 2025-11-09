#include<iostream>
using namespace std;
int main()
{
    int Numero;

    cout<<"Digite un numero del 1-5: "; cin>>Numero;

    switch(Numero)
    {
        case 1: cout<<"\nEl numero es: 1"; break;
        case 2: cout<<"\nEl numero es: 2"; break;
        case 3: cout<<"\nEl numero es: 3"; break;
        case 4: cout<<"\nEl numero es: 4"; break;
        case 5: cout<<"\nEl numero es: 5"; break;
        default: cout<<"\nEl numero no esta en el rango de 1-5"; break;
    }
    return 0;
}
