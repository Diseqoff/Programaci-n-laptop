#include <iostream>
using namespace std;

int main()                                                    //Programa que ejecute una estadistica 
{
    int i = 1, aprobado = 11, n1 = 0, n2 = 0, n3 = 0, Ntodo = 0, Nuno = 0, Nult = 0;

    for (i ; i <= 5 ; i++)
    {
        cout<<"\nAlumno "<<i<<endl; 
        cout<<"\nDigite la 1ra nota del examen: ";                           //Primera nota del examen
        cin>>n1;

        cout<<"\nDigite la 2da nota del examen: ";                           //Segunda nota del examen
        cin>>n2;

        cout<<"\nDigite la 3ra nota del examen: ";                           //Tercera nota del examen
        cin>>n3;

        if( (n1 >= aprobado) && (n2 >= aprobado) && (n3 >= aprobado) )
        {
            Ntodo +=1;
        }
        if ( (n1 >= aprobado) || (n2 >= aprobado) || (n3 >= aprobado))
        {
            Nuno +=1;
        }
        if ( n3 >= aprobado )
        {
            Nult +=1;
        }
    }

    cout<<"\nAlumnos que aprobaron todos los examenes: "<<Ntodo;
    cout<<"\nAlumnos que aprobaron almenos un examene: "<<Nuno;
    cout<<"\nAlumnos que aprobaron el ultimo examen: "<<Nult;



    return 0;
}