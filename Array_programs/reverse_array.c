//Reversing a array taken from the User.
#include<stdio.h>
int main()
{
    int a[10],c,i;
    printf("Enter the size of array\n");
    scanf("%d",&c);
    printf("Enter the array\n");
    for (int i = 0; i <c; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array entered by you is:\t");
    for (int i = 0; i < c; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe reversed array is:\t");
   for (int i = c-1; i>=0; i--)
   {
       printf("%d ",a[i]);
   }
}
