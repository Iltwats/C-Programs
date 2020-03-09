//Find Greatest common divisor of a no uisng recursion
#include<stdio.h>
int GCD(int,int);
int main()
{
    int num1,num2,rem;
    printf("Enter the two no.s\n");
    scanf("%d%d",&num1,&num2);
    rem=GCD(num1,num2);
    printf("GCD of %d and %d is %d",num1,num2,rem);
    return 0;

}

int GCD(int x,int y)
{
    int rem;
    rem=x%y;
    if(rem==0)
        return y;
    else
    {
        return(GCD(y,rem));
    }
    
}