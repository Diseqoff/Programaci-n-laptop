#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int Numero, Opción, Resultado;

    cout<<"\tBienvenido al Menu Matematico"<<endl;
    cout<<"\n1. Cubo del numero"<<endl;
    cout<<"2. El numero es par o impar?"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"\nEliga una opcion: "; cin>>Opción;

    switch(Opción)
    {
        case 1: 
                cout<<"\nDigite un numero: "; cin>>Numero;

                Resultado = pow(Numero,3);

                cout<<"\nEl resultado es: "<<Resultado; 
                break;
        
        case 2: 
                
                cout<<"\nDigite un numero: "; 
                cin>>Numero;
                cout<<Numero;

                if ( Numero == 0)
                {
                        cout<<"\nEl numero es 0";
                }
                else if ( Numero%2 == 0)
                {
                        cout<<"\nEl numero es par";
                }
                else
                {
                        cout<<"\nEl numero es impar";
                }       break;

        case 3: 
                break;

        default : 
                cout<<"\nNo existe esa opcion";

                 
    }

    return 0;
}