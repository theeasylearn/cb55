// example of structure in c language
#include <stdio.h>
// create structure
struct result
{
    char name[32];
    int maths, science, english, total;
    float percentage;
};
void main()
{
    // create structure type variable
    struct result r1;
    // accept input in member variable of r1
    printf("Enter your name");
    gets(r1.name);
    printf("Enter maths marks");
    scanf("%d", &r1.maths);
    printf("Enter science marks");
    scanf("%d", &r1.science);
    printf("Enter english marks");
    scanf("%d", &r1.english);

    r1.total = r1.maths + r1.science + r1.english;
    r1.percentage = r1.total / 3.0;

    printf("\nStudent name = %s",r1.name);
    printf("\nmaths = %d science = %d english = %d total = %d percentage = %.2f",r1.maths,r1.science,r1.english,r1.total,r1.percentage);
    
}