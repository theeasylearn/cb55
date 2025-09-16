/*
    write a program to findout position of given value in long unsorted array
 */
#include <stdio.h>
void main()
{
    // create array with static initiliztion
    long int numbers[10] = {
        1234567890, 987654321, 192837465, 564738291, 100, 214365870, 675849302, 908172635, 314159265, 271828182};
    long int value;
    int index;
    printf("enter any one long integer number");
    scanf("%ld", &value); // 100
    for(index=0;index<10;index++)
    {
        if (value == numbers[index])
        {
            printf("value found at %d position",index+1);
            break;
        }
    }
    if(index==10)
    {
        printf("value not found");
    }
}