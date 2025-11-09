#include <iostream>
using namespace std;

int main ()                                                 //Programa que sume valores de 1+2+3+4... +n
{
    int n = 0, suma = 0, i = 1;

    cout<<"Digite el n de elementos que desea sumar: ";
    cin>>n;

    for(i ; i <= n ; i += 1)
    {
        suma += i;
    }
    
    cout<<"El resultado es: "<<suma;





    return 0;
}
