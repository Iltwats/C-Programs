//to print fibonacci series using recursion function usng for loop

#include<stdio.h>
int fibo(int num);
int main()
{
    int n;
    printf("Enter a value for no of lines to be printed\n");
    scanf("%d",&n);
    printf("The fibonacci pattern is:\t0 ");
    for(int i=0;i<n;i++)
        {printf("%d ",fibo(i));}
    return 0;
}
int fibo(int num)   //this program has a issue in this function if anyone can help!
{
    
    if((num<=2)&&(num!=0))
    {
        return 1;
    }
    else
    {    
       return(fibo(num-1)+fibo(num-2));
    }
}