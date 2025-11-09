#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    double x, y, Resultado = 0;

    cout<<"Digite el valor de x: "; cin>>x;
    cout<<"Digite el valor de y: "; cin>>y;

    Resultado = (sqrt(x))/(pow(y,2)-1);

    cout.precision(3);
    cout<<"\nEl resultado es: "<<Resultado;

    return 0;
}