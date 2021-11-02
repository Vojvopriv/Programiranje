#include<stdio.h>
#include <iostream>
#include<stdbool.h>
#include<stdint.h>

#define KOSOVO "Srbija"
#define ES 4

using namespace std;

int main(int argc, char* argv[])
{
    int number_of_arguments = argc;
    char* First_arg = argv[0];       /* This is the program name. */
    char* Second_arg = argv[1];      // Prvi argument koji si mu poslao prilikom pokretanja programa
                                     // Za pokretanje iz powershell-a  | >Program1.exe Argument1 Argument2

    printf("%s \n", First_arg);      /*Will print out the program path*/
    printf("%s \n", Second_arg);
    // -----------------------------------------------------------------------------------------------------------------

    int niz[5][5] =
    {
        {1,1,1,1,1},    // 1 1 1 1 1
        {2,2,2,2,2},    // 2 2 2 2 2
        {3,3,3,3,3}     // 3 3 3 3 3
    };                  // 0 0 0 0 0 
    // -----------------------------------------------------------------------------------------------------------------

    float vr1 = 14.125, vr2 = 2;
    float y = (int)vr1 / vr2;   // y = 7
    // -----------------------------------------------------------------------------------------------------------------
    
    int8_t x = 192;  // #include<stdint.h>   Jedan bajt tj.1100 0000
    short int c;    //  Dva bajta tj. 0000 0000 0000 0000
    int a = 16;    // Cetiri bajta tj.0000 0000 0000 0000 0000 0000 0001 0000
    int b = 43;   // 0010 1011

    printf(" %d \n", a & b);  // 0000 0000          --- 0
    printf(" %d \n", a | b);  // 0011 1011          --- 59
    printf(" %d \n", a ^ b);  // 0011 1011          --- 59
    printf(" %d \n", a << 9); // 10 0000 0000 0000  --- 8192
    printf(" %d \n", a >> 2); // 0100               --- 4
    printf(" %d \n", ~x);     // 0011 1111          --- 63
    // -----------------------------------------------------------------------------------------------------------------


    float c = 3.126;   printf(" %.2f ", c); // ZAOKRUZUJE dvije decimale - ispisuje 3.13

    char My_character = 'b';
    string My_string = "Hello bitches";   cout << My_string[1];

    bool as = true;      // With #include<stdbool.h>
    bool es = false;

    enum Color { red, green, blue = 12, srpska_boja };   // Kada bi printali vrijednosti red,green,blue,srpska_boja, bilo bi 0,1,12,13
    enum Color Boja_auspuha = red;
    // -----------------------------------------------------------------------------------------------------------------

    scanf_s("%d", &a);
    printf("\n %d \n", a);

    cin >> b;
    cout << "\n" << b << "\n";
    cout << "Hello World!\n"<< string(3, '\n');  // Tri nove linije
    // ------------------------------------------------------------------------------------------------------------------
}