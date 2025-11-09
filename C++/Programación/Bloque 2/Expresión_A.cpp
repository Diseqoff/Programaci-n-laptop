#include <iostream>
using namespace std;
int main()
{
    double a, b, Resultado = 0;

    cout<<"Digite el valor a: "; cin>>a;
    cout<<"Digite el valor b: "; cin>>b;

    Resultado = (a/b) + 1;

    cout.precision(5);
    cout<<"\nEl resultado es: "<<Resultado;


    return 0;

}