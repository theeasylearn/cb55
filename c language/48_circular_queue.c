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
            if (value <= 0)
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
    if ((front == -1 && rear == -1))
    {
        front = 0;
        rear = 0;
        queue[rear] = value;
    }
    else if (rear < (SIZE - 1))
    {
        rear++;
        queue[rear] = value;
    }
    else if (front > 0 && rear == (SIZE - 1))
    {
        if (rear == (SIZE - 1))
        {
            rear = 0;
        }
        else
        {
            rear++;
        }
        queue[rear] = value;
    }
    else if (rear == (SIZE - 1))
    {
        printf("circular quque overflow, new value can not be inserted.");
    }
}
void display(int quque[])
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("\n");
        if (front < rear)
        {
            for (int index = front; index <= rear; index++)
            {
                printf("\t %d", quque[index]);
            }
            printf("\n");
        }
        else
        {
            for (int index = 0; index <= rear; index++)
            {
                printf("\t %d", quque[index]);
            }
            for (int i = front; i < SIZE; i++)
            {
                printf("\t %d", quque[i]);
            }
            printf("\n");
        }
    }
}
int isEmpty(int queue[])
{
    int temp = count(queue);
    return temp;
}
int delete(int queue[])
{
    if (front == -1)  // queue empty
    {
        return -1;
    }

    int temp = queue[front];

    if (front == rear) // only one element was in queue
    {
        front = -1;
        rear = -1;
    }
    else //front 2 rear =2 
    {
        front = (front + 1) % SIZE; // circular move
    }
    return temp;
}

int count(int queue[])
{
    if (front == -1) // empty
        return 0;
    if (rear >= front)
        return (rear - front + 1);
    else
        return (SIZE - front + rear + 1);
}