#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void creatingDoor(int num[])
{
    cout<<"------------------------------------------"<<endl;

    int counter;
    int counter2;
    counter2 = 0;
    counter = 0;
    cout << endl
    << "|        ";
    for (int i = 0; i <= 83; i++)
    {

        printf("%c", num[i], num[i]);
        counter++;
        counter2++;
        if (counter2 == 7)
        {
            cout << "         ";
            counter2 = 0;
        }
        
        if (counter == 14)
        {
            cout << "|";
            cout << endl;
            counter = 0;
            cout << "|        ";
        }
    }
    cout <<endl<<endl<< "  1)Numero PAR. \t2) Numero IMPAR." << endl;
        cout<<"------------------------------------------";

}
int numeroRandom()
{
    int num, c;
    srand(time(NULL));
    
    for(c = 1; c <= 10; c++)
    {
        num = 1 + rand() % (11 - 1);
        return num;
    }
}
string PPT()
{
    int num;string ppt;
    srand(time(NULL));
    for (int c = 0; c < 10; c++)
    {
        num=1+rand()%(4-1);
    }
    if (num==1)
    {
        ppt="piedra";
    }else if (num==2)
    {
        ppt="papel";
    }else if (num==3)
    {
       ppt="tijera"; 
    }
    return ppt;
}
int main()
{   
    int acierto=0,fallo=0;
    //preguntas.. 
    

    if (acierto>=2)
    {
        int opc,der=0,vic=0,emp=0,juegos=0;string pptRand;
        do
        {
            cout<<"        MENU. "<<endl
            <<"Opcion 1: Piedra."<<endl
            <<"Opcion 2: Papel."<<endl
            <<"Opcion 3: Tijera."<<endl
            <<"Elije una de las 3 opciones: ";
            cin>>opc;
            switch (opc)
            {
            case 1:
                pptRand=PPT();
                if (pptRand=="piedra")
                {
                    cout<<"La maquina escogio: "<<pptRand<<endl
                    <<"Tu eleccion fue piedra."<<endl
                    <<"HAS EMPATADO!"<<endl;
                    emp++;
                    system("pause");
                }else if (pptRand=="papel")
                {
                    cout<<"La maquina escogio: "<<pptRand<<endl
                    <<"Tu eleccion fue piedra."<<endl
                    <<"HAS PERDIDO!"<<endl;
                    der++;
                    system("pause");
                }else if (pptRand=="tijera")
                {
                    cout<<"La maquina escogio: "<<pptRand<<endl
                    <<"Tu eleccion fue piedra."<<endl
                    <<"HAS GANADO!"<<endl;
                    vic++;
                    system("pause");
                }
                break;
            case 2:
                pptRand=PPT();
                if (pptRand=="piedra")
                {
                    cout<<"La maquina escogio: "<<pptRand<<endl
                    <<"Tu eleccion fue papel."<<endl
                    <<"HAS GANADO!"<<endl;
                    vic++;
                    system("pause");
                }else if (pptRand=="papel")
                {
                    cout<<"La maquina escogio: "<<pptRand<<endl
                    <<"Tu eleccion fue papel."<<endl
                    <<"HAS EMPATADO!"<<endl;
                    emp++;
                    system("pause");
                }else if (pptRand=="tijera")
                {
                    cout<<"La maquina escogio: "<<pptRand<<endl
                    <<"Tu eleccion fue papel."<<endl
                    <<"HAS PERDIDO!"<<endl;
                    der++;
                    system("pause");
                }
                break;
            case 3:
                pptRand=PPT();
                if (pptRand=="piedra")
                {
                    cout<<"La maquina escogio: "<<pptRand<<endl
                    <<"Tu eleccion fue tijeras."<<endl
                    <<"HAS PERDIDO!"<<endl;
                    der++;
                    system("pause");
                }else if (pptRand=="papel")
                {
                    cout<<"La maquina escogio: "<<pptRand<<endl
                    <<"Tu eleccion fue tijeras."<<endl
                    <<"HAS GANADO!"<<endl;
                    vic++;
                    system("pause");
                }else if (pptRand=="tijera")
                {
                    cout<<"La maquina escogio: "<<pptRand<<endl
                    <<"Tu eleccion fue tijeras."<<endl
                    <<"HAS EMPATADO!"<<endl;
                    emp++;
                    system("pause");
                }
                break;
            
            default:
                break;
            }  
            system("cls");  
            juegos++;
        } while (juegos!=3);
        cout<<"En estos 3 juegos, tus victorias fueron: "<<vic<<", tus empates fueron: "<<emp<<" tus derrotas fueron: "<<der<<"."<<endl
        <<"Tus porcentajes(%) son: "<<endl
        <<"Victoria: "<<vic*100/3<<"%."<<endl
        <<"Empate: "<<emp*100/3<<"%"<<endl
        <<"Derrota: "<<der*100/3<<"%"<<endl;
        system("pause");
    }else
    {
        int juegospar=0, derro=0,vict=0,nR,dec;
        do
        {
            cout << endl<<"Se generara un numero random, elige la puerta que creas que sera la opcion correcta:"<<endl;
            int num[] = {201, 203, 203, 203, 203, 203, 203, 203, 203, 203, 203, 203, 203, 187, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186,186, 186, 206, 206, 206, 206, 206,
                        206, 206, 206,206, 206, 206, 206, 206,
                        206, 186, 186, 186, 186, 186, 186, 186,  186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186,  186, 186, 186, 186, 186, 186, 186, 186,  186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186,  186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186};
            creatingDoor(num);
            cout << endl;
            cout << "Elige una puerta: ";
            cin >> dec;
            switch (dec)
            {
            case 1:
                    nR=numeroRandom();
                    if (nR%2==0)
                    {
                        cout<<"El numero generado es: "<<nR<<", haz tomado la decision correcta."<<endl;
                        vict++;
                    }else
                    {
                        cout<<"El numero generado es: "<<nR<<", haz tomado la decision incorrecta."<<endl;
                        derro++;
                    };
                    system("pause");
                    break;
            case 2:
                    nR=numeroRandom();
                    if (nR%2!=0)
                    {
                        cout<<"El numero generado es: "<<nR<<", haz tomado la decision correcta."<<endl;
                        vict++;
                    }else
                    {
                        cout<<"El numero generado es: "<<nR<<", haz tomado la decision incorrecta."<<endl;
                        derro++;
                    };
                    system("pause");
                    break;
            default:
                break;
            }
            system("cls");
            juegospar++;
        } while (juegospar!=3);
        cout<<"En estos 3 juegos tus victorias fueron: "<<vict<<", tus derrotas fueron: "<<derro<<"."<<endl;
        cout<<"Tus porcentajes(%) fueron: "<<endl
        <<"Victoria: "<<vict*100/3<<"%."<<endl
        <<"Derrota: "<<derro*100/3<<"%."<<endl;
        system("pause");    
    }
    return 0;
}