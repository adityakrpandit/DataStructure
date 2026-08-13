// enrollment number 92500527175
//  Write a program to find the Smallest Common Divisor of a given two numbers.

#include <stdio.h>

#define MAX 100

int stack[MAX], top= -1;

void push(int value);
int pop();

void main()
{
    int num,i,div;

    printf("Enter the number : ");
    scanf("%d",&num);

    for (i=2;i<=num;i++)
    {
        if(num%i==0)
        {
            push(i);
        }
    }
     for(i=2;i<=num;i++)
     {
         if(num%i==0)
         {
             div=pop();
         }
     }
     printf("The Smallest Common Divisor is : %d",div);
}

void push(int value)
{
    if(top==MAX-1)
    {
        printf("\n stack overflow...");
        return;
    }
    else
    {
        top++;
        stack[top]=value;
    }
}

int pop()
{
    int val;
    if(top == -1)
    {
        printf("\n Stack is Underflow..");
        return-1;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}
