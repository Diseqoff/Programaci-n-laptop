#include<iostream>

using  namespace std;

int main()
{
    int a, b, c, d;

    cout<<"Digite 3 valores: "; cin>>a>>b>>c;
    cout<<"\nPor ultimo digite el valor que desea saber si es igual a alguno de los 3 valores anteriores: "; cin>>d;

    if( (a == d) && (b == d) && (c == d))
    {
        cout<<"\nEl ultimo valor si es igual a uno de los 3 valores anteriores";
    }
    else if(a == d)
    {
        cout<<"\nEl ultimo valor si es igual a uno de los 3 valores anteriores";        
    }
    else if(b == d)
    {
        cout<<"\nEl ultimo valor si es igual a uno de los 3 valores anteriores";
    }
    else if(c == d)
    {
        cout<<"\nEl ultimo valor si es igual a uno de los 3 valores anteriores";
    } 
    else
    {
        cout<<"\nEl ultimo valor NO es igual a uno de los 3 valores anteriores";
    }

    return 0;
}