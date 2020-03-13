//Program to convert enterd array into a number
#include<stdio.h>
#include<math.h>
int main()
{
    int number=0,digit[10],numofdigits,i;
    printf("Enter no of Digits:\n");
    scanf("%d",&numofdigits);
    printf("\nEnter the digits:\n");
    for ( i = 0; i <numofdigits; i++)
    {
        scanf("%d",&digit[i]);
    }
    i=0;
    while(i<numofdigits)
    {
        number=number+digit[i]*pow(10,1);
        i++;
    }
    printf("\n The number is=%d",number);

} 