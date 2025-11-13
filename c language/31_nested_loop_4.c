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
    int space = 1;
    int row = 5;
    //outer do while loop 
    do
    {
        //inner do while loop 
        do
        {
            printf(" ");
            space++;
        } while (space <= row);
        // astrik
        //inner for loop 
        for(int astrik=1;astrik<=6-row;astrik++)
        {
             printf("* ");
        }
        printf("\n");
        space = 1;
        row--;
    }while(row>=1);
}