#include<iostream>

using namespace std;

int main()                                      //Calcular el resultado de la operación 1-2+3-4+5-6+...+n
{
    int n, t = 1, i = 2, suma1 = 0, suma2 = 0, resultado1, resultado2;

    cout<<"Digitel el numero final de la operacion: ";
    cin>>n;

    if(n%2 == 0)
    {
        resultado1 = -(n/2);

        cout<<"El resultado es: "<<resultado1; 
    }
    else
    {
        for (t ; t <= n; t +=2)
        {
            suma1 += t;
        }
        for (i ; i < n; i +=2 )
        {
            suma2 += i;
        }

        cout<<"El resultado es: "<<suma1-suma2;
    }




    return 0;
}