//program to calculate square of given no
#include<stdio.h>
int main()
{int i,n,sum=0;
printf("enter the n no.s for square to be printed");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+(i*i);
}
printf("Sum is=%d",sum);
return 0;
}
