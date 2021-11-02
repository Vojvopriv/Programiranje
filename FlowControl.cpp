#include<stdio.h>


int main()
{
    int a = 2,x, y = 8;

    // -----------------------------------------------------

    x = y > 7 ? 20 : 25;
    /* if(y>7) x=20; else x=25; */
    // -----------------------------------------------------

    switch (a)
    {
        case 1:
        {
            printf("Something");
            break;
        }
        case 2:
        {
            printf("Something else\n");
            break;
        }
            default:                   // If none of the above is true
            printf("Nothing\n");        
        }
    // ------------------------------------------------------

    do                               // Executes once, unconditionally
    {
        //prompt for password
    } while (password == false);
    // -------------------------------------------------------

    for (int a = 0; a < 10; a++)
    {                               
        for (int b = 0; b < 10; b++)                          // 0 1 2 3 6 7 8 9
        {                                                     // 0 1 2 3 6 7 8 9
            if (b == 5 || b == 4) continue;                   //  ...
            printf("%d ", b);
        }
        printf("\n");
    }
    // --------------------------------------------------------


    return 0;
}