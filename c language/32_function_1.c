#include <stdio.h>
// #create(define) function (user defined function)
// return value function-name(inputs)
// without return value without argument(input)
void printStar()
{
    printf("\n");
    for (int count = 1; count <= 100; count++)
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
//with return value without argument
float getPi()
{
    float pi = 22.0/7;
    return pi;
}
//with return value with argument
int getSquare(int number)
{
    int square = number * number;
    return square;
}
void main()
{
    int radius,square;
    float pi,area;
    // printStar(); // calling function
    // printLetter('^', 120);
    // printf("the easylearn academy");
    // printStar(); // calling function
    // printf("105, eva surbhi, opp aksharwadi temple, bhavnagar");
    // printStar();
    // printLetter('@', 80);
    printf("enter circle radius");
    scanf("%d",&radius);
    //calculate area 
    pi = getPi();
    square = getSquare(radius);
    area = pi * square; 
    printf("area = %f",area);
}