// enrollment number 92500527175
//  Write a program to find GCD of two numbers.

#include<stdio.h>

#define MAX 100

int stack[MAX], top= -1;

void push(int value);
int pop();

void main()
{
    int num1,num2,a, b, temp;

    printf("Enter a number 1: ");
    scanf("%d", &num1);

    printf("Enter a number 2: ");
    scanf("%d", &num2);

    push(num1);
    push(num2);

    b = pop();
    a = pop();

    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }

    push(a);

    printf("\n GCD of number is :%d",a);
}

void push(int value)
{
    if(top==MAX-1)
    {
        printf("\n stack overflow...");
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
        printf("\n Stack is underflow..");
        return 0;
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }
}
