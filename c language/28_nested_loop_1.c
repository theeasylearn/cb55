// nested loop
/*
 *
 * *
 * * *
 * * * *
 * * * * *
 */
#include <stdio.h>
void main()
{
    int astrik = 1,row=1;
    while(row<=5)
    {
        while (astrik <= row) //5
        {
            printf("* ");
            astrik = astrik + 1;
        }
        astrik = 1;
        printf("\n");
        row = row + 1;
    }
}