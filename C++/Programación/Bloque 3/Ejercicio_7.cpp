#include<iostream>

using namespace std;

int main()
{
    int Edad;

    cout<<"Digite su edad: "; cin>>Edad;

    if (Edad >=18 && Edad <= 25)
    {
        cout<<"\nSu edad esta en el rango de [18-25]";
    }
    else
    {
        cout<<"\nSu edad NO esta en el rango de [18-25]";
    }



    return 0;
}