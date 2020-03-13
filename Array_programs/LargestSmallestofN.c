// Program to find largest and smallest number using arrays
#include <stdio.h>
int main()
{
    int i, n, arr[30], large = -1111, small = 1234, pos1, pos2;
    printf("Enter the no of elements in array:\t");
    scanf("%d", &n);
    printf("Enter the elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
            pos1 = i;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] < small)
        {
            small = arr[i];
            pos2 = i;
        }
    }
    printf("\nThe largest no is %d and is found at position %d.\n", large, pos1+1);
    printf("The smallest no is %d and is found at position %d\n.", small, pos2+1);
}