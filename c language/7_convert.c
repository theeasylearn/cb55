// write a program to convert given minutes into hours and remaining minutes 
// input : minutes = 185  output : hours = 3 minutes 5
// input : minutes = 75  output : hours = 1 minutes 15
// input : minutes = 130  output : hours = 2 minutes 10
// input : minutes = 685  output : hours = 11 minutes 25
#include<stdio.h>
void main()
{
    //1st step is to create variable
    int minutes,hours;

    //2nd step input
    printf("enter minutes");
    scanf("%d",&minutes);

    //3rd step process 
    hours = minutes/60;  // 3 = 185/60 
    minutes = minutes - (hours*60);  // 5

    printf("hours = %d, minutes = %d",hours,minutes);
}