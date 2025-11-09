#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, Resultado = 0;

    cout<<"Digite el valor a: "; cin>>a;
    cout<<"Digite el valor b: "; cin>>b;
    cout<<"Digite el valor c: "; cin>>c;
    cout<<"Digite el valor d: "; cin>>d;

    Resultado = (a+b) / (c+d);

    cout<<"\nEl resultado es: "<<Resultado;
    
    return 0;
}