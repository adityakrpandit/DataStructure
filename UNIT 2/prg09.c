// enrollment number 92500527175
// 9. Write a program which performs the following operations using a simple queue. : insert() -> delete() -> display()

#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;

void insert();
void delete_element();
void display();

void main()
{
    int op;
    do
    {
        printf("\n 1. Insert");
        printf("\n 2. Delete");
        printf("\n 3. Display");
        printf("\n 4. Exit");

        printf("\n Enter Your Choice :");
        scanf("%d",&op);

        switch(op)
        {
        case 1:
            insert();
            break;
        case 2:
            delete_element();
            break;
        case 3:
            display();
            break;
        case 4:
            break;
        default:
            printf("\n Invalid Option");
        }
    }
    while(op!=4);
}

void insert()
{
    int num;
    printf("\n Enter Number : ");
    scanf("%d",&num);

    if (rear == MAX-1)
    {
        printf("\n Queue is Overflow...");
        return;
    }
    else if (front==-1 && rear == -1)
    {
        front=rear=0;
    }
    else
    {
        rear++;
    }
    queue[rear]=num;
}


void delete_element()
{
    int val;
    if (front==-1 || front>rear)
    {
        printf("\n Queue is Underflow..");
        return;
    }
    else
    {
        val=queue[front];
        printf("\n Deleted Value is : %d",val);
        if (front==rear)
        {
            front=rear=-1;
            return;
        }
        front++;

    }
}


void display()
{

    int i;
    if (front==-1 || front>rear)
    {
        printf("\n Queue is Empty...");
        return;
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("\t%d",queue[i]);
        }
    }
}
