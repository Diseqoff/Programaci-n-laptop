#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{   
    int suma = 0, cuadrado = 0, n = 1;

    for (n = 1 ; n <= 10 ; n += 1 )
    {
        cuadrado = n*n;
        suma += cuadrado;
    }

    cout<<"La sumatoria de cada uno de los 10 primero numeros al cuadrado es: "<<suma<<endl;
    cout<<"\n\n";


    system ("pause");
    return 0;
}