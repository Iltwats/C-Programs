//Program to print table of a 'n' no
#include<stdio.h>
int main()
{
int n,i;
printf("Enter the no for table\n");
scanf("%d",&n);
for(i=1;i<=20;++i)
{printf("%d*%d=%d\n",n,i,n*i);
}
return 0;
}
