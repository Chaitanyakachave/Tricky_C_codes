#include<iostream>
#include<string.h>
using namespace std;
void ceasar_cipher(char*,int);
int main()
{
    char str[100];
    cout<<"Enter string: ";
    cin.getline(str,100);
    int n;
    cout<<"Enter number by which each alphabet have to increase: ";
    cin>>n;
    ceasar_cipher(str,n);
    return 0;

}
void ceasar_cipher(char* str,int n)
{
    int i,j;
    for(i=0;i<strlen(str);i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')
        {
            for(j=0;j<n;j++)
            {
                if(str[i]==122)
                    str[i]=97;
                else
                    str[i]+=1;
            }
        }
    }
    cout<<str;
}
