/* write a program to findout whether given number is perfect number of not */
#include <stdio.h>
void main()
{
    int number, reminder, sum = 0, divisor;
    printf("enter number to findout whether it is perfect number or not");
    scanf("%d", &number); // 6
    divisor = 1;
    
    do
    {
        reminder = number % divisor; // 1
        if (reminder == 0)
        {
            sum = sum + divisor;
        }
        divisor = divisor + 1;
    }while(divisor<number);

    printf("divisor %d sum %d reminder %d \n ", divisor, sum, reminder);
    if(number == sum)
    {
        printf("%d is perfect number",number);
    }
    else 
    {
        printf("%d is not perfect number",number);
    }
}