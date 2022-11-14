#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

struct player
{
    string name;
    int acierto=0,fallo=0;
};
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
    cout <<endl<<endl<< "a)Numero PAR. \t\t b) Numero IMPAR." << endl;
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
    player *p;int opc,der=0,vic=0,emp=0,juegos=0;string pptRand;
    do
    {
        cout<<"        MENU. "<<endl
        <<"Opcion 1: Piedra."<<endl
        <<"Opcion 2: Papel."<<endl
        <<"Opcion 3: Tijera."<<endl
        <<"Elije una de las 3 opciones:";
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
        
        default:
            break;
        }  
        system("cls");  
        juegos++;
    } while (juegos!=3);
    cout<<"En estos 3 juegos, tus victorias fueron: "<<vic<<", tus empates fueron: "<<emp<<" tus derrotas fueron: "<<der<<endl
    <<"Tus porcentajes(%) son: "<<endl
    <<"Victoria: "<<vic*100/3<<"%."<<endl
    <<"Empate: "<<emp*100/3<<"%"<<endl
    <<"Derrota: "<<der*100/3<<"%"<<endl;
    system("pause");
    return 0;
}