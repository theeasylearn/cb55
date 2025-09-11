// nested loop
/*

* * * * *
 * * * *
 * * *
 * *
 *

 */
#include <stdio.h>
void main()
{
    for(int row=5;row>=1;row--) //outer for loop
    {
        for (int astrik = 1; astrik <= row; astrik++) //inner for loop
        {
            printf("* ");
        }
        printf("\n"); // new line
    }
}