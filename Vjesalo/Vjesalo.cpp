#include<iostream>
#include<string>
#include<windows.h>
#pragma comment(lib, "winmm.lib")
using namespace std;

void unesi_rijec();
int pozovi(int);
int gameover(int);
void nadji_slovo(int);
void play_the_sound(int);

string rijec = "aa", pokusaj = "bb";
char spas[25];
char linije[25];
int c = 0;

int main()
{
	int i = 1;

	for (int i = 0; i < 25; i++)
		linije[i] = '-';
	for (int i = 0; i < 25; i++)
		spas[i] = ' ';

	unesi_rijec();
	while (pozovi(i))
	{

		i++;
	}
	cout << "\n\tCestitam" << string(6, '\n');

	return 0;
}

void unesi_rijec()
{
	cout << "Unesi rijec: ";
	cin >> rijec;
}

void play_the_sound(int br_pokusaja)
{
	switch (br_pokusaja)   // Razliciti zvucni efekti na razlicite pokusaje
	{
	case 1:  PlaySound(L"C:\\Users\\User\\Desktop\\Vjesalo\\Sounds\\slapwav", NULL, SND_FILENAME);
		break;
	case 2:  PlaySound(L"C:\\Users\\User\\Desktop\\Vjesalo\\Sounds\\AAAGH1", NULL, SND_FILENAME);
		break;
	case 3:  PlaySound(L"C:\\Users\\User\\Desktop\\Vjesalo\\Sounds\\punch1", NULL, SND_FILENAME);
		break;
	case 4:  PlaySound(L"C:\\Users\\User\\Desktop\\Vjesalo\\Sounds\\punch2", NULL, SND_FILENAME);
		break;
	case 5:  PlaySound(L"C:\\Users\\User\\Desktop\\Vjesalo\\Sounds\\SCREAM_4", NULL, SND_FILENAME);
		break;
	case 6:  PlaySound(L"C:\\Users\\User\\Desktop\\Vjesalo\\Sounds\\SCREAM3", NULL, SND_FILENAME);
		break;
	case 7:  PlaySound(L"C:\\Users\\User\\Desktop\\Vjesalo\\Sounds\\death", NULL, SND_FILENAME);
		break;
	}
}

void nadji_slovo(int br_pokusaja)
{
	int p = 0;           // Da znam da li je pogodjeno slovo ili nije
	for (int i = 0; i < rijec.length(); i++)
		if (pokusaj[0] == rijec[i]) { spas[i] = pokusaj[0]; c++; p++; }
	if (!p) play_the_sound(br_pokusaja);
}

int pozovi(int i)
{
	if (gameover(i)) return 0;
	system("cls");
	cout << "\tTrazena rijec: ";

	for (int i = 0; i < 25; i++) cout << " " << spas[i] << " ";     // Ispisuje pogodjena slova
	cout << "\n\t\t       ";

	for (int i = 0; i < rijec.length(); i++) cout << " " << linije[i] << " ";  // Linije ispod rijeci
	cout << "\n";

	cout << i << ". pokusaj(slovo ili cijela rijec) (" << 8 - i << ") : ";
	cin >> pokusaj;
	if (pokusaj.length() == 1) nadji_slovo(i);
	else if (pokusaj != rijec) play_the_sound(i);
	if (gameover(i)) return 0;


	return 1;
}

int gameover(int i)
{
	if (pokusaj == rijec || c == rijec.length()) { cout << string(3, '\n') << "Pogodio si.\n Tacna rijec je " << rijec; return 1; }
	if (i == 8) { cout << string(3, '\n') << "Nemas vise pokusaja.\n Tacna rijec je " << rijec; return 1; }

	
	return 0;
}