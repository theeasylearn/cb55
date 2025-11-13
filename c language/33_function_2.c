#include <stdio.h>
// pass by value
// without return value with arguments
void swap(int x, int y)
{
    printf("\n inside swap function");
    printf("\n before swaping x = %d y = %d", x, y);
    // x = 10 y = 20
    int temp = x; // temp = 10
    x = y;        // x = 20
    y = temp;     // y = 10
    printf("\n after swaping x = %d y = %d", x, y);
}
void main()
{
    int x;
    int y;
    printf("Enter value for x");
    scanf("%d", &x);
    printf("Enter value for y");
    scanf("%d", &y);
    printf("\n inside main ");
    printf("\n before calling x = %d y = %d", x, y);
    swap(x,y);
    printf("\n inside main ");
    printf("\n after calling x = %d y = %d", x, y);
}