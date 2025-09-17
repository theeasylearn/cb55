/*
    write a program to findout position of given value in long sorted array
 */
#include <stdio.h>
void main()
{
    // create array with static initiliztion
    long int numbers[10] = {
        100, 200, 300, 400, 314159265, 564738291, 675849302, 908172635, 987654321, 1234567890};

    long int value;
    int index = 0;
    printf("enter any one long integer number");
    scanf("%ld", &value); // 300
    while (index < 10)
    {
        if (numbers[index] == value)
        {
            printf("value found at 1st position");
            break;
        }
        else if (numbers[index] > value)
        {
            printf("value not found ");
            break;
        }
        index = index + 1;
    }
    if (index == 10)
    {
        printf("value not found");
    }
}