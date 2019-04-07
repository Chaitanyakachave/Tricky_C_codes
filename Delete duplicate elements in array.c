#include<stdio.h>

void main()
{
    int a[20], i, j, k, n;
    printf("Enter How many no You want to add in array: ");
    scanf("%d",&n);
    printf("Enter %d numbers\n",n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\nNew array is: ");
    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; )
        {
            if(a[j] == a[i])
            {
                for(k = j; k < n; k++)
                {
                    a[k] = a[k+1];
                }
                n--;
            }
            else
            {
                j++;
            }
        }
    }
    printf("Array after deleting duplicate number is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }
}
