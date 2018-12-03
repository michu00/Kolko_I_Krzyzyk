#include <iostream>
#include <conio.h> 
#include <windows.h> 
 
using namespace std;

char plansza[3][3]=
{
     {' ', ' ', ' '},
     {' ', ' ', ' '},
     {' ', ' ', ' '}
};
 
char znak_komputera, znak_czlowieka, znak_czlowieka2;
char zagraj_ponownie;
char schowek = ' ';
bool koniec = false;
char rozpoczynajacy;
char jeszcze_raz;
char wybor_trybu;
char znak_rozpoczynajacego = ' ';
int k = 0;
 
void rysujPlansze(){
    system("cls");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << plansza[i][j];
            if(j!=2)
            cout << "  |";
 
        }
        if(i!=2)
        cout <<"\n---+---+---\n";
    }
    cout << endl;
}
 
void sprawdzanieWyniku()
{
        if (
                (plansza[0][0] == znak_czlowieka && plansza[0][1] == znak_czlowieka && plansza[0][2] == znak_czlowieka) ||
                (plansza[1][0] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[1][2] == znak_czlowieka) ||
                (plansza[2][0] == znak_czlowieka && plansza[2][1] == znak_czlowieka && plansza[2][2] == znak_czlowieka) ||
                (plansza[0][0] == znak_czlowieka && plansza[1][0] == znak_czlowieka && plansza[2][0] == znak_czlowieka) ||
                (plansza[0][1] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[2][1] == znak_czlowieka) ||
                (plansza[0][2] == znak_czlowieka && plansza[1][2] == znak_czlowieka && plansza[2][2] == znak_czlowieka) ||
                (plansza[0][0] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[2][2] == znak_czlowieka) ||
                (plansza[0][2] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[2][0] == znak_czlowieka)
                )
        {
                koniec = true;
                cout << "\nWYGRALES!\n";
        }
 
        else if (
                (plansza[0][0] == znak_komputera && plansza[0][1] == znak_komputera && plansza[0][2] == znak_komputera) ||
                (plansza[1][0] == znak_komputera && plansza[1][1] == znak_komputera && plansza[1][2] == znak_komputera) ||
                (plansza[2][0] == znak_komputera && plansza[2][1] == znak_komputera && plansza[2][2] == znak_komputera) ||
                (plansza[0][0] == znak_komputera && plansza[1][0] == znak_komputera && plansza[2][0] == znak_komputera) ||
                (plansza[0][1] == znak_komputera && plansza[1][1] == znak_komputera && plansza[2][1] == znak_komputera) ||
                (plansza[0][2] == znak_komputera && plansza[1][2] == znak_komputera && plansza[2][2] == znak_komputera) ||
                (plansza[0][0] == znak_komputera && plansza[1][1] == znak_komputera && plansza[2][2] == znak_komputera) ||
                (plansza[0][2] == znak_komputera && plansza[1][1] == znak_komputera && plansza[2][0] == znak_komputera)
                )
        {
            koniec = true;
        cout << "\nWYGRAL KOMPUTER :-( !\n" << endl;
        }
 
        else if (
                plansza[0][0] != ' ' && plansza[0][1] != ' ' && plansza[0][2] != ' ' &&
                plansza[1][0] != ' ' && plansza[1][1] != ' ' && plansza[1][2] != ' ' &&
                plansza[2][0] != ' ' && plansza[2][1] != ' ' && plansza[2][2] != ' '
                )
        {
                koniec = true;
                cout << "\nREMIS!\n" << endl;
        }
 
}
 
