/* write a program to findout minimum(smallest) value in unsorted array
 */
#include <stdio.h>
void main()
{
    // create array with static initiliztion
    float weight[5] = {84.19, 12.76, 47.55, 63.88, 29.41};
    // index             0     1    2       3      4
    float min = weight[0]; // 50.11
    for (int index = 1; index < 5; index++)
    {
        if (weight[index] < min)
        {
            min = weight[index];
        }
    }
    printf("minimum value in array %.2f",min);
}