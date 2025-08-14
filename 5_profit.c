// write a program to calculate & display sale price from given purchase and profit percentage 
// samir has purchases one phone with price of 10000 rs and he want to take 15% profit, then at what price he will sale phone
#include<stdio.h>
void main()
{
    //create variable
    int purchase_price;
    float profit_rate,sale_price;
    printf("Enter purcharse price");
    scanf("%d",&purchase_price);

    printf("Enter profit rate");
    scanf("%f",&profit_rate);

    //process
    sale_price = purchase_price + ((purchase_price * profit_rate) / 100);
    printf("Sale price = %.2f",sale_price);


}