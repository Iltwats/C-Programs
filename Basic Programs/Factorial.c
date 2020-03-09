//find the factorial of a program using for loop

#include<stdio.h>
int main()
{
    long long int n,p=1;
    printf("Enter no for which factorial is required:");
    scanf("%d",&n);
    for(int i=1;i<n;n--)
    {
        p=p*(n);
    }
    printf("The factorial is %d",p);
}
