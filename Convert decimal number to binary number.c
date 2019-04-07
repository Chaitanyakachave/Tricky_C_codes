#include<stdio.h>
 void main()
 {
     int no,a=0,x,temp;
     printf("Enter any number: ");
     scanf("%d",&no);
     temp=no;
     while(no>0)
     {
         x=no%2;
         a=(a*10)+(x);
         no=no/2;
     }
     printf("The binary form of number %d is %d",temp,a);

 }
