// this program explain concept of process in programming
// write  a program to do addition, subtraction, multiplication, division of 2 given number and display it 
#include<stdio.h>
void main()
{
    //variable declaration (create variables)
    int num1,num2;
    int add,sub,mul;
    float div;
    printf("Enter value for num1");
    scanf("%d",&num1); //10

    printf("Enter value for num2");
    scanf("%d",&num2); //20

    //process (expression) (samikaran)
    //expression has one operator(symbols like + - * /) and two operands(value/variable)   
    //variable-name = variable-name2 operator variable-name3
    //arthimatic expression
    add = num1 + num2; //30
    sub = num1 - num2; //-10
    mul = num1 * num2; // 200
    div = (float)num1 / num2; // 0.5
    //display 
    printf("\n addition = %d, subtraction = %d, multiplication = %d, division = %.2f",add,sub,mul,div);
    
}
