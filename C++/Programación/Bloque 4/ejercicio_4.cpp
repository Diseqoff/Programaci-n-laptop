#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float  tiempo = 0, temp_ext = 0, temp_max = 0, temp_min, suma = 0, temp_media = 0;

    cout<<"Digite la temperatura exterior: ";
    cin>>temp_ext;

    temp_min = temp_ext;

    for ( tiempo = 4 ; tiempo <=24 ; tiempo +=4)
    {
        suma += temp_ext;
        temp_ext +=8;
        
    }

    temp_max = temp_ext;
    temp_media = suma/6;

    cout<<"\nLa temperatura media es: "<<temp_media<<endl;
    cout<<"La temperatura mas alta es: "<<temp_max<<endl;
    cout<<"La temperatura mas baja fue: "<<temp_min<<endl;
    
 
    getch ();
    return 0;
}