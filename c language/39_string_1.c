#include <stdio.h>
// #create constant (whose value can not be changed in program)
#define SIZE 32
#define BIGSIZE SIZE * 10
void main()
{
    //create 1d array (string)
    char name[SIZE],surname[SIZE],address[BIGSIZE];

    printf("Enter your name");
    scanf("%s",name);

    printf("Enter your surname");
    scanf("%s",surname);

    printf("Enter your address");
    // scanf("%s",address); //if we give space then input will be terminated
    fflush(stdin); //we must use this function to clear input stream
    gets(address); //gets function can take input with space 

    printf("name = %s surname = %s address = %s ",name,surname,address);
    
}