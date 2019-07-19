/*

        Checking given string is palindrome of not without using built-in functions.

        created by: Chaitanya Kachave.

*/

#include<stdio.h>
void main()
{
    char str[30],strrev[30];
    int i=0,j=0;
    printf("Enter string: ");
    scanf("%s",&str);
    while(str[i]!=NULL)
    {
        i++;
    }
    i--;
    while(i>=0)
    {
        strrev[j]=str[i];
        j++;
        i--;
    }
    i=0;
    j=0;
    while(str[i]!=NULL)
    {
        if(str[i]!=strrev[i])
        {
            printf("String is not palindrome.");
            j++;
            break;
        }
        i++;
    }
    if(j==0)
    {
        printf("string is palindrome.");
    }
}
