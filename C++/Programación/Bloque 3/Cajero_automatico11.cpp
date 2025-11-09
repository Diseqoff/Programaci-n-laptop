#include<iostream>

using namespace std;

int main()
{
    int Dinero_inicial = 1000, Opción, Ahorro, Necesidad, Dinero_nuevo;

    cout<<"\tBienvenido a su Cajero Virtual"<<endl;
    cout<<"\n1. Depositar dinero a su cuenta"<<endl;
    cout<<"2. Retirar dinero de su cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"\nElija una opcion: "; cin>>Opción;

    switch(Opción)
    {
        case 1: cout<<"\nDigite la cantidad de dinero que desea depositar a su cuenta: "; cin>>Ahorro;

        Dinero_nuevo = Dinero_inicial + Ahorro;

                cout<<"\nDinero actual de la cuenta: "<<Dinero_nuevo; break;
    
        case 2: cout<<"\nDigite la cantidad de dinero que desea retirar de su cuenta: "; cin>>Necesidad;

         if (Necesidad > Dinero_inicial)
        {
                cout<<"\nNO tiene esa cantidad de dinero";
        }
        else
        {
        Dinero_nuevo = Dinero_inicial - Necesidad;

                cout<<"\nDinero actual de la cuenta: "<<Dinero_nuevo; 
        } break;
        case 3: break;
    }

    return 0;
}