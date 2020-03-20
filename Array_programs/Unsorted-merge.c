//Program to merge the two unsorted array
#include<stdio.h>
int main()
{
    int arr1[10],arr2[10],arr3[20];
    int i,n1,n2,m,index=0;
    printf("Enter the no of elements in first array\n");
    scanf("%d",&n1);
    printf("\nEnter the elements of first array\n");
    for ( i = 0; i < n1; i++)
    {
       scanf("%d",&arr1[i]);
    }
    printf("Enter the no of elements in second array\n");
    scanf("%d",&n2);
    printf("\nEnter the elements of second array\n");
    for ( i = 0; i < n2; i++)
    {
       scanf("%d",&arr2[i]);
    }
    m=n1+n2;
    for ( i = 0; i < n1; i++)
    {
        arr3[index]=arr1[i];
        index++;
    }
    for ( i = 0; i <n2; i++)
    {
        arr3[index]=arr2[i];
        index++;
    }
    printf("\nThe merged array is ");
    for ( i = 0; i <m; i++)
    {
        printf("%d ",arr3[i]);
    } 
    
}