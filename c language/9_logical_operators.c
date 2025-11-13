// example of logical operators in c language
// when expression has logical operator, it is called logical expression.
// logical expression has 2 or more relational operators
#include <stdio.h>
void main()
{
    int a, b,c, result;
    printf("Enter value for a");
    scanf("%d", &a); // 10

    printf("Enter value for b");
    scanf("%d", &b); // 20

    printf("Enter value for c");
    scanf("%d", &c); // 20


    printf("\n a = %d b = %d c = %d", a, b, c);

    //here we have 2 relational expression, therefore we must use && or || operator between them
    result = a == b && b == c;

    printf("\n %d = %d == %d && %d == %d",result,a,b,b,c);

    result = a == b || b == c;

    printf("\n %d = %d == %d && %d == %d",result,a,b,b,c);
    
    result = !(a==b);
    printf("\n %d = ! %d == %d ",result,a,b);

}
