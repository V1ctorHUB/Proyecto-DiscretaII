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
void yourDec(char dec, int &a, int &f, char ap)
{
start:
    switch (dec)
    {
    case 'a':
        if (dec == ap)
        {
            cout << "Correcto! :) " << endl;
            a++;
        }
        else if (dec != ap)
        {
            cout << "Incorrecto :( ..." << endl;
            f++;
        }
        break;
    case 'b':
        if (dec == ap)
        {
            cout << "Correcto! :) " << endl;
            a++;
        }
        else if (dec != ap)
        {
            cout << "Incorrecto :( ..." << endl;
            f++;
        }
        break;
    default:

        cout << endl
             << "Vuelva a ingresar un valor correcto " << endl;
        cin >> dec;

        goto start;

        break;
    }

    cout << endl
         << "Ha acertado " << a << " veces! :D" << endl;
    cout << endl
         << "Ha fallado " << f << " veces! D:" << endl;

    system("pause");
    system("cls");
}
int main()
{   
    int acierto=0,fallo=0;
    string name;
    cout << "Ingrese su nombre: ";
    getline(cin, name);

    cout << endl;
    cout << "================================================" << endl;
    cout << "   |BIENVENIDO JUGADOR " << name << " :D     " << endl;
    cout << "================================================" << endl;
    char ap;
    char dec;
    cout << "INDICACIONES"<<endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "En este juego tendras que contestar preguntas y deacuerdo a tu cantidad de aciertos se presentaran 2 juegos diferentes." << endl;
    cout << "Es decir, si tu cantidad de aciertos es mayor o igual a 3, jugaras piedra, papel o tijeras, contra la maquina." << endl;
    cout << "De lo contrario se generara un numero completamente random del 1 al 10 y tu sin saberlo tendras que decidir si el numero es par o impar." << endl;
    cout << "De acuerdo a tus resultados obtendras un porcentaje para saber cuanto has acertado y errado en el juego. SUERTE!" << endl
         << endl;
    system("pause");
    system("cls");
        cout << endl
             << "Que son permutaciones y como se conoce a la totalidad de permutaciones?" << endl
             << endl;
        cout << "a)Totalidad de elementos posibles de un suceso o evento, donde el orden importa. El factorial de un numero." << endl
             << endl;
        cout << "b)Tecnica para calcular la probabilidad de que se de un suceso. Numero factorial." << endl;
        cout<<"Digite la opcion que crea correcta: ";
        cin >> dec;
        yourDec(dec, acierto, fallo, ap = 'a');

        cout << endl
             << "Cual es la principal diferencia entre combinaciones y permutaciones? " << endl
             << endl;
        cout << "a)No importa el orden en las permutaciones." << endl
             << endl;
        cout << "b)El orden no es importante en las combinaciones." << endl;
        cout<<"Digite la opcion que crea correcta: ";
        cin >> dec;
        yourDec(dec, acierto, fallo, ap = 'b');

        cout<<endl;
        cout<<"En cuántas formas puede un presidente, un tesorero y un secretario ser escogidos de 7 candidatos?"<<endl;
        cout<<"a)170.            b)210."<<endl;
        cout<<"Digite la opcion que crea correcta: ";
        cin>>dec;
        yourDec(dec,acierto,fallo,ap='b');

        cout<<endl;
        cout<<"Un chef va a preparar una ensalada de verduras con tomate, zanahoria, papa y brócoli." 
        <<"De cuantas formas se puede preparar la ensalada usando solo 2 ingredientes?"<<endl;
        cout<<"a)6.             b)8."<<endl;
        cout<<"Digite la opcion que crea correcta: ";
        cin>>dec;
        yourDec(dec,acierto,fallo,ap='a');

        cout<<endl;
        cout<<"Cuanto es el factorial de 5?"<<endl;
        cout<<"a)150.             b)120."<<endl;
        cout<<"Digite la opcion que crea correcta: ";
        cin>>dec;
        yourDec(dec,acierto,fallo,ap='b');

        cout<<"Tus aciertos en las anteriores preguntas fueron: "<<acierto<<" y tus respuestas erroneas fueron "<<fallo<<"."<<endl;
        cout<<"Tus porcentajes(%) son: "<<endl;
        cout<<"Acierto: "<<acierto*100/5<<"%."<<endl;
        cout<<"Error: "<<fallo*100/5<<"%."<<endl;
        system("pause");
        system("cls");


    if (acierto>=3)
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