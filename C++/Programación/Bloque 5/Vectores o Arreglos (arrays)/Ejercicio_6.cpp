#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero[100], i = 0, n = 0, suma = 0, mayor = 0, a = 0;

    cout<<"Digite la cantidad de elementos que tendra el arreglo: ";
    cin>>n;

    while(n <= 0)
    {
        cout<<"\nLa cantidad de elementos del arreglo no puede ser negativo o 0, digite de nuevo la cantidad de elementos: ";
        cin>>n;
    }

    for( i = 0; i<n ; i++)
    {
        cout<<(i+1)<<". Digite el numero: ";
        cin>>numero[i];

        if( a == 0)
        {
            if ( numero[i] > 0 || numero[i] < 0)
            {
                mayor = numero[i];
                a = 1;
            }
            else
            {
                a = 0;
            }
        }
        else
        {
            if(numero[i] > mayor)
            {
                mayor = numero[i];
            }
        }

        suma += numero[i];
    }

    suma = suma - mayor;

    if(suma == mayor)
    {
        cout<<"Existe un numero cuyo valor es la suma del resto de numeros: "<<suma<<endl;
    }
    else
    {
        cout<<"No existe un numero cuyo valor es la suma del resto de numeros :,v";
    }





    getch ();
    return 0;
}