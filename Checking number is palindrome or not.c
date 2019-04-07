#include<stdio.h>

void main()
{
    int no,sum=0,n,temp;
    printf("Enter number: ");
    scanf("%d",&no);
    n=no;
        while(no>0)
        {
            temp=no%10;
            sum=(sum*10)+temp;
            no=no/10;
        }
    if(n==sum)
    {
        printf("Given number is palindrome.");
    }
    else
        printf("Given number is not palindrome.");
}
