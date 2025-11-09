#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero, opcion;

    cout<<"\tOrdenamiento de numeros"<<endl;
    cout<<"\n1.Ascendente (hasta el 20)"<<endl;
    cout<<"2.Descendente (hasta el 0)"<<endl;
    cout<<"3.Salir"<<endl;

    cout<<"\nElija una opcion: ";
    cin>>opcion;

    switch(opcion)
    {
        case 1:
        
            cout<<"Digite un numero: ";
            cin>>numero;

            if (numero > 20)
            {
                cout<<"\nEl digite es mayor que 20";
            }
            else 
            {
                for ( numero ; numero <= 20; numero += 1)
                {
                    cout<<numero<<endl;
                }
            }
            break;

        case 2:

            cout<<"Digite un numero: ";
            cin>>numero;

            if (numero < 0)
            {
                for( numero ; numero <= 0; numero += 1 )
                {
                    cout<<numero<<endl;
                }
            }
            else
            {
                for( numero ; numero >= 0; numero -=1 )
                {
                    cout<<numero<<endl;
                }
            }
            break;
        
        case 3:

            return 0;
            break;

        default:

            cout<<"\nNo existe esa opcion :(";
            break;
    }

    getch ();
    return 0;
}