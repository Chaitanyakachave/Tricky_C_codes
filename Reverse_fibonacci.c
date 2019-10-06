#include<stdio.h>

void main()
{
     int i=1,no,temp,prev=0,next=1;
     printf("How many numbers of fabonaci series you want: ");
     scanf("%d",&no);
     while(i<=no)
     {
        temp=prev;
        prev=next;
        next=prev+temp;
        i++;
     }
     printf("\n\nReversed fabonaci Series is: ");
      while(i>1)
     {
        temp=next;
        next=prev;
        prev=temp-next;
        printf("%d ",prev);
        i--;
     }
     printf("\n\n");
}
