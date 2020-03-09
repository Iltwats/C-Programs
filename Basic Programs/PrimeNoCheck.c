//program to check entered no by user is prime or not
#include<stdio.h>
int main()
{int n,i,p=0;
printf("Enter a no\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{if(n%i==0)
    {p++;}
    }
 if(p==2)
 {printf("Entered no is prime\n");
 }
 else
 printf("Number is not prime");
 return 0;
    }
