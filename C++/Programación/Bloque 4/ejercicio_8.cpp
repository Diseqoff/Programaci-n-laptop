#include <iostream>
#include <conio.h>

using namespace std;

int main()                                              //Programa que sume valores de 1+3+5+7+.... +2n-1
{
    int n = 0, i = 1, suma = 1, resultado = 0;

    cout<<"Digite n elementos que desea sumar: ";
    cin>>n;

    for( i ; i<=n ; i +=1 )
    {
        resultado += suma;
        suma +=2;
    }

    cout<<"El resultado es: "<<resultado;



    getch();
    return 0;
}