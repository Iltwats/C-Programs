// Program to insert an element into an array
#include<stdio.h>
int main()
{
    int i,n,num,pos,arr[10];
    printf("\nEnter the number of elements in an array:\n");
    scanf("%d",&n);
    printf("Enter the elements in an array:\n");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be inserted and position where to be inserted:\n");
    scanf("%d%d",&num,&pos);
    for(i=n;i>=pos;i--)
        arr[i+1]=arr[i];
    arr[pos]=num;
    printf("The array after the insertion of %d is\n",num);
    for ( i = 0; i <n+1; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}