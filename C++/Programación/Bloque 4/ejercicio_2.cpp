#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n = 0, conteo = 0;

    do
    {
        cout<<"Digite un numero: ";
        cin>>n;

        if ( n > 0)
        {
            conteo += 1;
        }

    }
    while ( n != 0 );

    cout<<"\nNumero de valores mayores a 0 es : "<<conteo;

    getch();
    return 0;
}