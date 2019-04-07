#include<stdio.h>

void main()
{
    int i,no,n,sum,tmp;
    for(no=1;no<=500;no++)
    {
        tmp=no;
        sum=0;
        if(no>=1 && no<=9)
        {
            while(tmp>0)
            {
                n=tmp%10;
                sum=sum+(n);
                tmp=tmp/10;
            }
        }
        else
        {
            while(tmp>0)
            {
                n=tmp%10;
                sum=sum+(n*n*n);
                tmp=tmp/10;
            }
        }
        if(no==sum)
        {
            printf("%d ",sum);
        }
    }
}
