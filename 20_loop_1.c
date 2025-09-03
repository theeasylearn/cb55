// 1    3   5   7   9   11  ...100
#include <stdio.h>
void main()
{
    int number = 1;
    // < > <= >= == !=
    while(number<100)
    {
        printf("%10d", number);
        number = number + 2; // 3
    }
}