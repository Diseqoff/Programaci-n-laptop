#include<iostream>
using namespace std;
int main()
{
    float Practica, Teorica, Participación, Nota_final;

    cout<<"Digite el valor de la nota de practica: "; cin>>Practica;
    cout<<"Digite el valor de la nota de teorica: "; cin>> Teorica;
    cout<<"Digite el valor de la nota de participacion: "; cin>>Participación;

    Practica *= 0.30;
    Teorica *= 0.60;
    Participación *= 0.10;
    Nota_final = Practica + Teorica + Participación;

    cout<<"\nLa nota final es: "<<Nota_final<<endl;

    return 0;
}