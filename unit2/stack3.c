//write a program to print string in reverse order using stack
//stack program3
//roll:92500588015


#include<stdio.h>
#define MAX 100

int stack[MAX],top=-1;
void push(char value);
char pop();


void main()
{
  char str[20];
  int i=0;

  printf("\n enter a string : ");
  gets(str);

  while(str[i]!='\0')
  {
      push(str[i]);
      i++;
  }
  while(top!=-1)
  {
      printf("\n %c",pop());
  }



}
void push(char value)
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
char pop()
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

