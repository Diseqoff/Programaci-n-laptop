#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int a,b,c;

    cout<<"Digite el valor del cateto 1: "; cin>>a;
    cout<<"Digite el valor del cateto 2: "; cin>>b;

    c = sqrt( pow(a,2) + pow(b,2) );

    cout<<"\nEl valor de la hipotenusa es: "<<c;

    return 0;
}