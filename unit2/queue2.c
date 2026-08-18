//write a program which perform following operation using circular queue
//simple queue program2
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
        printf("\n underflow..");
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
    }
    else
    {
        rear++;
    }
}
void delete_elements()
{
    if(front==-1 && front>rear)
    {
        printf("\n queue underflow..");
        return;
    }
    else
    {
        int val;
        val=queue[front];
        printf("\n deleted elemenet : %d",val);

        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front++;
        }
    }
}
void display()
{
    if(front==-1 && front>rear)
    {
        printf("\n the queue is empty..");
    }
    else
    {
        printf("\n elements: ");

        for(int i = front; i<=rear; i++)
        {
            printf("%d",queue[i]);
        }
        printf("\n");
    }
}
