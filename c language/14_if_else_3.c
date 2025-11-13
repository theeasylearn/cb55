/*
    write a program to findout whether student is pass or failed based upon 5 subject marks (hindi, gujarati,english,maths,science). if student has marks less 35 he is failed otherwise pass. accept marks from user
*/
#include <stdio.h>
void main()
{
    int hindi, gujarati, english, maths, science;
    printf("enter marks for hindi");
    scanf("%d", &hindi);

    printf("enter marks for gujarati");
    scanf("%d", &gujarati);

    printf("enter marks for english");
    scanf("%d", &english);

    printf("enter marks for maths");
    scanf("%d", &maths);

    printf("enter marks for science");
    scanf("%d", &science);
    // < > <= >= != ==
    //logical operator (&& or ||)
    if(hindi<35 || english<35  || gujarati<35 || maths<35 || science<35)
    {
        printf("student is failed.");
    }
    else 
    {
        printf("student is passed");
    }
}