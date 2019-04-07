#include<stdio.h>
void main()
{
    int a[10],i,j=1,k,n;
    printf("Enter how many numbers you want to add in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=1;j<n;j++)
    {
        i=j;
        k=a[i];
        {
        while(k<a[i-1] && i>0)
        {
            a[i]=a[i-1];
            i--;
        }
        a[i]=k;
        }
    }
    printf("Array in increasing order is: \n");
     for(i=0;i<n;i++)
    {
        printf(" %d ",a[i]);
    }
}
