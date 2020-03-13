// Program to print pascal triangle

#include <stdio.h>
int main()
{
    int array[50][50], i, j, rows, num = 25, k;
 
    printf("\n enter the number of rows:");
    scanf("%d", &rows);
    for (i = 0; i < rows; i++)
    {
        for (k = num - 2 * i; k >= 0; k--)
            printf(" ");
	    for (j = 0; j <= i; j++)
	    {
                if (j == 0 || i == j)
		{
                    array[i][j] = 1;
                }
                else
                {
                    array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
		}
		printf("%3d ", array[i][j]);
            }
            printf("\n");
    }
}

