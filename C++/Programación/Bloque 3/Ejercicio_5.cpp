#include<iostream>

using namespace std;

int main()
{
    char Letra;

    cout<<"Digite una vocal minuscula: "; cin>>Letra;

    switch (Letra)
    {
        case 'a': cout<<"\nEs una vocal minuscula"; break;
        case 'e': cout<<"\nEs una vocal minuscula"; break;
        case 'i': cout<<"\nEs una vocal minuscula"; break;
        case 'o': cout<<"\nEs una vocal minuscula"; break;
        case 'u': cout<<"\nEs una vocal minuscula"; break;
        default : cout<<"\nNO es una vocal minuscula"; break;
    }



    return 0 ;
}