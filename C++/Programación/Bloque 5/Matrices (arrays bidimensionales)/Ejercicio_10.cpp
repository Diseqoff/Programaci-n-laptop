#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numeros[3][3], fila = 3, columna = 3;
    
    for(int a=0 ; a<fila ; a++ )
    {
        for(int b=0 ; b<columna ; b++ )
        {
            cout<<"Digite el numero ["<<a<<"]["<<b<<"]: ";
            cin>>numeros[a][b];
        }
    }

    for(int a=0 ; a<fila ; a++ )
    {
        for(int b=0 ; b<columna ; b++ )
        {
            if( a == b )
            {
                cout<<numeros[a][b];
            }
            else
            {
                cout<<"0";
            }
        }
        cout<<endl;
    }


    getch ();
    return 0;
}