//write a program for factorial of numbers using stack
//stack program2
//roll:92500588015



#include<stdio.h>
#define MAX 30

int stack[MAX],top=-1;
void push(int value);
int pop();


void main()
{
  int n,i,fact=1;
  printf("\n enter value : ");
  scanf("%d",&n);
  for(i=0;i<=n;i++)
  {
      push(i);
  }
  while(top!=-1)
  {
      fact=fact*pop();
  }
  printf("\n factorial is : %d",fact);



}
void push(int value)
{
    if(top==MAX-1)
    {
        printf("\n stack is overflow..");
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
    if(top==-1)
    {
        printf("\n stack is underflow..");
    }
    else
    {
        val=stack[top];
        top--;
        return val;
    }

}
