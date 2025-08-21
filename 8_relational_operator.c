// concept of relational operator
#include<stdio.h>
void main()
{
    int a,b,result;
    printf("Enter value for a");
    scanf("%d",&a); //10

    printf("Enter value for b");
    scanf("%d",&b); // 20

    printf("a = %d b = %d",a,b);

    //a = 10, b = 20 
    result = a == b; //0
    printf("\n %d = %d == %d",result,a,b);

    result = a!=b; // 1
    printf("\n %d = %d != %d",result,a,b);

    result = a<b; // 1
    printf("\n %d = %d < %d",result,a,b);
    result = a>b; //0
    printf("\n %d = %d > %d",result,a,b);

    result = a<=b; // 10<=9
    printf("\n %d = %d <= %d",result,a,b);
    
    result = a>=b; //0 
    printf("\n %d = %d >= %d",result,a,b);
}