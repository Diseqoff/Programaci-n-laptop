#include <iostream>

using namespace std;

int main()
{
    int n, suma = 0, i = 1; 

    cout<<"Digite la cantidad de valores: ";
    cin>>n;

    for(i ; i <= n; i += 1)
    {
        if(i % 2 == 0)
        {
            suma -= i;
        }
        else
        {
            suma += 1;
        }
    }

    cout<<"El resultado es: "<<suma;



    return 0;
}