//Program to find length of string
#include<stdio.h>
int main()
{
    char s[100];
    int i=0;
    printf("enter a string");
    scanf("%c",&s);
    while(s[i]!='\0')
    i=i+1;
    printf("size is %d",i);
    return 0;
}
