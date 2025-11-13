// write a program to count vowels in user given string
//  vowels = a,e,i,o,u
// input : kishan
// output : vowels count = 2
// input : orange
// output : vowels count = 3
#include <stdio.h>
void main()
{
    // create  string with static initilization
    char name[] = {'a', 'p', 'p', 'l', 'e', '\0'};
    int size = 0, index = 0, vowels = 0;
    // size variable will store no of character string has (excluding null)
    // last character of any string must be null (\0)
    printf("name = %s", name);

    // count how many letter string has
    while (name[index] != '\0')
    {
        if (name[index] != '\0')
        {
            size++; // 1
        }
        index++;
    }
    printf("\n size = %d", size);
    index = 0;
    while (index<=size)
    {
        if (name[index] == 'a' || name[index] == 'e' || name[index] == 'i' || name[index] == 'o' || name[index] == 'u')
        {
            vowels++; // 1
        }
        index++; // 1
    }
    printf("\n vowels count = %d",vowels);
}