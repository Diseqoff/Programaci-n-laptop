#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero[100], n = 0, i = 0;

    cout<<"Digite la cantidad de elementos que va a tener el arreglo: ";
    cin>>n;

    for ( i = 0 ; i<n ; i++ )
    {
        cout<<"Digite el valor de "<<"numero["<<i<<"]: ";
        cin>>numero[i];
    }

    for ( i = 0 ; i<n ; i++ )
    {
        cout<<i<<" --> "<<numero[i]<<endl;
    }


    getch ();
    return 0;
}