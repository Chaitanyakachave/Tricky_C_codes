#include<stdio.h>

void main()
{
     int i=1,no,temp,prev=0,next=1;
     printf("Enter how many number of series you want: ");
     scanf("%d",&no);
     while(i<=no)
     {

        printf("%d ",prev);
        temp=prev;
        prev=next;
        next=prev+temp;
        i++;

     }
}
