/* 
    write a program to findout and display qube of given positive number 
*/
#include<stdio.h>
void main()
{
    int number,qube;
    printf("Enter number to get its qube");
    scanf("%d",&number);

    if(number<0) // < > <= >= == !=
    {
        printf("number is negative so it will be converted into positive number");
        number = -number;
    }
    qube = number * number * number;

    printf("\n qube = %d",qube);
}