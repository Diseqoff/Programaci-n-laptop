#include <iostream>                             //Tabla de multiplicar
#include <stdlib.h>

using namespace std;

int main()
{
    int numero = 0, t = 0;

    do 
    {
        cout<<"Digite un numero: ";
        cin>>numero;
    }
    while ( (numero < 1) || (numero > 10) );

    for ( t = 0 ; t <= 20 ; t += 1 )
    {
        cout<<numero<<" * "<<t<<" = "<<numero*t<<endl; 
    }

    system ("pause");
    return 0;
}