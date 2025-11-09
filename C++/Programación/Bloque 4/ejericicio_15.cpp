#include<iostream>
#include<time.h>

using namespace std;

int main()
{
    int n, numero, nale, conteo = 0;

    srand(time(NULL));                               //Genera un numero random
    nale = 1 + rand() % (100);                       //Limite inf + rand() % (Limite sup + 1 - Limite inf)

    cout<<"\tBIENVENIDO AL JUEGO DEL NUMERO MAGICO :)"<<endl;
    cout<<"\n1.Empezar juego"<<endl;
    cout<<"2.Salir"<<endl;
    cout<<"\nElija una opcion: ";
    cin>>numero;

    switch (numero)
    {
        case 1: 
            while( n != nale)
            {
                cout<<"\nDigite un numero: ";
                cin>>n;

                if(n > nale)
                {
                    cout<<"El numero es menor\n";
                }
                if (n < nale)
                {
                    cout<<"El numero es mayor\n";
                }
                conteo +=1;
            }

            cout<<"\nFELICIDADES!!! ENCONTRATE AL NUMERO MAGICO :O"<<endl;
            cout<<"El numero es: "<<nale;
            cout<<"\nNumero de intentos: "<<conteo;
            break;
        case 2: break;




    }




    return 0;
}