#include <iostream>
#include <stdlib.h>

using namespace std;

int main()                                              //objetivo x^y sin usar comando pow
{
    int x , y , resultado ;

    do
    {
        cout<<"Digite un numero positivo para x: ";
        cin>>x;
    }
    while ( x <= 0);

    do
    {
        cout<<"Digite su exponente positivo para y: ";
        cin>>y;
    }
    while ( y <= 0);

    resultado = x;

    while ( y > 1)
    {
        y -=1;
        resultado = resultado*x;
    }

    cout<<"\nEl resultado es: "<<resultado;
    cout<<"\n\n";

    system ("pause");
    return 0;
}