#include<iostream>

using namespace std;

int main()
{
    int N1, N2;

    cout<<"Digite 2 numeros: "; cin>>N1>>N2;

    if(N1 == N2)
    {
        cout<<"\nAmbos numeros son iguales";
    }
    else if(N1 > N2)
    {
        cout<<"\nEl numero mayor es: "<<N1;
    }
    else
    {
        cout<<"\nEl numero mayor es: "<<N2;
    }



    return 0;
}