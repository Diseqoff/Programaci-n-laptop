#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero1[100], numero2[100], n = 0, i = 0, a = 0;

    cout<<"Digite la cantidad de elementos que tendra el arreglo: ";
    cin>>n;

    while(n <= 0)
    {
        cout<<"La cantidad no puede ser 0 o negativo, digite de nuevo la cantidad de elementos: ";
        cin>>n;
    }

    for(i = 0 ; i < n ; i++ )
    {
        cout<<(i+1)<<". Digite el valor: ";
        cin>>numero1[i];
    }
    
    for(i = 0 ; i < n ; i++)
    {
        numero2[i] = (2*numero1[i]);
    }

    for(i = 0; i < n ; i++)
    {
        cout<<(i+1)<<"-->"<<numero2[i]<<endl;
    }

    getch();
    return 0;
}