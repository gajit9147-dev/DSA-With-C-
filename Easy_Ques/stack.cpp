#include<stdio.h>

#define MAX 5
// Stack implementation using array
int stack[MAX];
int top = -1;
// Function to push an element onto the stack
void push(int value)
{
    if(top==MAX-1)
    {
        printf("Stack Overflow\n");
    }
    else
    {
        top++;
        stack[top]=value;
        printf("%d inserted\n",value);
    }
};
// Function to pop an element from the stack

void pop()
{
    if(top==-1)
    {
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d deleted\n",stack[top]);
        top--;
    }
}

// Function to peek at the top element of the stack
void peek()
{
    if(top==-1)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Top Element = %d\n",stack[top]);
    }
}
// Function to display the elements of the stack
void display()
{
    int i;

    if(top==-1)
    {
        printf("Stack Empty\n");
    }
    else
    {
        printf("Stack Elements:\n");

        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
// Function to search for an element in the stack
void search(int key)
{
    int i;

    for(i=top;i>=0;i--)
    {
        if(stack[i]==key)
        {
            printf("Element Found\n");
            return;
        }
    }

    printf("Element Not Found\n");
}

void isEmpty()
{
    if(top==-1)
        printf("Stack Empty\n");
    else
        printf("Stack Not Empty\n");
}

void isFull()
{
    if(top==MAX-1)
        printf("Stack Full\n");
    else
        printf("Space Available\n");
}
int main(){
    push(10);
    push(20);
    push(30);
    peek();
    pop();
    display();
    search(20);
    search(40);
    isEmpty();
    isFull();
    return 0;
}