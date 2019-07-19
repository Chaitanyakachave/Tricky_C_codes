/*

        Problem statement: Printing characters in string in alphabetical order.

        created by: Chaitanya Kachave       Date: 19/07/2019          last updated on: 19/07/2019

        Open link For more C programs: https://github.com/Chaitanyakachave/Chaitanya-Kachave

*/


#include<stdio.h>
#include<string.h>
char toupr(char x);
int main()
{
    char str[50],temp,prev;
    int j=0,i=0,l,n,k,m;
    printf("Enter string: ");
    scanf("%s",&str);
    l=strlen(str);
    n=l;
    for(i=0;i<n;i++)
    {
        for(j=0;j<l-1;j++)
        {
            prev=str[j];
            if(toupr(prev)<toupr(str[1+j]))
            {
                temp=str[j+1];
                str[j+1]=prev;
                str[j]=temp;
            }
        }
        l--;
    }
    strcpy(str,strrev(str));
    printf("%s",str);
}
char toupr(char x)
{
    if(x>=65 && x<=90)
    {
        x+=32;
    }
    return(x);
}
