//Linklist program one
//Roll:92500588015


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = NULL;

void create_ll();
void display();
void insert_beg();
void insert_end();
void insert_before();
void insert_after();
void delete_beg();
void delete_end();
void delete_node();

int main()
{
    int option;
    do
    {
        printf("\n\n**** MAIN MENU ****");
        printf("\n 1 : Create a list");
        printf("\n 2 : Display the list");
        printf("\n 3 : Add a node at the beginning");
        printf("\n 4 : Add a node at the end");
        printf("\n 5 : Add a node before a given node");
        printf("\n 6 : Add a node after a given node");
        printf("\n 7 : Delete a node from the beginning");
        printf("\n 8 : Delete a node from the end");
        printf("\n 9 : Delete a specific node");
        printf("\n 10: Exit");
        printf("\n\nEnter your option: ");
        scanf("%d", &option);

        switch(option)
        {
            case 1: create_ll();
             break;
            case 2: display();
             break;
            case 3: insert_beg();
             break;
            case 4: insert_end();
             break;
            case 5: insert_before();
             break;
            case 6: insert_after();
             break;
            case 7: delete_beg();
             break;
            case 8: delete_end();
             break;
            case 9: delete_node();
             break;
            case 10: printf("\nExiting program...");
             break;
            default: printf("\nInvalid option! Please try again.");
        }
    } while(option != 10);
    return 0;
}

void create_ll()
{
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter data (-1 to end): ");
    scanf("%d", &num);
    while(num != -1)
    {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->data = num;
        new_node->next = NULL;

        if(start == NULL)
        {
            new_node -> next = NULL;
            start = new_node;
        }
        else
        {
            ptr = start;
            while(ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = new_node;
            new_node ->next=NULL;
        }
        printf("Enter data (-1 to end): ");
        scanf("%d", &num);
    }
}

void display()
{
    struct node *ptr;
    ptr = start;

    while(ptr != NULL)
    {
        printf("\t %d -> ", ptr->data);
        ptr = ptr->next;
    }

}

void insert_beg()
{
    struct node *new_node;
    int num;
    printf("\n Enter data: ");
    scanf("%d", &num);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = start;
    start = new_node;

}

void insert_end()
{
    struct node *new_node, *ptr;
    int num;
    printf("\nEnter data: ");
    scanf("%d", &num);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    new_node->next = NULL;
    ptr = start;
    while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;

    printf("Node inserted successfully.");
}

void insert_before()
{
    struct node *new_node, *ptr, *preptr;
    int num, val;
    printf("\nEnter data to insert: ");
    scanf("%d", &num);
    printf("Enter value before which data is to be inserted: ");
    scanf("%d", &val);

    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;
    ptr = start;
    while(ptr->data != val)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
}

void insert_after()
{
    struct node *new_node, *ptr;
    int num, val;
    if(start == NULL)
    printf("\nEnter data to insert: ");
    scanf("%d", &num);
    printf("Enter value after which data is to be inserted: ");
    scanf("%d", &val);
    new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = num;

    ptr = start;
    while(ptr != NULL && ptr->data != val)
    {
        ptr = ptr->next;
    }
}

void delete_beg()
{
    struct node *ptr;
    ptr = start;
    start = start->next;
    free(ptr);
}

void delete_end()
{
    struct node *ptr, *preptr;
    while(ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    printf("\nDeleted element: %d", ptr->data);
    free(ptr);
}

void delete_node()
{
    struct node *ptr, *preptr;
    int val;
    printf("\nEnter value of node to delete: ");
    scanf("%d", &val);

    ptr = start;
    if(ptr->data == val)
    {
        delete_beg();
    }
    else
   {
       while(ptr -> data !=val)
       {
           preptr = ptr;
           ptr = ptr -> next;

       }

       preptr -> next = ptr -> next;
       free(ptr);
   }

}
