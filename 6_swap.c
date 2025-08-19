// write a program to swap & display 2 variables value without using 3rd variable
#include<stdio.h>
void main()
{
    //we can declare multiple variable of same type on same line 
    //declaration with initilization
    int num1 = 10, num2 = 20;
    printf("Enter num1");
    scanf("%d",&num1);

    printf("Enter num2");
    scanf("%d",&num2);
    //display value of variables before swap
    printf("num1 = %d, num2 = %d",num1,num2);
    //assume num1 = 100 num2 = 50
    //swap variable's value 
    // num1 = 20;  // 50
    // num2 = 10;  //100
    num2 = num1 + num2; //150
    num1 = num2 - num1; //50
    num2 = num2 - num1;
    //display value of variables after swap
    printf("\n num1 = %d, num2 = %d",num1,num2);


}