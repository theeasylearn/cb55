/*
write a menu driven program to work on queue
    when user press 1 it should insert new item into queue at rear end
    when user press 2 it should delete item from queue at front end 
    when user press 3 it should display all item in FIFO manner (first in first manner)
    when user press 4 it should return 1 or 0 (isempty)
    when user press 4 it should do count no of items
    when user press 0 it should exit from program.
    program should continue to run until user press 0 as choice
*/
#include<stdio.h>
//function declration
void main()
{
    int choice=0;
    printf("\n Press 1 to insert new item into queue");
    printf("\n Press 2 to delete item from queue");
    printf("\n Press 3 to display all item ");
    printf("\n Press 4 check queue is empty or not");
    printf("\n Press 5 to count no of items in queue ");
    printf("\n Press 0 to exit ");
    scanf("%d", &choice);
    
}