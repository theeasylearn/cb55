/* write a menu driven program to work on stack
    when user press 1 it should push new item
    when user press 2 it should pop existing item
    when user press 3 it should display all item in LIFO manner (Last in first manner)
    when user press 4 it should do peek operation(display top most item if any)
    when user press 5 it should return 1 or 0 (isempty)
    when user press 6 it should do count no of items
    when user press 0 it should exit from program.
    program should continue to run untill user press 0 as choice
*/
#include <stdio.h>
#define SIZE 5 // constant variable whose value can not be changed (it's name should be in uppercase)
int top = -1;  // global variable

// function declaration
// return type function name (arguments)
void push(int stack[], int value);
int pop(int stack[]);
void display(int stack[]);
int peek(int stack[]);
int isEmpty(int stack[]);
int count(int stack[]);

void main()
{
    int stack[SIZE];
    int choice = 0;
    int value;
    do
    {
        printf("\n press 1 to push new item");
        printf("\n press 2 to pop existingitem");
        printf("\n press 3 to display all items in LIFO manner (top to bottom)");
        printf("\n press 4 to peek an item");
        printf("\n press 5 to to check stack is empty or not ");
        printf("\n press 6 to to count no of item in stack");
        printf("\n press 0 to exit from program.");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: // if choice == 1
            printf("\n Enter value to push in stack \n");
            scanf("%d", &value);
            push(stack, value);
            break;
        case 2: // if choice == 2
            printf("remove item");
            break;
        case 3:
            display(stack);
            break;
        case 4:
            value = peek(stack);
            printf("top most value in stack = %d",value);
            break;
        case 5:
            printf("check stack is empty or not");
            break;
        case 6:
            printf("count items ");
            break;
        case 0:
            printf("end of program");
            break;
        default:
            printf("\n Invalid choice, press give choice between 0 to 6");
            break;
        }
    } while (choice != 0);
}
//definition(function body)

void push(int stack[], int value)
{
    if (top <= (SIZE - 2)) // 3<=5
    {
        top = top + 1; // 1 + 1 = 2
        stack[top] = value;
        printf("\n value inserted at %d position \n ", top + 1);
    }
    else
    {
        printf("\n stack overflow, means we can not insert new value into stack as it full");
    }
}
//definition(function body)
void display(int stack[])
{
    int index = top;
    while (index >= 0)
    {
        printf("\n %d", stack[index]); // index = 4 -> (50)
        index--;
    }
}
int peek(int stack[])
{
    int top_most_value = stack[top];
    return top_most_value;
}