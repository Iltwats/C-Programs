//program to find factorial of a given no using recursion
#include<stdio.h>
int Fact(int);
int main()
{
    int num;
    printf("Enter the num\n");
    scanf("%d",&num);
    printf("Factorial of %d= %d",num,Fact(num));
    return 0;
}

int Fact(int n)
{
    if(n==1)
        return 1;
    return(n*Fact(n-1));
}