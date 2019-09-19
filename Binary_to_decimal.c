#include<stdio.h>
int pow(int x,int y);
void main()
{
    char str[100];
    int k=0,i,decimal=0;
    printf("Enter binary number: ");
    scanf("%s",&str);
    for(i=strlen(str)-1;i>=0;i--)
    {
        if(str[i]=='1')
        {
            decimal=decimal+pow(2,k);
        }

        k++;
    }
     printf("%d\n",decimal);
}
int pow(int x,int y)
{
    int k=0,sum=1;
    for(k=0;k<y;k++)
    {
        sum=x*sum;

    }
    return sum;
}
