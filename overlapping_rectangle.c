#include<stdio.h>
//coordinates of the given two rectangle are as below
char str[80]={"(0,0),(2,2),(2,0),(0,2),(1,0),(1,2),(6,0),(6,2)"};
int i=1,min1x,max1x,min2x,max2x,maxx,minx,miny,maxy,area,mnx1,max1,mny1,may1,area1;
int n1=20,n2=44,n3=22,n4=46;
char over[30];


void incre(int x)
{
    if(x==n1)
    {
        n1++;
        n2++;
        n3++;
        n4++;
    }
    else if(x==n2)
    {
        n2++;
        n3++;
        n4++;
    }
    else if(x==n3)
    {
        n3++;
        n4++;
    }
    else if(x==n4)
    {
        n4++;
    }
}

void main()
{

    i=1;
    if(str[i]=='-')
    {
        i++;
        incre(n1);
        min1x=(str[i]-48)*(-1);
        max1x=(str[i]-48)*(-1);
    }
    else
    {
        min1x=(str[i]-48);
        max1x=str[i]-48;
    }
    while(i<n1)
    {
        if(str[i]=='(' || str[i]=='-')
        {
            if(str[i]=='(')
            {
                i++;
                incre(n1);
            }
            if(str[i]=='-')
            {
                i++;
                incre(n1);
                if(min1x>(str[i]-48)*(-1))
                    min1x=str[i]-48;
                if(max1x<(str[i]-48)*(-1))
                    max1x=str[i]-48;
            }
            else
            {
                if(min1x>str[i]-48)
                    min1x=str[i]-48;
                if(max1x<str[i]-48)
                    max1x=str[i]-48;
            }
        }
        else
        {
            if(min1x>str[i]-48)
                min1x=str[i]-48;
            if(max1x<str[i]-48)
                max1x=str[i]-48;
        }
        i+=6;
    }
    mnx1=min1x;
    max1=max1x;

    if(str[i]=='(' || str[i]=='-')
    {
        if(str[i]=='(')
        {
            i++;
            incre(n2);
        }
        if(str[i]=='-')
        {
            i++;
            incre(n2);
            min2x=(str[i]-48)*(-1);
            max2x=(str[i]-48)*(-1);
        }
        else
        {
            min2x=(str[i]-48);
            max2x=(str[i]-48);
        }
    }
    else
    {
        min2x=str[i]-48;
        max2x=str[i]-48;
    }
    while(i<n2)
    {
        if(str[i]=='(' || str[i]=='-')
        {
            if(str[i]=='(')
            {
                i++;
                incre(n2);
            }
            if(str[i]=='-')
            {
                i++;
                incre(n2);
                if(min2x>(str[i]-48)*(-1))
                    min2x=str[i]-48;
                if(max2x<(str[i]-48)*(-1))
                    max2x=str[i]-48;
            }
            else
            {
                if(min2x>str[i]-48)
                    min2x=str[i]-48;
                if(max2x<str[i]-48)
                    max2x=str[i]-48;
            }
        }
        else
        {
            if(min2x>str[i]-48)
                min2x=str[i]-48;
            if(max2x<str[i]-48)
                max2x=str[i]-48;
        }
        i+=6;
    }
    if(min1x<=min2x)
        minx=min2x;
    else
        minx=min1x;
    if(max1x<=max2x)
        maxx=max1x;
    else
        maxx=max2x;
   // printf("%d    %d\n",minx,maxx);

    i=3;
    if(str[i]=='-' || str[i]==',')
    {
            if(str[i]==',')
            {
                i++;
                incre(n3);
            }
            if(str[i]=='-')
            {
                i++;
                incre(n1);
                if(min1x>(str[i]-48)*(-1))
                    min1x=str[i]-48;
                if(max1x<(str[i]-48)*(-1))
                    max1x=str[i]-48;
            }
            else
            {
                if(min1x>str[i]-48)
                    min1x=str[i]-48;
                if(max1x<str[i]-48)
                    max1x=str[i]-48;
            }
    }
    else
    {
        min1x=str[i]-48;
        max1x=str[i]-48;
    }

    while(i<n3)
    {
        if(min1x>str[i]-48)
            min1x=str[i]-48;
        if(max1x<str[i]-48)
            max1x=str[i]-48;
        i+=6;
    }
    mny1=min1x;
    may1=max1x;
    min2x=str[27]-48;
    max2x=str[27]-48;
    while(i<n4)
    {
        if(min2x>str[i]-48)
            min2x=str[i]-48;
        if(max2x<str[i]-48)
            max2x=str[i]-48;
        i+=6;
    }
    if(min1x<=min2x)
        miny=min2x;
    else
        miny=min1x;
    if(max1x<=max2x)
        maxy=max1x;
    else
        maxy=max2x;
   // printf("%d    %d\n",miny,maxy);
    area=(maxx-minx)*(maxy-miny);
    if(area<0)
        area*=-1;
    area1=(max1-mnx1)*(may1-mny1);
    if(area1<0)
        area1*=-1;
    printf("Overlapping area: %d  ",area);

}
