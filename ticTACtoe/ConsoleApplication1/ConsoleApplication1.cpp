#include <stdio.h>
#include <iostream>
#include <stdlib.h>

void DrawGame(char broj[], int size);               // Brise ekran pa crta poligon sa brojevima i iksovima
int GameOver (char broj[], int size, int i);         // Provjerava da li je igra gotova i ispisuje pobjednika
int MakeMove (char broj[], int size, int i, char c);                        // Trazi unos tj. potez igraca
void AddSign (char* broj,  int size, char c, int p);   // Postavlja znak (x / o) u niz

using namespace std;

void DrawGame(char broj[], int size)
{
    system("cls");
    printf("\n\t%c\t|\t%c\t|\t%c", broj[0], broj[1], broj[2]);
    printf("\n--------------------------------------------------");
    printf("\n\t%c\t|\t%c\t|\t%c", broj[3], broj[4], broj[5]);
    printf("\n--------------------------------------------------");
    printf("\n\t%c\t|\t%c\t|\t%c\n\n", broj[6], broj[7], broj[8]);
}

int GameOver(char broj[], int size, int i)
{
    if (i - 1 == 0) i = 2; else i = 1;

    if (                                                          // Za nerjeseno
        (broj[0] == 'X' || broj[0] == 'O') &&
        (broj[1] == 'X' || broj[1] == 'O') &&
        (broj[2] == 'X' || broj[2] == 'O') &&
        (broj[3] == 'X' || broj[3] == 'O') &&
        (broj[4] == 'X' || broj[4] == 'O') &&
        (broj[5] == 'X' || broj[5] == 'O') &&
        (broj[6] == 'X' || broj[6] == 'O') &&
        (broj[7] == 'X' || broj[7] == 'O') &&
        (broj[8] == 'X' || broj[8] == 'O')
        )
    {printf("\n\n Tied \n\n"); return 0;}

    if (broj[0] == broj[1] && broj[0] == broj[2]) { printf("\n\n Player %d won!\n\n", i); return 0; }
    if (broj[3] == broj[4] && broj[3] == broj[5]) { printf("\n\n Player %d won!\n\n", i); return 0; }
    if (broj[6] == broj[7] && broj[6] == broj[8]) { printf("\n\n Player %d won!\n\n", i); return 0; }

    if (broj[0] == broj[3] && broj[0] == broj[6]) { printf("\n\n Player %d won!\n\n", i); return 0; }
    if (broj[1] == broj[4] && broj[1] == broj[7]) { printf("\n\n Player %d won!\n\n", i); return 0; }
    if (broj[2] == broj[5] && broj[2] == broj[8]) { printf("\n\n Player %d won!\n\n", i); return 0; }

    if (broj[0] == broj[4] && broj[0] == broj[8]) { printf("\n\n Player %d won!\n\n", i); return 0; }
    if (broj[2] == broj[4] && broj[2] == broj[6]) { printf("\n\n Player %d won!\n\n", i); return 0; }
}

int MakeMove(char broj[], int size, int i, char c)
{
    int p;

    printf("Player %d's move (%c): ", i, c);   
    while (!(cin >> p ) || broj[p - 1] == 'X' || broj[p - 1] == 'O' || p > 9 || p < 1) // Za debilan unos
    {
         cout << "Pogresan unos\nPokusaj ponovo: ";
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return p;
}

void AddSign(char* broj, int size, char c, int p)
{
    broj[p - 1] = c;
}

int main()
{
    int i = 1, p;
    char c = 'X';
    char broj[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };

    DrawGame(broj, 9);
    while (GameOver(broj, 9, i))   //  !=0
    {
        p = MakeMove(broj, 9, i, c);
        AddSign(broj, 9, c, p);
        i++;
        if (i == 2) c = 'O'; else c = 'X';
        if (i > 2) i = 1;
        DrawGame(broj, 9);
    }

    return 0;
}