void sprawdzanieWyniku2()
{
        if (
                (plansza[0][0] == znak_czlowieka && plansza[0][1] == znak_czlowieka && plansza[0][2] == znak_czlowieka) ||
                (plansza[1][0] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[1][2] == znak_czlowieka) ||
                (plansza[2][0] == znak_czlowieka && plansza[2][1] == znak_czlowieka && plansza[2][2] == znak_czlowieka) ||
                (plansza[0][0] == znak_czlowieka && plansza[1][0] == znak_czlowieka && plansza[2][0] == znak_czlowieka) ||
                (plansza[0][1] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[2][1] == znak_czlowieka) ||
                (plansza[0][2] == znak_czlowieka && plansza[1][2] == znak_czlowieka && plansza[2][2] == znak_czlowieka) ||
                (plansza[0][0] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[2][2] == znak_czlowieka) ||
                (plansza[0][2] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[2][0] == znak_czlowieka)
                )
        {
                koniec = true;
                cout << "\nWYGRAL GRACZ ZE ZNAKEM:  " << znak_czlowieka <<endl;
        }
 
        else if (
                (plansza[0][0] == znak_czlowieka2 && plansza[0][1] == znak_czlowieka2 && plansza[0][2] == znak_czlowieka2) ||
                (plansza[1][0] == znak_czlowieka2 && plansza[1][1] == znak_czlowieka2 && plansza[1][2] == znak_czlowieka2) ||
                (plansza[2][0] == znak_czlowieka2 && plansza[2][1] == znak_czlowieka2 && plansza[2][2] == znak_czlowieka2) ||
                (plansza[0][0] == znak_czlowieka2 && plansza[1][0] == znak_czlowieka2 && plansza[2][0] == znak_czlowieka2) ||
                (plansza[0][1] == znak_czlowieka2 && plansza[1][1] == znak_czlowieka2 && plansza[2][1] == znak_czlowieka2) ||
                (plansza[0][2] == znak_czlowieka2 && plansza[1][2] == znak_czlowieka2 && plansza[2][2] == znak_czlowieka2) ||
                (plansza[0][0] == znak_czlowieka2 && plansza[1][1] == znak_czlowieka2 && plansza[2][2] == znak_czlowieka2) ||
                (plansza[0][2] == znak_czlowieka2 && plansza[1][1] == znak_czlowieka2 && plansza[2][0] == znak_czlowieka2)
                )
        {
            koniec = true;
        cout << "\nWYGRAL GRACZ ZE ZNAKEM:  " << znak_czlowieka2 <<endl;
        }
 
        else if (
                plansza[0][0] != ' ' && plansza[0][1] != ' ' && plansza[0][2] != ' ' &&
                plansza[1][0] != ' ' && plansza[1][1] != ' ' && plansza[1][2] != ' ' &&
                plansza[2][0] != ' ' && plansza[2][1] != ' ' && plansza[2][2] != ' '
                )
        {
                koniec = true;
                cout << "\nREMIS!\n" << endl;
 
        }
 
}
 
