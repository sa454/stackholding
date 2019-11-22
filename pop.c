#include<stdio.h>


   
  int POP(int* top,int stack[]);
  int POP(int* top,int stack[])
{   
     if(*top == -1)
  {
      printf("STACK UNDERFLOW");
       return 0;
  }  
   return stack[(*top)--];
} 
 
