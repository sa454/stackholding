#include<stdio.h>



void display(int* top,int stack[]);

   void display(int* top,int stack[])
{   
    int i;
   if(*top == -1)
{
     printf("STACK UNDERFLOW\n");
      return ;
}
    for(i=0;i<=*top;i++)
    printf("%d->",stack[i]);

}
