#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero[100], n = 0, i = 0, mayor = 0, a = 0;

    cout<<"Digite la cantidad de elementos del arreglo: ";
    cin>>n;

    while( n <= 0)
    {
        cout<<"Las cantidades no pueden ser negativas o 0, porfavor vuelva a digitar la cantidad"<<endl;
        cout<<"Digite la cantidad de elementos del arreglo: ";
        cin>>n;
    }   

    for( i = 0 ; i < n ; i++ )
    {
        cout<<(i+1)<<". Digite el numero: ";
        cin>>numero[i];

        if( a == 0 )
        {
            if(numero[i] > 0 || numero[i] < 0)
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
    }

    cout<<"\nEl elemento mayor es: "<<mayor;    
    
    getch ();
    return 0;
}