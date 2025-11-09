#include<iostream>

using namespace std;

int main()
{
    int Numero;

    cout<<"Digite un numero: "; cin>>Numero;

    if (Numero == 0)
    {
        cout<<"\nEl numero es 0";
    }
    else if (Numero%2 == 0)
    {
        cout<<"\nEl numero es par";
    }
    else 
    {
        cout<<"\nEl numero es impar";
    }


    return 0;
}