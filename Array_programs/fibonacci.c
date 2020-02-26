//progrma to print fibonacci series
#include<stdio.h>
int main()
{
    int n,first=0,second=1,third;
    printf("Enter a value for no of lines to be printed");
    scanf("%d",&n);
    printf("The fibonacci pattern is %d%d",first,second);
    for(int i=2;i<n;++i)
    {              
        third=first+second;
        printf("%d",third);
        first=second;  
        second=third;       
    }
    
}