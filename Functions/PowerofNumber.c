//program to print power of any 'n' number using functions

#include<stdio.h>
int power(int base,int n);
void main()
{
    int base,n,ans;
    printf("Enter the base and power of no respectively\n");
    scanf("%d%d",&base,&n);
    ans=power(base,n);
    printf("The value of %d to the power %d is %d",base,n,ans);
    
}
int power(int base,int n)
{int p;
for(p=1;n>0;--n)
{p=p*base;}
return p;}