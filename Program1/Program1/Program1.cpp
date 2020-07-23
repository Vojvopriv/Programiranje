#include<stdio.h>
#include <iostream>
#include<stdbool.h>

using namespace std;

int main(int argc, char *argv [])
{
    int number_of_arguments = argc;
    char *First_arg = argv[0];       /* This is the program name. */
    char *Second_arg = argv[1];      // Prvi argument koji si mu poslao prilikom pokretanja programa
                                     // Za pokretanje iz powershell-a  | >Program1.exe Argument1 Argument2

    printf("%s \n", First_arg);      /*Will print out the program path*/
    printf("%s \n", Second_arg);

    int a, b;
    float c = 3.126;                      printf(" %.2f ", c); // ZAOKRUZUJE dvije decimale - ispisuje 3.13

    char My_character = 'b';
    string My_string = "Hello bitches";   cout << My_string[1];

    bool as = true;      // With #include<stdbool.h>
    bool es = false;

    enum Color { red, green, blue };
    enum Color Boja_auspuha = red;

    scanf_s("%d", &a);
    printf("\n %d \n", a);

    cin >> b;
    cout << "\n" << b << "\n";
    cout << "Hello World!\n";


}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu