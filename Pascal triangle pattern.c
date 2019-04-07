#include<stdio.h>
void main()
{
    int i,j,n=1,row=7;
    for(i=row;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=0;j<(2*(row-i)+1);j++)
        {
            printf("*");
        }
        printf("\n");

    }
}
