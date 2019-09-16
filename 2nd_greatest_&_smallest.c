 #include<stdio.h>
 void main()
 {
     int mat[50],n,i,j,c;
     printf("How many numbers you want to enter: ");
     scanf("%d",&n);
     for(i=0;i<n;i++)               // accept n numbers from user
     {
         scanf("%d",&mat[i]);
     }
     for(i=0;i<n;i++)               // sort array ascending order
     {
         for(j=0;j<n-1;j++)
         {
             if(mat[j]>mat[j+1])
             {
                 c=mat[j];
                 mat[j]=mat[j+1];
                 mat[j+1]=c;
             }
         }
     }
     printf(" 2nd lowest= %d\n 2nd greatest= %d",mat[1],mat[n-2]);   // after sorting 2nd number from first and 2nd number from last will be 2nd lowest and 2nd greatest numbers
 }
