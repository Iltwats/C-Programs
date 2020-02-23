//Program for addition of matrix.
#include<stdio.h>
 int main()
{
     int a[10][10],b[10][10],c[10][10],n,m,i,j;
    printf("Enter no of rows and columns for matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements for matrix A\n");
    for ( i = 0; i <m; i++)
    {
       for ( j = 0; j <n; j++)
       {
           scanf("%d",&a[i][j]);
       }
       
    }
    printf("You Entered the following elements:\n");
    for ( i = 0;i<m; i++)
    {
        for ( j = 0;j<n; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
        
    }
    printf("\nEnter elements for matrix B\n");
    for ( i = 0; i <m; i++)
    {
       for ( j = 0; j <n; j++)
       {
           scanf("%d",&b[i][j]);
       }
       
    }
    printf("You Entered the following elements:\n");
    for (i = 0;i<m; i++)
    {
        for (j = 0;j<n; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
        
    }
    printf("\nAdding the two matrix.....");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    printf("\nBoth matrix added successfully!");
    printf("\nHere is the new matrix:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            printf("%d ",c[i][j]);
        printf("\n");
    }   
    
}
