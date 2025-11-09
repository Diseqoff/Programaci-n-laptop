#include<iostream>

using namespace std;

int main ()                                       //Programa que ejecute el resultado de un factorial n!
{
    int n, a = 1 , producto = 1;

    cout<<"Digite el valor del factorial: ";
    cin>>n;

    if (n == 0)
    {
        cout<<"El resultado es: 1";
    }
    else if (n < 0)
    {
        cout<<"Error, no existe";
    }
    else 
    {
        while (a <= n)
    {
        producto *=a;
        a += 1;
    }

    cout<<"El resultado es: "<<producto;
    
    }
    
    

    return 0;
}