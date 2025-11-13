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
        scanf("%s", name[index]); //scanf function can not accept string with space
        index++;
    }
    index=0;
    printf("Student names \n");

    do
    {
        printf("%d student name %s\n",index+1,name[index]);
        index++;
    }while(index<ROWSIZE);

}