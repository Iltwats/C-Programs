// Program to transpose the matrix
#include<stdio.h>
int main()
{
    int m,n,i,j,a[10][10],b[10][10];
    printf("Enter order of matrix\n");
    scanf("%d%d",&m,&n);
    printf("Enter elements of matrix\n");
    for ( i = 0; i <m; i++)
    {
        for (j = 0; j <n; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    } 
    printf("You entered the matrix as follows\n");
     for ( i = 0; i <m; i++)
    {
        for (j = 0; j <n; j++)
        {
            printf("%d ",a[i][j]);
        }printf("\n");
        
    } 
     for ( i = 0; i <m; i++)
    {
        for (j = 0; j <n; j++)
        {
            b[i][j]=a[j][i];
        }
        
    } 
    printf("The transpose of matrix\n");
     for ( i = 0; i <m; i++)
    {
        for (j = 0; j <n; j++)
        {
            printf("%d ",b[i][j]);
        }printf("\n");
        
    } 
    return 0;
}