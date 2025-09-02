/*
    write a program to findout which player has better strike rate from 3 player runs & balls

*/
#include <stdio.h>
void main()
{
    int run1,run2,run3,ball1,ball2,ball3;
    float rate1,rate2,rate3;

    printf("Enter 1st player detail \n");
    printf("Enter run");
    scanf("%d",&run1);

    printf("Enter balls");
    scanf("%d",&ball1);

    printf("Enter 2nd player detail \n");
    printf("Enter run");
    scanf("%d",&run2);

    printf("Enter balls");
    scanf("%d",&ball2);

    printf("Enter 3rd player detail \n");
    printf("Enter run");
    scanf("%d",&run3);

    printf("Enter balls");
    scanf("%d",&ball3);

    //calculate strike rate
    rate1 = (float)run1/ball1;
     //type casting means converting variable to other type temporary
    rate2 = (float)run2/ball2;
    rate3 = (float)run3/ball3;
    printf("\n player 1 strike rate %f player 2 strike rate = %f player 3 strike rate %f\n ",rate1,rate2,rate3);
    // < > <= >= == == (relational operator)
    if(rate1>rate2) //1st decision (level 1)
    {
        if(rate1>rate3) //2nd decsion (level 2)
        {
            printf("player 1 has better strike amongs 3 player");
        }
        else 
        {
            printf("player 3 has better strike amongs 3 player");
        }
    }
    else 
    {
        if(rate2>rate3) //3rd decsion (level 2)
        {
            printf("player 2 has better strike rate amongs 3 player");
        }
        else 
        {
            printf("player 3 has better strike rate amongs 3 player");
        }
    }
    printf("\ngood bye...");
}