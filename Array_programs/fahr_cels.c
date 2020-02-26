//program to convert fahrehiet to celsius
#include<stdio.h>
#include<conio.h>
int main()
{
    float fahr,cels;
    printf("enter the temp in fahrenhiet:\n");
    scanf("%f",&fahr);
    cels=5*-(fahr-32)/9;
    printf("the celsius is:%0.2f",cels);
    getch();
}