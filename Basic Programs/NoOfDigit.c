//Program to check no if digit in a number
#include<stdio.h>
int main()
{long int n;
int count=0;
printf("Enter an integer:");
scanf("%11d",&n);
while(n!=0)
{n/=10;
++count;
}
printf("Number of digits:%d",count);
return 0;
}
