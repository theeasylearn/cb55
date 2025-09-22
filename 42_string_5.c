#include <stdio.h>
// create constant
#define ROWSIZE 5
#define COLUMNSIZE 32
void main()
{
    // CREATE 2D ARRAY(1d array of string)
    char name[ROWSIZE][COLUMNSIZE];
    int index=0;
    while(index<ROWSIZE)
    {
        printf("enter %d student name",index+1);
        // scanf("%s", name[index]); //scanf function can not accept string with space
        gets(name[index]); //used to accept string with space (ankit patel)
        index++;
    }
    index=0;
    printf("Student names \n");

    do
    {
        // printf("%d student name %s\n",index+1,name[index]);
        puts(name[index]);
        index++;
    }while(index<ROWSIZE);

}