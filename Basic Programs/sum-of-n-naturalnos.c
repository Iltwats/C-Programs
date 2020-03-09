#include<stdio.h>
int main()
{int n,sum=0;
printf("Enter N the no till sum is reqiured\n");
scanf("%d",&n);
for(int i=0;i<=n;++i)
sum+=i;
printf("The sum of Natural no.s=%d",sum);
}