#include<iostream>
using namespace std;
int main()
{
    int x,y,aux;

    cout<<"Digite el valor de x: "; cin>>x;    
    cout<<"Digite el valor de y: "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"\nEl nuevo valor de x: "<<x<<endl;
    cout<<"El nuevo valor de y: "<<y;
    
    return 0;
}