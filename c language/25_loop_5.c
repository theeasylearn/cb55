// write a program to make sum of all digits in given amount
// input : 12345
// process = 1+2+3+4+5
// output = 15
#include <stdio.h>
void main()
{
    int number, reminder, sum;
    printf("Enter number");
    scanf("%d", &number); // 12345
    for(sum=0;number>0;number = number / 10)
    {
        reminder = number % 10; // 5
        sum = sum + reminder;
    }
    printf("%d",sum);
}