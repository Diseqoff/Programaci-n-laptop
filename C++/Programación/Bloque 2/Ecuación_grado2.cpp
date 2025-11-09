#include<iostream>
#include<math.h>

using namespace std;

int main ()
{
    double a, b, c, Raiz_1 = 0, Raiz_2 = 0;

    cout<<"Digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"Digite el valor de c: "; cin>>c;

    Raiz_1 = ( ( -b ) + ( sqrt( pow(b,2) - (4*a*c) ) ) )/(2*a);
    Raiz_2 = ( ( -b ) - ( sqrt( pow(b,2) - (4*a*c) ) ) )/(2*a);

    cout<<"\nLa raiz 1 es: "<<Raiz_1<<endl;
    cout<<"La raiz 2 es: "<<Raiz_2;


    return 0;
}