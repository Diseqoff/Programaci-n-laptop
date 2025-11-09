#include<iostream>

using namespace std;

int main()
{
    int Numero, Unidades, Decenas, Centenas, Millar;  //1562

    cout<<"Digite el numero que desea transformar a numeros romanos: "; cin>>Numero;

    Unidades = Numero%10; Numero /= 10;         // Unidades = 2   Numero = 156
    Decenas = Numero%10; Numero /= 10;          // Decenas = 6    Numero = 15
    Centenas = Numero%10; Numero /= 10;         // Centenas = 5    Numero = 1
    Millar = Numero%10; Numero /= 10;           // Millar = 1     Numero = 0

    cout<<"\nEl numero romano es: "; 
    switch(Millar)
    {
        case 1: cout<<"M"; break;
        case 2: cout<<"MM"; break;
        case 3: cout<<"MMM"; break;
    } 
    switch(Centenas)
    {
        case 1: cout<<"C"; break;
        case 2: cout<<"CC"; break;
        case 3: cout<<"CCC"; break;
        case 4: cout<<"CD"; break;
        case 5: cout<<"D"; break;
        case 6: cout<<"DC"; break;
        case 7: cout<<"DCC"; break;
        case 8: cout<<"DCCC"; break;
        case 9: cout<<"CM"; break;
    }
    switch(Decenas)
    {
        case 1: cout<<"X"; break;
        case 2: cout<<"XX"; break;
        case 3: cout<<"XXX"; break;
        case 4: cout<<"XL"; break;
        case 5: cout<<"L"; break;
        case 6: cout<<"LX"; break;
        case 7: cout<<"LXX"; break;
        case 8: cout<<"LXXX"; break;
        case 9: cout<<"XC"; break;
    }
    switch(Unidades)
    {
        case 1: cout<<"I"; break;
        case 2: cout<<"II"; break;
        case 3: cout<<"III"; break;
        case 4: cout<<"IV"; break;
        case 5: cout<<"V"; break;
        case 6: cout<<"VI"; break;
        case 7: cout<<"VII"; break;
        case 8: cout<<"VIII"; break;
        case 9: cout<<"IX"; break;
    }

    return 0;
}