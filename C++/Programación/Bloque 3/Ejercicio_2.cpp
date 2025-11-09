#include<iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout<<"Digite 3 numeros: "; cin>>a>>b>>c;

    if(a == b && a==c)
    {
        cout<<"\nLos numeros son iguales";
    }
    else if(a>b && a>c)
    {
        cout<<"\nEl numero mayor es: "<<a;
    }
    else if(b>a && b>c)
    {
        cout<<"\nEl numero mayor es: "<<b;
    }
    else 
    {
        cout<<"\nEl numero mayor es: "<<c;
    }


    return 0;
}