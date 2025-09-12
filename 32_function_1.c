#include <stdio.h>
// #create(define) function (user defined function)
// return value function-name(inputs)
// without return value without argument(input)
void printStar()
{
    printf("\n");
    for (int count = 1; count <= 101; count++)
    {
        printf("*");
    }
    printf("\n");
}
// without return value with arguments
void printLetter(char letter, int times)
{
    printf("\n");
    for (int count = 1; count <= times; count++)
    {
        printf("%c", letter);
    }
    printf("\n");
}
void main()
{
    printStar(); // calling function
    printLetter('^', 120);
    printf("the easylearn academy");
    printStar(); // calling function
    printf("105, eva surbhi, opp aksharwadi temple, bhavnagar");
    printStar();
    printLetter('@', 80);
}