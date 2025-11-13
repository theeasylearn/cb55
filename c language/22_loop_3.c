#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1;
    int multiplier = 1;

    printf("Enter number to get its factorial: ");
    scanf("%d", &number);

    while(multiplier <= number) {
        factorial = factorial * multiplier;
        multiplier = multiplier + 1;
    }

    printf("Factorial of %d = %llu\n", number, factorial);
    return 0;
}
