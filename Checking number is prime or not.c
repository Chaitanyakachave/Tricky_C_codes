#include<stdio.h>

void main()
{
    int i,c=0,n;
    printf("Enter number which you want to check: ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("Given Number is not prime.");
            c++;
            break;
        }
    }
    if(c==0)
    {
        printf("Given number is prime.");
    }
}
