// enrollment number 92500527175
// 5. Write a program to find the power of a given number using stack.

#include <stdio.h>

#define MAX 100

int stack[MAX], top= -1;

void push(int value);
int pop();

void main()
{
    int base,power,i;
    int result = 1;

    printf("Enter a base number : ");
    scanf("%d", &base);

    printf("Enter a power number : ");
    scanf("%d", &power);


    for(i = 1; i<=power;i++)
    {
        push(base);
    }

    while(top != -1)
    {
        result = result * pop();
    }

    pritf("\n Power of %d ^ %d = %d",base,power,result);
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