void ruchyKomputera()
{
 
        if (plansza[0][0] == znak_komputera && plansza[0][1] == znak_komputera && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[0][2] == znak_komputera && plansza[0][1] == ' ')
                plansza[0][1] = znak_komputera;
        else if (plansza[0][1] == znak_komputera && plansza[0][2] == znak_komputera && plansza[0][0] == ' ')
                plansza[0][0] = znak_komputera;
 
        else if (plansza[1][0] == znak_komputera && plansza[1][1] == znak_komputera && plansza[1][2] == ' ')
                plansza[1][2] = znak_komputera;
        else if (plansza[1][0] == znak_komputera && plansza[1][2] == znak_komputera && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[1][2] == znak_komputera && plansza[1][0] == ' ')
                plansza[1][0] = znak_komputera;
 
        else if (plansza[2][0] == znak_komputera && plansza[2][1] == znak_komputera && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[2][0] == znak_komputera && plansza[2][2] == znak_komputera && plansza[2][1] == ' ')
                plansza[2][1] = znak_komputera;
        else if (plansza[2][1] == znak_komputera && plansza[2][2] == znak_komputera && plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
 
        else if (plansza[0][0] == znak_komputera && plansza[1][0] == znak_komputera && plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[2][0] == znak_komputera && plansza[1][0] == ' ')
                plansza[1][0] = znak_komputera;
        else if (plansza[1][0] == znak_komputera && plansza[2][0] == znak_komputera && plansza[0][0] == ' ')
                plansza[0][0] = znak_komputera;
 
        else if (plansza[0][1] == znak_komputera && plansza[1][1] == znak_komputera && plansza[2][1] == ' ')
                plansza[2][1] = znak_komputera;
        else if (plansza[0][1] == znak_komputera && plansza[2][1] == znak_komputera && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[2][1] == znak_komputera && plansza[0][1] == ' ')
                plansza[0][1] = znak_komputera;
 
        else if (plansza[0][2] == znak_komputera && plansza[1][2] == znak_komputera && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[0][2] == znak_komputera && plansza[2][2] == znak_komputera && plansza[1][2] == ' ')
                plansza[1][2] = znak_komputera;
        else if (plansza[1][2] == znak_komputera && plansza[2][2] == znak_komputera && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
 
        else if (plansza[0][0] == znak_komputera && plansza[1][1] == znak_komputera && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[2][2] == znak_komputera && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[2][2] == znak_komputera && plansza[0][0] == ' ')
                plansza[0][0] = znak_komputera;
 
        else if (plansza[0][2] == znak_komputera && plansza[1][1] == znak_komputera && plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
        else if (plansza[0][2] == znak_komputera && plansza[2][0] == znak_komputera && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[2][0] == znak_komputera && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
 
 
        else if (plansza[0][0] == znak_czlowieka && plansza[0][1] == znak_czlowieka && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
        else if (plansza[0][0] == znak_czlowieka && plansza[0][2] == znak_czlowieka && plansza[0][1] == ' ')
                plansza[0][1] = znak_komputera;
        else if (plansza[0][1] == znak_czlowieka && plansza[0][2] == znak_czlowieka && plansza[0][0] == ' ')
                plansza[0][0] = znak_komputera;
 
        else if (plansza[1][0] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[1][2] == ' ')
                plansza[1][2] = znak_komputera;
        else if (plansza[1][0] == znak_czlowieka && plansza[1][2] == znak_czlowieka && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
        else if (plansza[1][1] == znak_czlowieka && plansza[1][2] == znak_czlowieka && plansza[1][0] == ' ')
                plansza[1][0] = znak_komputera;
 
        else if (plansza[2][0] == znak_czlowieka && plansza[2][1] == znak_czlowieka && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[2][0] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[2][1] == ' ')
                plansza[2][1] = znak_komputera;
        else if (plansza[2][1] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
 
        else if (plansza[0][0] == znak_czlowieka && plansza[1][0] == znak_czlowieka && plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
        else if (plansza[0][0] == znak_czlowieka && plansza[2][0] == znak_czlowieka && plansza[1][0] == ' ')
                plansza[1][0] = znak_komputera;
        else if (plansza[1][0] == znak_czlowieka && plansza[2][0] == znak_czlowieka && plansza[0][0] == ' ')
                plansza[0][0] = znak_komputera;
 
        else if (plansza[0][1] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[2][1] == ' ')
                plansza[2][1] = znak_komputera;
        else if (plansza[0][1] == znak_czlowieka && plansza[2][1] == znak_czlowieka && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
        else if (plansza[1][1] == znak_czlowieka && plansza[2][1] == znak_czlowieka && plansza[0][1] == ' ')
                plansza[0][1] = znak_komputera;
 
        else if (plansza[0][2] == znak_czlowieka && plansza[1][2] == znak_czlowieka && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[0][2] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[1][2] == ' ')
                plansza[1][2] = znak_komputera;
        else if (plansza[1][2] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
 
        else if (plansza[0][0] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[0][0] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
        else if (plansza[1][1] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[0][0] == ' ')
                plansza[0][0] = znak_komputera;
 
        else if (plansza[0][2] == znak_czlowieka && plansza[1][1] == znak_czlowieka && plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
        else if (plansza[0][2] == znak_czlowieka && plansza[2][0] == znak_czlowieka && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
        else if (plansza[1][1] == znak_czlowieka && plansza[2][0] == znak_czlowieka && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
 
 
        else if (plansza[1][1] == znak_komputera && plansza[0][0] == znak_czlowieka && plansza[2][0] == znak_czlowieka && plansza[1][2] == znak_czlowieka && plansza[1][0] == znak_komputera && plansza[0][1] == ' ')
                plansza[0][1] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[0][0] == znak_czlowieka && plansza[0][2] == znak_czlowieka && plansza[2][1] == znak_czlowieka && plansza[0][1] == znak_komputera && plansza[1][0] == ' ')
                plansza[1][0] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[2][0] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[0][1] == znak_czlowieka && plansza[2][1] == znak_komputera && plansza[1][0] == ' ')
                plansza[1][0] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[1][0] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[0][2] == znak_czlowieka && plansza[1][2] == znak_komputera && plansza[0][1] == ' ')
                plansza[0][1] = znak_komputera;
 
        else if (plansza[0][0] == znak_komputera && plansza[1][0] == znak_czlowieka && plansza[0][1] == znak_czlowieka && plansza[0][2] == znak_komputera && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
                else if (plansza[0][0] == znak_komputera && plansza[1][1] == znak_komputera && plansza[0][1] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[1][0] == ' ')
                        plansza[1][0] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[0][1] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[0][2] == znak_komputera && plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[0][1] == znak_czlowieka && plansza[1][0] == znak_czlowieka && plansza[2][0] == znak_komputera && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
 
 
        else if (plansza[0][2] == znak_czlowieka && plansza[1][1] == znak_komputera && plansza[2][1] == znak_czlowieka && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[0][2] == znak_czlowieka && plansza[2][0] == znak_czlowieka && plansza[0][1] == ' ')
        plansza[0][1] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[1][0] == znak_czlowieka && plansza[2][2] == znak_czlowieka && plansza[2][0] == ' ')
        plansza[2][0] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[0][0] == znak_czlowieka && plansza[2][1] == znak_czlowieka && plansza[2][0] == ' ')
        plansza[2][0] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[2][2] == znak_czlowieka && plansza[0][0] == znak_czlowieka && plansza[0][1] == ' ')
        plansza[0][1] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[1][2] == znak_czlowieka && plansza[0][1] == znak_czlowieka && plansza[0][2] == ' ')
        plansza[0][2] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[1][2] == znak_czlowieka && plansza[2][1] == znak_czlowieka && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[1][2] == znak_czlowieka && plansza[1][0] == znak_czlowieka && plansza[2][0] == ' ')
        plansza[2][0] = znak_komputera;
 
        else if (plansza[0][0] == znak_komputera && plansza[0][1] == znak_czlowieka && plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[1][2] == znak_czlowieka && plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[0][2] == znak_czlowieka && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[2][0] == znak_czlowieka && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[2][1] == znak_czlowieka && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[1][0] == znak_czlowieka && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[2][2] == znak_czlowieka && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
        else if (plansza[0][0] == znak_komputera && plansza[1][1] == znak_czlowieka && plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[0][0] == znak_czlowieka && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
        else if (plansza[1][1] == znak_komputera && plansza[2][2] == znak_czlowieka && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
        else if (plansza[0][0] == znak_czlowieka && plansza[1][1] == znak_komputera && plansza[1][0] == ' ')
                plansza[1][0] = znak_komputera;
 
        else if (plansza[1][1] == znak_czlowieka && plansza[0][0] == ' ')
                plansza[0][0] = znak_komputera;
        else if (rozpoczynajacy == 'g' && plansza[1][1] == ' ')
                plansza[1][1] = znak_komputera;
        else if (rozpoczynajacy == 'g' && plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
        else if (rozpoczynajacy == 'k')
                plansza[0][0] = znak_komputera;
 
 
        else if (plansza[0][1] == ' ')
                plansza[0][1] = znak_komputera;
        else if (plansza[0][2] == ' ')
                plansza[0][2] = znak_komputera;
        else if (plansza[0][0] == ' ')
                plansza[0][0] = znak_komputera;
        else if (plansza[1][0] == ' ')
                plansza[1][0] = znak_komputera;
        else if (plansza[1][2] == ' ')
                plansza[1][2] = znak_komputera;
        else if (plansza[2][0] == ' ')
                plansza[2][0] = znak_komputera;
        else if (plansza[2][1] == ' ')
                plansza[2][1] = znak_komputera;
        else if (plansza[2][2] == ' ')
                plansza[2][2] = znak_komputera;
 
        sprawdzanieWyniku();
 
}
 
 
char znak(){
    if(k%2){
        k++;
        return 'X';
    }else{
        k++;
        return 'O';
    }
}
 
void sterowanie()
{
        int i = 1, j = 1;
 
        while (koniec == false)
        {
                char przycisk = _getch();
                switch (przycisk)
                {
                case 13:
                        if (schowek == ' ')
                        {
                            if(wybor_trybu == '2')
                {
                    plansza[i][j] = znak();
                    schowek = plansza[i][j];
                    rysujPlansze();
                    sprawdzanieWyniku2();
 
                            }
                            else
                            {
                    plansza[i][j] = znak_czlowieka;
                    schowek = znak_czlowieka;
                    ruchyKomputera();
                    rysujPlansze();
                    sprawdzanieWyniku();
                            }
                        }
                        break;
 
                case 72:
                        if (i != 0)
                        {
                                if (schowek != ' ')
                                        plansza[i][j] = schowek;
                                else
                                        plansza[i][j] = ' ';
 
                                --i;
 
                                schowek = plansza[i][j];
                                plansza[i][j] = '#';
 
                                rysujPlansze();
                        }
                        break;
 
                case 80:
                        if (i != 2)
                        {
                                if (schowek != ' ')
                                        plansza[i][j] = schowek;
                                else
                                        plansza[i][j] = ' ';
 
                                ++i;
 
                                schowek = plansza[i][j];
                                plansza[i][j] = '#';
 
                                rysujPlansze();
                        }
                        break;
 
                case 75:
                        if (j != 0)
                        {
                                if (schowek != ' ')
                                        plansza[i][j] = schowek;
                                else
                                        plansza[i][j] = ' ';
                                j--;
 
                                schowek = plansza[i][j];
                                plansza[i][j] = '#';
 
                                rysujPlansze();
                        }
                        break;
 
                case 77:
                        if (j != 2)
                        {
                                if (schowek != ' ')
                                        plansza[i][j] = schowek;
                                else
                                        plansza[i][j] = ' ';
 
                                j++;
 
                                schowek = plansza[i][j];
                                plansza[i][j] = '#';
 
                                rysujPlansze();
                        }
                        break;
                }
        }
}
 
void wyborZnaku(){
    system("cls");
    cout << "wybierz swoj znak, kolko czy krzyzyk? (o/x): ";
    cin >> znak_czlowieka;
 
    if(znak_czlowieka == 'o'){
        znak_czlowieka = 'O';
        znak_czlowieka2 = 'X';
        znak_komputera = 'X';
    }
    else{
        znak_czlowieka = 'X';
        znak_czlowieka2 = 'O';
        znak_komputera = 'O';
    }
 
}
 
void wyborRozpoczynajacego(){
    system("cls");
    cout << "wybierz kto rozpoczyna, gracz czy komputer? (g/k): ";
    cin >> rozpoczynajacy;
    rysujPlansze();
 
    if(rozpoczynajacy == 'g'){
        sterowanie();
    }
    else{
        ruchyKomputera();
        rysujPlansze();
        sterowanie();
    }
 
}
 
void wyborRozpoczynajacego2(){
    system("cls");
    cout << "wybierz kto rozpoczyna, kolko czy krzyzyk? (o/x): ";
    cin >> rozpoczynajacy;
    if(rozpoczynajacy == 'o'){
        znak_rozpoczynajacego = 'O';
        znak_czlowieka = 'O';
    }
    else{
        znak_rozpoczynajacego = 'X';
        znak_czlowieka2 = 'X';
    }
    rysujPlansze();
    sterowanie();
}
 
void wyborTrybuGry(){
    system("cls");
    cout << "gracz vs komputer - 1\ngracz vs gracz - 2" << endl;
    cin >> wybor_trybu;
    wybor_trybu = wybor_trybu;
}
 
int main()
{
    do
    {
        koniec = false;
        wyborTrybuGry();
 
        if(wybor_trybu == '1'){
            wyborZnaku();
            wyborRozpoczynajacego();
        }
        else{
            wyborRozpoczynajacego2();
        }
 
        cout << "czy chcesz zagrac jeszcze raz?(t/n): ";
        cin >> jeszcze_raz;
        system("cls");
        plansza[0][0] = plansza[0][1] = plansza[0][2] = plansza[1][0] = plansza[1][1] = plansza[1][2] = plansza[2][0] = plansza[2][1] = plansza[2][2] = ' ';
        schowek = ' ';
 
    }while(jeszcze_raz == 't' );
 
    cout << "\ndziekujemy za gre, MILEGO DNIA :)\n\n\n\n\n\n\n ";
    return 0;
}
