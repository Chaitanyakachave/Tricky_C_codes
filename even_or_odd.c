#include<stdio.h>
#define even_or_odd(x) (x%2)?printf("Odd"):printf("Even")
void main()
{
    int x;
    printf("Enter number to check: ");
    scanf("%d",&x);
    even_or_odd(x);

}
