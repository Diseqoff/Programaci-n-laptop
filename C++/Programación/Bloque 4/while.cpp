#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int  i = 0, opcion = 0;
    // i = i; 

    cout<<"\tOrdenamiento de numeros"<<endl;
    cout<<"\n1.Ascendente (Hasta el 20)"<<endl;
    cout<<"2.Descendente (Hasta el 0)"<<endl;
    cout<<"3.Salir"<<endl;

    cout<<"\nElija una opcion: ";
    cin>>opcion;


    switch(opcion)
    {
        case 1: 
            cout<<"\nDigite un numero: ";
            cin>>i;

            if (i > 20)
            {
                cout<<"\nEl numero es mayor que 20";
            }
            else //i <= 20
            {
                while(i <= 20)
                {
                    cout<<i<<endl;
                    i += 1;
                }
            }
            break;

        case 2:
            cout<<"\nDigite un numero: ";
            cin>>i;

            while (i >= 0)
            {
                cout<<i<<endl;
                i -=1;
            }
            break;

        case 3:
            return 0;
            break;
        
        default:
            cout<<"No existe esa opcion";
            break;
    }

    getch();
    return 0;
}