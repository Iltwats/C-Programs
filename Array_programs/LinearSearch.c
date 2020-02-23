//Linear seacrh program to find array at different positions.
#include<stdio.h>
int main()
{
    int array[10],search,c,n;
    printf("Enter no of elements in array\n");
    scanf("%d",&n);
    printf("Enter %d elements in the array\n",n);
    for (c = 0; c <n; c++)
    {
        scanf("%d",&array[c]);
    }
    printf("Enter the no to be search\t");
    scanf("%d",&search);
    for (c = 0; c <n; c++)
    {
        if (array[c]==search)
        {
            printf("\n%d present at %dth location.\n",search,c+1);
            break;
        }
        
    }
    if(c==n)
    {
        printf("%d not present in array",search);
    }

}