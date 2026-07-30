// Er no.. 92500527175

#include<stdio.h>
#define MAX 3

int stack [MAX],top=-1;
void push();
void pop();
void peek();
void update();
void display();

void main()
{
    int op;
    do
    {
        printf("\n 1. Push");
        printf("\n 2. Pop");
        printf("\n 3. Peek");
        printf("\n 4. Update");
        printf("\n 5. Display");
        printf("\n 6. Exit");

        printf("\n Enter Your Choice : ");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                push();
                break;

            case 2:
                pop();
                break;

            case 3:
                peek();
                break;

            case 4:
                update();
                break;

            case 5:
                display();
                break;
        }
    }while(op!=6);
}

void push()
{
    int value;
    printf("\n Enter Value to be added :");
    scanf("%d",&value);

    if (top==MAX-1)
    {
        printf("\n Stack Overflow..");
    }
    else
    {
        top++;
        stack[top]=value;
    }
}

void pop()
{
    int val;
    if (top==-1)
    {
        printf("\n Stack is Underflow..");
    }
    else
    {
        val=stack[top];
        top--;
        printf("\n Value Deleted is : %d",val);
    }
}

void peek()
{
    if ( top == -1)
    {
        printf("\n Stack is Empty..");
    }
    else
    {
        printf("\n Top Element is : %d",stack[top]);
    }
}

void update()
{
    int i,x;

    printf("\n Enter Index : ");
    scanf("%d",&i);

    printf("\n Enter Value : ");
    scanf("%d",&x);

    if (top-1+1<=-1)
    {
        printf("\n Invalid Index..");
    }
    else
    {
        stack[top-1+1]=x;
    }
}

void display()
{
    int i;

    if (top == -1)
    {
        printf("\n Stack is empty..");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("\n %d",stack[i]);
        }
    }
}
