//write a program which perform following operation using simple queue
//simple queue program1
//roll:92500588015


#include<stdio.h>
#define MAX 5
int front=-1,rear=-1;
int queue[MAX];
void insert();
void delete_elements();
void display();
void main()
{

    int op;
    do
    {
        printf("\n 1. insert");
        printf("\n 2. delete");
        printf("\n 3. display");
        printf("\n 4. Exit");
        printf("\n Enter your choice : ");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                insert();
                break;
            case 2:
                delete_elements();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("\n Exit..");
                break;
            default:
                printf("\n invalid choice..");
                break;
        }
    }while(op!=4);
}
void insert()
{
    int num;
    printf("\n enter number to be inserted : ");
    scanf("%d",&num);

    if(rear==MAX-1)
    {
        printf("\n overflow..");
    }
    else
    {
        rear++;
        queue[rear]=num;
    }
}
void delete_elements()
{
    int val;
    if(front==-1 && rear==-1)
    {
         front=rear=-1;
    }
    else
    {
        printf("\n Deleted element: %d",queue[front]);
        front++;
        if(front>rear)
        {
            front=rear=-1;
        }

    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("\n queue is empty.");
    }
    else
    {
        printf("\n queue elements are: ");
        for(i=front;i<=rear;i++)
        {
            printf("%d ",queue[i]);
        }
    }
}
