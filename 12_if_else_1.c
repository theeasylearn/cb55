/*
    write a program to findout which batsman should be man of the match. accept runs from users of both batsman and decide man of the based upon runs.

*/
#include <stdio.h>
void main()
{
    // create(declare) variables
    int player1_runs, player2_runs;
    printf("Enter 1st player runs");
    scanf("%d", &player1_runs);

    printf("Enter 2nd player runs");
    scanf("%d", &player2_runs);

    // < > <= >= == !=
    if (player1_runs > player2_runs)
    {
        printf("Player 1 should be the man of the match");
    }
    else
    {
        printf("Player 2 should be the man of the match");
    }
}