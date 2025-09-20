// write a program to findout size of string
//  input : pinapple
//  output : 8
#include <stdio.h>
void main()
{
    // create  string with static initilization
    char name[] = {'p', 'i', 'n', 'a', 'p', 'p', 'l', 'e', '\0'};
    int size = 0, index = 0; // size variable will store no of character string has (excluding null)
    // last character of any string must be null (\0)
    printf("name = %s", name);

    // count how many letter string has
    while (name[index] != '\0')
    {
        if(name[index]!='\0')
        {
            size++; // 1
        }
        index++;
    }
    printf("\n size = %d",size);
    
}