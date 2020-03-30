//Program to calculate sum of all elements of linear array

#include<stdio.h>
int main()
{
    int n;
    int arr[n];
    int sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
