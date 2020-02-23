//Program about declaration of array(integer and character) and how to take input and output of an array.

#include<stdio.h>
int main()
{
    int arr[50],i,n;
    char ch[50];
    printf("Enter how many elements you want to take\n");
    scanf("%d",&n);
    printf("Enter the integer elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    getchar();
    printf("Enter the character string\n");
    gets(ch);
    printf("Your entered array is:-\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nThe string you enterd is- %s \n",ch);
}
