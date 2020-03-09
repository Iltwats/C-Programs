//to print fibonacci series using recursion function

#include<stdio.h>
void fibo(int n);
int main()
{
    int n;
    printf("Enter a value for no of lines to be printed");
    scanf("%d",&n);
    printf("The fibonacci pattern is %d %d",0,1);
    fibo(n-2);
    return 0;
}
void fibo(int n)
{
    static int first=0,second=1,third;
    if(n>0)
    {
        third=first+second;
        first=second;  
        second=third; 
        printf(" %d",third);
        fibo(n-1);
    }
}