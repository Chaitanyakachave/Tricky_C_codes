#include<stdio.h>
void main()
{
    int i=0,j=0,row=7;
    for(i=row;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=row;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
