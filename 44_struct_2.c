// example of structure in c language
#include <stdio.h>
// create structure
struct result
{
    char name[32]; //array within structure
    int maths, science, english, total;
    float percentage;
};
void main()
{
    // create array of structure type variable
    struct result batch[5];
    int index = 0;
    while (index < 5)
    {
        fflush(stdin);
        printf("\n Enter %d your name",index+1);
        gets(batch[index].name);
        printf("Enter maths marks");
        scanf("%d", &batch[index].maths);
        printf("Enter science marks");
        scanf("%d", &batch[index].science);
        printf("Enter english marks");
        scanf("%d", &batch[index].english);

        batch[index].total = batch[index].maths + batch[index].science + batch[index].english;
        batch[index].percentage = batch[index].total / 3.0;
        index++;
    }
    
    for(index=0;index<5;index++)
    {
        printf("\n %d Student name = %s",index+1, batch[index].name);
        printf("\nmaths = %d science = %d english = %d total = %d percentage = %.2f", batch[index].maths, batch[index].science, batch[index].english, batch[index].total, batch[index].percentage);
    }
}