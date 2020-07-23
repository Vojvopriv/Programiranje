// Program1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<stdio.h>
#include <iostream>
#include<stdbool.h>

using namespace std;

int main()
{
    int a, b, c;

    char My_character = 'b';
    string My_string = "Hello bitches";

    bool as = true;      // With #include<stdbool.h>
    bool es = false;

    enum Color { red, green, blue };
    enum Color Boja_auspuha = red;

    cout << My_string[1];

    scanf_s("%d", &a);
    printf("\n%d\n", a);

    cin >> b;
    cout << "\n" << b << "\n";
    cout << "Hello World!\n";


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
