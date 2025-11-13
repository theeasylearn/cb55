/*
    write a program to display choghodiya of given days. run program until user press 0.
    Sunday
Day (sunrise->sunset): Udveg -> Char -> Labh -> Amrit -> Kaal -> Shubh -> Rog -> Udveg.
Night (sunset->sunrise): Shubh -> Amrit -> Char -> Rog -> Kaal -> Labh -> Udveg -> Shubh.

Monday
Day: Amrit -> Kaal -> Shubh -> Rog -> Udveg -> Char -> Labh -> Amrit.
Night: Char -> Rog -> Kaal -> Labh -> Udveg -> Shubh -> Amrit -> Char.

Tuesday
Day: Rog -> Udveg -> Char -> Labh -> Amrit -> Kaal -> Shubh -> Rog.
Night: Kaal -> Labh -> Udveg -> Shubh -> Amrit -> Char -> Rog -> Kaal.

Wednesday
Day: Labh -> Amrit -> Kaal -> Udveg -> Rog -> Shubh -> Char -> Labh.
Night: Udveg -> Shubh -> Amrit -> Char -> Rog -> Kaal -> Labh -> Udveg.

Thursday
Day: Shubh -> Rog -> Udveg -> Char -> Kaal -> Amrit -> Labh -> Shubh.
Night: Amrit -> Char -> Rog -> Kaal -> Udveg -> Labh -> Shubh -> Amrit.

Friday
Day: Char -> Labh -> Amrit -> Kaal -> Shubh -> Rog -> Udveg -> Char.
Night: Rog -> Kaal -> Labh -> Udveg -> Shubh -> Amrit -> Char -> Rog.

Saturday
Day: Kaal -> Shubh -> Rog -> Udveg -> Char -> Labh -> Amrit -> Kaal.
Night: Labh -> Udveg -> Amrit -> Char -> Kaal -> Rog -> Labh -> Labh.

*/
#include <stdio.h>
void main()
{
    int day;
    do
    {
        printf("\nEnter day of week between(1 to 7) to get choghadiyas\n");
        printf("press 1 for monday\n");
        printf("press 2 for tuesday\n");
        printf("press 3 for wednesday\n");
        printf("press 4 for thursday\n");
        printf("press 5 for friday\n");
        printf("press 6 for saturday\n");
        printf("press 7 for sunday\n");
        printf("press 0 for exit from program\n");
        scanf("%d", &day);
        switch (day)
        {
        case 1:
            printf("\n Day: Amrit -> Kaal -> Shubh -> Rog -> Udveg -> Char -> Labh -> Amrit. \n Night: Char -> Rog -> Kaal -> Labh -> Udveg -> Shubh -> Amrit -> Char. ");
            break;
        case 2:
            printf("\n  Day: Rog -> Udveg -> Char -> Labh -> Amrit -> Kaal -> Shubh -> Rog. \n Night: Kaal -> Labh -> Udveg -> Shubh -> Amrit -> Char -> Rog -> Kaal.");
            break;
        case 3:
            printf("\n  Day: Labh -> Amrit -> Kaal -> Udveg -> Rog -> Shubh -> Char -> Labh. \n Night: Udveg -> Shubh -> Amrit -> Char -> Rog -> Kaal -> Labh -> Udveg.");
            break;
        case 4:
            printf("\n  Day: Shubh -> Rog -> Udveg -> Char -> Kaal -> Amrit -> Labh -> Shubh. \n Night: Amrit -> Char -> Rog -> Kaal -> Udveg -> Labh -> Shubh -> Amrit.");
            break;
        case 5:
            printf("\n  Day: Char -> Labh -> Amrit -> Kaal -> Shubh -> Rog -> Udveg -> Char. \n Night: Rog -> Kaal -> Labh -> Udveg -> Shubh -> Amrit -> Char -> Rog.");
            break;
        case 6:
            printf("\n  Day: Kaal -> Shubh -> Rog -> Udveg -> Char -> Labh -> Amrit -> Kaal. \n Night: Labh -> Udveg -> Amrit -> Char -> Kaal -> Rog -> Labh -> Labh.");
            break;
        case 7:
            printf("\n  Day (sunrise->sunset): Udveg -> Char -> Labh -> Amrit -> Kaal -> Shubh -> Rog -> Udveg.\n Night (sunset->sunrise): Shubh -> Amrit -> Char -> Rog -> Kaal -> Labh -> Udveg -> Shubh.");
            break;
        case 0:
            printf("\n  Good bye... \n");
            break;
        default:
            printf("\n invalid day");
        } //end of switch
    }while(day!=0);
}