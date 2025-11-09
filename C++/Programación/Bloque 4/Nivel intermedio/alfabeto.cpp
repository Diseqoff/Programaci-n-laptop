#include <iostream>
#include <time.h>
#include <conio.h>
#include <Cstring>

using namespace std;

int main()
{
    int dato, opcion, posicion, valor_ascii, i; 
    char letranum ;
    char respuesta1[10] ;
    char respuesta2[10] ;
    char respuesta3[10] ;
    char respuesta4[10] ;
    char stop[5] = "stop";
    string binario;
    string Srespuesta4;

    cout<<"\tBienvenido a la letra magica :D"<<endl;
    cout<<"\n1. Modo Facil :)"<<endl;
    cout<<"2. Modo medio :|"<<endl;
    cout<<"3. Modo dificil :c"<<endl;
    cout<<"4. Modo extremo >:c"<<endl;
    cout<<"5. Salir del juego"<<endl;
    cout<<"\nElija una opcion: ";

    cin>>opcion; 

    switch(opcion)
    {
        case 1: 
            cout<<"\nReglas: "<<endl;
            cout<<"Tienes que adivinar que letra le corresponde, en mayuscula, al numero aletorio que sale en la pantalla"<<endl;
            cout<<"El juego es de forma infinita hasta escribir (stop) en la respuesta: stop, de esa forma el juego termina"<<endl;
            cout<<"El numero de posicion de las letras estan en el abecedario ingles SUERTE"<<endl;

            while(true)
            {
                srand(time(NULL));                  //Genera un numero aletorio
                dato = 1 + rand() % (26);            //Numero del 1 al 26
                letranum = 'A' + (dato - 1);         //Para identificar la posicion del numero

                cout<<"\nNumero ramdon: "<<dato<<endl;
                cout<<"\nDigite la respuesta: ";

                cin>>respuesta1;

                if(strcmp(respuesta1, stop) == 0)
                {
                    cout<<"Vuelva pronto :D";
                    break; 
                }
                else if(strlen(respuesta1) == 1 && respuesta1[0] == letranum)
                {
                    cout<<"Correcto sigue asi :)"<<endl;
                }
                else
                {
                    cout<<"Incorrecto sigue intentando :c"<<endl;
                }
            }
        break;

        case 2: 
            cout<<"\nReglas: "<<endl;
            cout<<"Tienes que adivinar que numero le corresponde a la letra aletorio que sale en la pantalla"<<endl;
            cout<<"El juego es de forma infinita hasta escribir (stop) en la respuesta: stop, de esa forma el juego termina"<<endl;
            cout<<"El numero de posicion de las letras estan en el abecedario ingles SUERTE"<<endl; 

            while(true)
            {
                srand(time(NULL));                      //genera un numero aletorio
                dato = 1 +rand() % (26);                //Numero del 1 al 26
                letranum = 'A' + (dato - 1);            //Letra aletoria

                cout<<"\nLetra ramdon: "<<letranum<<endl;
                cout<<"\nDigite la respuesta: ";
                
                cin>>respuesta2;

                if(strcmp(respuesta2,stop) == 0)
                {
                    cout<<"Vuelva pronto :D";
                    break; 
                }
                else
                {
                    posicion = atoi(respuesta2);
                    
                    if(posicion == dato)
                    {
                        cout<<"Correcto sigue asi :)"<<endl;
                    }
                    else
                    {
                        cout<<"Incorrecto sigue intentando :c"<<endl;
                    }
                }
                
            }
        break;

        case 3: 
            cout<<"\nReglas: "<<endl;
            cout<<"Tienes que adivinar que letra le corresponde al numero binario aletorio que sale en la pantalla"<<endl;
            cout<<"El juego es de forma infinita hasta escribir (stop) en la respuesta: stop, de esa forma el juego termina"<<endl;
            cout<<"El numero de posicion de las letras estan en el abecedario ingles SUERTE"<<endl; 

            while(true)
            {
                srand(time(NULL));
                dato = 1 + rand() % (26 + 1 - 1);
                letranum = 'A' + (dato - 1);

                valor_ascii = static_cast<int>(letranum);

                cout<<"\nEl numero binario aletorio es: ";

                for( i = 7 ; i >= 0 ; i--)
                {
                    cout<< ((valor_ascii >> i) & 1 );
                }

                cout<<"\nDigite la respuesta: ";
                cin>>respuesta3;

                if(strcmp(respuesta3,stop) == 0)
                {
                    cout<<"Vuelva pronto tilin :v";
                    break;
                }
                else
                {
                    if(strlen(respuesta3) == 1 && respuesta3[0] == letranum)
                    {
                        cout<<"Muy bien sigue asi :D"<<endl;
                    }
                    else
                    {
                        cout<<"Incorrecto sigue intentando tilin pipip :c"<<endl;
                    }
                }


            }
        break;

        case 4: 
            cout<<"\nReglas: "<<endl;
            cout<<"Tienes que adivinar que numero en binario le corresponde a la letra aletorio que sale en la pantalla"<<endl;
            cout<<"El juego es de forma infinita hasta escribir (stop) en la respuesta: stop, de esa forma el juego termina"<<endl;
            cout<<"El numero de posicion de las letras estan en el abecedario ingles SUERTE"<<endl; 

            while(true)
            {
                srand(time(NULL));
                dato = 1 + rand()%(26 + 1 -1 );
                letranum = 'A' + (dato - 1 );

                valor_ascii = static_cast<int>(letranum);
                

                cout<<"\nLetra ramdon: "<<letranum<<endl;
                cout<<"\nNumero binario: ";
                
                cin>>respuesta4;

                if(strcmp(respuesta4,stop) == 0)
                {
                    cout<<"\nVuelva pronto :D"<<endl;
                    break;                    
                }
                else
                {
                    posicion = atoi(respuesta4);

                    for(i = 7 ; i >= 0 ; i--)
                    {
                        Srespuesta4 += to_string( (posicion) >> i & 1 );
                        binario += to_string( (valor_ascii) >> i & 1 );
                    }

                    if( Srespuesta4 == binario )
                    {
                        cout<<"Muy bien sigue asi :D"<<endl;
                    }
                    else
                    {
                        cout<<"Incorrecto sigue intentando :c"<<endl;
                    }
                }
            } 
        break;

        case 5: 
            cout<<"Vuelva pronto :p";
            break; 

        default : 
            cout<<"No existe esa opcion"; 
            break;



    }






    getch ();
    return 0;
}