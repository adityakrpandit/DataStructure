//enrollment number 92500527175
//Write a program to print strings in reverse order using stack.

#include <stdio.h>
#include <string.h>

#define max 100

char stack[max];
int top = -1;

void push(char);
char pop();

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        push(str[i]);
    }

    printf("Reversed String: ");

    while(top != -1)
    {
        printf("%c", pop());
    }

    return 0;
}

void push(char value)
{
    if(top == max - 1)
    {
        printf("\nStack Overflow");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

char pop()
{
    if(top == -1)
    {
        printf("\nStack Underflow");
        return '\0';
    }
    else
    {
        return stack[top--];
    }
}
