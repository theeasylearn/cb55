/*
    write a program to sort an array of integer
    before sorting int list[] = {100,25,50,40,11};
    after sorting int list[] = {11,25,40,50,100};
 */
#include <stdio.h>
// #create constant (whose value can not be changed in program)
#define SIZE 10
void main()
{
    // create array with static initiliztion
    int list[SIZE] = {100, 25, 50, 40, 11, 200, 125, 90, 70, 300};
    int lower, upper, temp;
    lower = 0;
    upper = 1;
    while(lower<SIZE-2)
    {
        while (upper < SIZE)
        {
            if (list[lower] > list[upper])
            {
                temp = list[lower];        // 100
                list[lower] = list[upper]; // 25
                list[upper] = temp;
            }
            upper = upper + 1;
        }
        lower = lower + 1; // 1
        upper = lower + 1; // 2
    }

    // list display
    for (int index = 0; index < SIZE; index++)
    {
        printf("%6d", list[index]);
    }
}