#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero[] = {1,5,3,2,9};
    int producto = 1 , i = 0;

    for( i ; i<5 ; i++)
    {
        producto *= numero[i];
    }

    cout<<"El producto del vector es: "<<producto<<endl;


    getch();
    return 0;
}