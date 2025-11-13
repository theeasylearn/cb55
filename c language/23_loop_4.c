// write a program to findout compound interest of given amount,rate,year
#include <stdio.h>
void main()
{
    int amount, year,count=1;
    float rate, interest, next_amount;
    printf("enter amount");
    scanf("%d", &amount);

    printf("enter rate");
    scanf("%f", &rate);

    printf("enter year");
    scanf("%d", &year);
    next_amount = amount; // 1000

    while(count<year) //0<5
    {
        interest = (next_amount * rate * 1) / 100;
        next_amount = next_amount + interest; // 1100
        count=count+1;
    }
    printf("%f", next_amount);
}