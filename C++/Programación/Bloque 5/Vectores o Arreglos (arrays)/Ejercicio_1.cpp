#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero[] = {1,2,3,4,5};
    int suma = 0, i = 0;

    for( i ; i<5 ; i++)
    {
        suma +=numero[i];
    }

    cout<<"La suma del vector es: "<<suma<<endl;


    getch();
    return 0;
}