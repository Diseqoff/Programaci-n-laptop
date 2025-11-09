#include <iostream>

using namespace std;

int main()
{
    char Letra;

    cout<<"Digite una vocal: "; cin>>Letra;

    switch(Letra)
    {
        case 'a': cout<<"\nEs una vocal minuscula"; break;
        case 'e': cout<<"\nEs una vocal minuscula"; break;
        case 'i': cout<<"\nEs una vocal minuscula"; break;
        case 'o': cout<<"\nEs una vocal minuscula"; break;
        case 'u': cout<<"\nEs una vocal minuscula"; break;

        case 'A': cout<<"\nEs una vocal mayuscula"; break;
        case 'E': cout<<"\nEs una vocal mayuscula"; break;
        case 'I': cout<<"\nEs una vocal mayuscula"; break;
        case 'O': cout<<"\nEs una vocal mayuscula"; break;
        case 'U': cout<<"\nEs una vocal mayuscula"; break;

        default : cout<<"\nNo es una vocal"; break;
    }

    return 0;
}