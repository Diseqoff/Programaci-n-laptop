#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i = 0;
    char letras1[] = {'s','t','n','p','r'};
    char letras2[] = {'x','h','v','m','b'};
    char letras3[10];

    for(i = 0 ; i<5 ; i++ )
    {
        letras3[i] = letras1[i];
    }
    for(i = 5 ; i<10 ; i++ )
    {
        letras3[i] = letras2[i-5];
    }
    for(i = 0; i<10 ; i++ )
    {
        cout<<(i+1)<<" -->"<<letras3<<endl;
    }


    getch ();
    return 0;
}