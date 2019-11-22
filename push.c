
#include<stdio.h>

 void PUSH(int* value,int* top,int stack[],int MAX);

   void PUSH(int* value,int* top,int stack[],int MAX)
{
      if(*top == MAX-1)
    {
      printf("STACK OVERFLOW");
        return;
     }
     stack[++(*top)]=*value;
}




 

