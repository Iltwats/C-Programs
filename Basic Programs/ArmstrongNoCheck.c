//program to check given no is armstrong no is not
#include<stdio.h>
int main()
{int n,r,sum=0,temp; //declaring variables 
printf("Enter the number\n");
scanf("%d",&n);
temp=n;//intialising the entered value to a new variable to temp
while(n>0)
{r=n%10;
sum=sum+(r*r*r);
n=n/10;
}
if(temp==sum)
{printf("Armstrong number\n");
}
else
printf("Number is not a armstrong no");
return 0;
}
