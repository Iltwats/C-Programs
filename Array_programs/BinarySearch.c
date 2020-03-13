// Program for searching inside a array using binary search
#include<stdio.h>
int main()
{
    int c,first,last,middle,n,search,array[100];
    printf("Enter no of elements\n");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
        for (c= 0; c<n;c++)
        {
            scanf("%d",&array[c]);
        }
    printf("enter Value to find\n");
    scanf("%D",&search);
    first=0;
    last=n-1;
    middle=(first+last)/2;
         while(first<=last)
        {
            if(array[middle]<search)
            first=middle+1;
            else if (array[middle]==search)
            {
                printf("%d found at location %d.\n",search,middle+1);
                break;
            }
            else
            {
                last=middle-1;
                middle=(first+last)/2;
            }
            
                      
        }
         if(first>last)
            printf("Not found! %d is not present in the list.\n",search);
}