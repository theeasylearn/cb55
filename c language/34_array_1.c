/* first example of array
   write a program to accept 6 subject marks of student, calculate & display total and average and all subjects mark
*/
#include <stdio.h>
void main()
{
    // create array
    int marks[6], total = 0;
    float average;

    // input
    for (int index = 0; index < 6; index++)
    {
        printf("Enter %d subject marks", index + 1);
        scanf("%d", &marks[index]);
    }

    // total & average
    for(int index=0;index<6;index++)
    {
        total = total + marks[index];
    }
    average = total/6.0;
    printf("\n total %d average = %.2f",total,average);

    //display all subject marks (one subject per line)
}