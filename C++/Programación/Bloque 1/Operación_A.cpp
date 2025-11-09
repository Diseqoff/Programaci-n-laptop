#include<iostream>
using namespace std;
int main()
{
    int N1,N2,Suma = 0,Resta = 0,Multiplicacion = 0,Division = 0;

    cout<<"Digita un numero: "; cin>>N1;
    cout<<"\nDigita un numero: "; cin>>N2;

    Suma = N1 + N2; 
    Resta = N1 - N2; 
    Multiplicacion = N1 * N2; 
    Division = N1 / N2;

    cout<<"\nLa suma es: "<<Suma<<endl;
    cout<<"La resta es: "<<Resta<<endl;
    cout<<"La multiplicacion es: "<<Multiplicacion<<endl;
    cout<<"La division es: "<<Division<<endl;
       

    return 0;

}