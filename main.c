

#include<stdio.h>
#include"stack.h"
#include<stdlib.h>
#define MAX 10




int top = -1;
 int stack[MAX];

 

 int main()
{
  int value,choice;

   while(1)
{
     printf("\n\n1.PUSH\n");
     printf("2.DISPLAY\n");
     printf("3.POP\n");
     printf("4.exit\n");
     printf("ENTER THE CHOICE=\n");
     scanf("%d",&choice);
     switch(choice)
           {


       case 1:
           printf("enter the value =");
           scanf("%d",&value);
            PUSH(&value,&top,stack,MAX);
             break;
       case 2:
             display(&top,stack);
              break;
       case 3:
            value = POP(&top,stack);
            printf("pop value = %d:",value);
              break;

       case 4:
         exit(1);
       default:
             printf("ENTER THE CORROCT CHOICE");

              break;


            }//end switch
       }//end while
return 0;
}//end main
   







