//Program to check given no is palindrome no or not
#include<stdio.h>
int main()
{int n,origino,remainder,revno=0;
printf("Enter the number\n");
scanf("%d",&n);
origino=n;
while(n!=0)
{remainder=n%10;
revno=revno*10+remainder;
n/=10;}
if(origino==revno)
printf("Number is palindrome\n");
else
printf("Number is not a palindrome");
return 0;
}
