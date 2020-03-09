//program to calculate exponent of f(x,y) using recursion
#include<stdio.h>
int exp_rec(int,int);
int main()
{
    int num1,num2,rem;
    printf("Enter the base and power:\n");
    scanf("%d%d",&num1,&num2);
    rem=exp_rec(num1,num2);
    printf("%d to the power %d is %d",num1,num2,rem);
    return 0;
}

int exp_rec(int x,int y)
{
    if (y==0)
    {
        return 1;
    }
    return(x*exp_rec(x,y-1));
    
}