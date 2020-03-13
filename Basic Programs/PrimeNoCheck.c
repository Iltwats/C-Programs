//program to check entered no by user is prime or not
#include<stdio.h>
int main()
{int n,p=0;
    printf("ENter the no to be checked for prime\t");
    scanf("%d",&n);
        for(int i=1;i<=n;i++)
            {if (n%i==0)
                {
                     p++;
                }
            }
    if(p==2)
    {printf("The No %d is prime",n);
    }
    else
    {
    printf("The No %d is not prime",n);
    }

}
