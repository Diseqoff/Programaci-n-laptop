#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numeros[100][100], fila, columna;

    cout<<"Digite el numero de filas: ";
    cin>>fila;
    cout<<"Digite el numero de columnas: ";
    cin>>columna;

    for( int a=0 ; a<fila ; a++ )                                   //Entrada de la matriz
    {
        for( int b=0 ; b<columna ; b++ )
        {
            cout<<"Digite el numero ["<<a<<"]["<<b<<"] : ";
            cin>>numeros[a][b];
        }
    }

    for( int a=0 ; a<fila ; a++ )
    {
        for( int b=0 ; b<columna ; b++ )
        {
            cout<<numeros[a][b];
        }
        cout<<endl;
    }





    getch ();
    return 0;
}