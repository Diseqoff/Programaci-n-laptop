#include<iostream>
using namespace std;

int main()                                  //Serie de fugonacci 1 1 2 3 5 8 .... n
{
    int n, i = 1, x = 0, y = 1, z = 0; 

    cout<<"Digite la cantidad de elementos: ";
    cin>>n;
    cout<<"1 ";

    for(i ; i < n; i += 1)
    {
        z = x + y;
        x = y;
        y = z;

        cout<<z<<" ";
    }


    return 0 ;
}