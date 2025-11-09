#include<iostream>

using namespace std;

int main()                                      //Programa que ejecute el resultado de la suma de 2^n
{                                                                               //2^1+2^2+2^3+...+2^n
    int n = 0, t = 1, suma = 0, producto = 1;

    cout<<"Digite el numero de variables que desea sumar: ";
    cin>>n;

    if(n == 0)
    {
        cout<<"Ese valor no es admitible";
    }
    else if ( n < 0)
    {
        cout<<"Ese valor no es admitible";
    }
    else
    {
        do
        {
            producto *= 2;
            t += 1;
            suma += producto;
        }
        while(t <= n);

        cout<<"El resultado es: "<<suma;    
    }
    return 0;
}