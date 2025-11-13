/*
    concept of decision making statement if
    write a program to accept number from user. display number is  odd if number is odd  display number is even if number is even
    odd (eki ) 1,3,5,7,11
    even (beki ) 2, 4, 6
*/
#include <stdio.h>
void main()
{
    int number, remainder;
    printf("Enter number");
    scanf("%d", &number);   // & means address of operator 11
    remainder = number % 2; // 1
    if (remainder == 1)
    {
        printf("\n number is odd");
    }

    if (remainder == 0)
    {
        printf("\n number is even");
    }
    printf("\n good bye");
}