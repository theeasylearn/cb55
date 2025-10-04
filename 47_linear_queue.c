/*
write a menu driven program to work on queue
    when user press 1 it should insert new item into queue at rear end
    when user press 2 it should delete item from queue at front end
    when user press 3 it should display all item in FIFO manner (first in first manner)
    when user press 4 it should return 1 or 0 (isempty)
    when user press 5 it should do count no of items
    when user press 0 it should exit from program.
    program should continue to run until user press 0 as choice
*/
#include <stdio.h>
#define SIZE 5
// function declration
void insert(int quque[], int value);
int delete(int quque[]);
void display(int queue[]);
int isEmpty();
int count();
int front = -1, rear = -1;
void main()
{
    // create array
    int queue[SIZE];
    int value;

    int choice = 0;
    do
    {
        printf("\n Press 1 to insert new item into queue");
        printf("\n Press 2 to delete item from queue");
        printf("\n Press 3 to display all item ");
        printf("\n Press 4 check queue is empty or not");
        printf("\n Press 5 to count no of items in queue ");
        printf("\n Press 0 to exit ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter new value to insert in quque");
            scanf("%d", &value);
            insert(queue, value);
            break;

        case 2:
            value = delete(queue);
            if (value == -1)
            {
                printf("queue is empty");
            }
            else
            {
                printf("value removed from queue %d", value);
            }
            break;

        case 3:
            display(queue);
            break;

        case 4:
            value = isEmpty(queue);
            if (value == -1)
            {
                printf("queue is empty");
            }
            else
            {
                printf("queue has value(s)");
            }
            break;

        case 5:
            value = count(queue);
            if (value <=0)
            {
                printf("queue is empty");
            }
            else
            {
                printf("queue has %d items", value);
            }
            break;

        case 0:
            printf("good bye. ");
            break;

        default:
            printf("invalid choice");
            break;
        }
    } while (choice != 0);
}
// define(code) insert function
void insert(int queue[], int value)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0; // chain assignment (assign same value to multiple variable)
        queue[rear] = value;
    }
    else if (rear < SIZE - 1) // 0<5-1
    {
        rear = rear + 1;
        queue[rear] = value;
    }
    else
    {
        printf("queue overflow");
    }
}
void display(int quque[])
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else if (front > rear)
    {
        printf("queue is empty");
    }
    else
    {
        printf("\n");
        for (int index = front; index <= rear; index++)
        {
            printf("\t %d", quque[index]);
        }
        printf("\n");
    }
}
int delete(int queue[])
{
    if (front == -1 || front > rear)
    {
        return -1; // queue is empty
    }
    else
    {
        int temp = queue[front]; // temp = 10
        queue[front] = 0;
        front++;
        return temp;
    }
}
int isEmpty(int queue[])
{
    if (front == -1 || front > rear)
    {
        return -1; // queue is empty
    }
    else
    {
        return 1; // queue has value
    }
}
int count(int quque[])
{
    if (front == -1 || front > rear)
    {
        return 0;
    }
    else 
    {
        int temp = (rear - front) + 1;
        return temp;
    }
}