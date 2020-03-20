//Program to delete a element of an array from a particular position
#include<stdio.h>
int main()
{
    int i,n,pos,arr[10];
    printf("Enter the no of elements\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("\n Enter the position from which the number has to be deleted: ");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];

    }
    n--;
    printf("\nThe array after after the deletion is:  ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

}