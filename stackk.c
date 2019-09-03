#include<stdlib.h>
#include<stdio.h>
#define max 5
void push(int [],int , int *);
void pop(int [],int *);
void display(int [],int *);
int main()
 {
   int stack[max],ch,num,top=-1;
   int *top_p=&top;
   do{
   printf("Enter 1 for push,2 for pop, 3 for display, anything else for exit \n ");
   scanf("%d",&ch);
     switch(ch){
                case 1:printf("Enter number to push \n");
                       scanf("%d",&num);
                       push(stack,num,top_p);
                       break;
                case 2:pop(stack,top_p);
                       break;
                case 3:display(stack,top_p);
                       break;
                default:printf("So you have chosen.......EXIT \n");
                }
      }while(ch>0&&ch<=3);
 return 0;}//main

 void push(int s[],int num,int *top_pp)
     {
       if(*top_pp>=(max-1))
       {
         printf("Stack overflow");
       }
       else
       {
         (*top_pp)++;
         s[*top_pp]=num;
       }
     }//push
void pop(int s[],int *top_pp)
     {
      if(*top_pp<0)
      {
        printf("Stack underflow \n");
      }
      else
      {
        printf(" Element popped - %d \n",s[*top_pp]);
     (*top_pp)--; }
     }//pop
void display(int s[],int *top_pp)
     {
       printf("Displaying the updated stack(from top) -- \n");
       for(int i=*top_pp;i>=0;i--)
        {printf("%d \n",s[i]);
     }}//display

      
