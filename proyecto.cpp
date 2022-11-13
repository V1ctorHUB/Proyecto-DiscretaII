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
int main()
{
    player *p;

    //aqui ponene las preguntas y en las respuestas correctas hacen el p.acierto++ para que le aumente en 1, sino le hacen al de los fallos.

}