#include<iostream>

using namespace std;

int main()                          //Programa que ejecute el resultado de la suma de los factoriales
{                                                                                   // 1!+2!+3!+...+n!
    double n, i = 1, suma = 0, producto = 1;

    cout<<"Digite el numero de variables de la suma de factoriales: ";
    cin>>n;

    if(n == 0)
    {
        cout<<"Ese valor no es admitible en la operacion";
    }
    else if(n < 0)
    {
        cout<<"Ese valor no es admitible en la operacion";
    }
    else
    {
        for( i ; i <= n ; i += 1)
        {
            producto *= i;
            suma += producto;
        }

        cout<<"El resultado: "<<suma;
    }







    return 0;
}