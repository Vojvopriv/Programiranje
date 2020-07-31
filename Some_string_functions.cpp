#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char niz[100];
	int letters = 0, upper = 0, lower = 0, numbers = 0, znakovi = 0;



	printf("Enter a string (less than 100 characters):\n");
	fgets(niz, sizeof(niz), stdin);

	int i = 0;
	while (niz[i]!='\0')
	{
		if (isalpha(niz[i])) {
			if (isupper(niz[i])) upper++;
			else if (islower(niz[i])) lower++;
			letters++;
		}
		else if (isdigit(niz[i])) numbers++;
		else if (ispunct(niz[i])) znakovi++;
		niz[i] = (char)toupper(niz[i]);
		i++;
	}

	printf("Ovaj niz ima %d slova ( %d velikih i %d malih ) , %d brojeva i %d znakova.", letters, upper, lower, numbers, znakovi);
	printf("\n%s", niz);

	return 0;
}