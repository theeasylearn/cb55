/*
    write a program to findout whether student is eligible to get admission in computer engineering. if student has 80 or above marks in maths and science subject he should be eligible otherwise not. accept marks from user 
*/
#include<stdio.h>
void main()
{
    int maths,science;
    printf("enter marks for maths");
    scanf("%d",&maths);

    printf("enter marks for science");
    scanf("%d",&science);

    // < > <= >= == !=
    // when there are more then 1 relatinal expression we have to use logical operator (&& or ||)
    if(maths>=80 && science>=80)
    {
        printf("student can take admission in computer engineering");
    }
    else 
    {
        printf("student can take admission in any other course but computer engineering");
    }
    
}