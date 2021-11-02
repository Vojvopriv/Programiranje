#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    const char *tri = "ies";
    int g, n = 5;

    srand(time(NULL));
    int br = rand() % 21;

    printf("The number is between 0 and 20\n\n");
    for (n; n > 0; --n)
    {
        if (n == 1) tri = "y";

        printf("You have %d tr%s left to guess my number!\n", n, tri);
        cout << "Enter your guess:";
        cin >> g;
        if (g == br) { printf("You guessed it!  And you were left with %d tr%s.", n, tri); return 0; }
        else if (g > br) printf("the number is smaller\n\n");
        else if (g < br) printf("the number is bigger\n\n");
    }
    printf("You failed to guess the number! It was %d.\n", br - 1);
}
