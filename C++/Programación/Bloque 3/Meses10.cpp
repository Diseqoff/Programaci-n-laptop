#include<iostream>

using namespace std;

int main()
{
    int Mes;

    cout<<"Digite un numero del 1-12: "; cin>>Mes;

    switch(Mes)
    {
        case 1: cout<<"\nEl mes es enero"; break;
        case 2: cout<<"\nEl mes es febrero"; break;
        case 3: cout<<"\nEl mes es marzo"; break;
        case 4: cout<<"\nEl mes es abril"; break;
        case 5: cout<<"\nEl mes es mayo"; break;
        case 6: cout<<"\nEl mes es junio"; break;
        case 7: cout<<"\nEl mes es julio"; break;
        case 8: cout<<"\nEl mes es agosto"; break;
        case 9: cout<<"\nEl mes es septiembre"; break;
        case 10: cout<<"\nEl mes es octubre"; break;
        case 11: cout<<"\nEl mes es noviembre"; break;
        case 12: cout<<"\nEl mes es diciembre"; break;
        default : cout<<"\nEl numero que digito no pertenece a ningun mes"; break;
    }


    return 0;
}