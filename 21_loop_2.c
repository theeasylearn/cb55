// 1   -4   9   -16   25    -36     49   -64     ...100
// 1    -2   3   -4     5     -6      7     8        10
#include <stdio.h>
void main()
{

    //initilization
    int number = 0, square;

    while(number<10) //condition
    {
        number = number + 1; // increment/decrement 2
        square = number * number;
        if (number % 2 == 0)
        {
            square = 0 - square; // 0 - 2
        }
        printf("%10d", square);
    }
}