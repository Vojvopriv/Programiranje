#include<stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int x, y = 8;

    x = y > 7 ? 20 : 25;
    /* if(y>7) x=20; else x=25; */


    printf("\n %d \n", x);

    return 0;
}