//Checking for vowles usinf switch case
#include<stdio.h>
#include<ctype.h>   //header file for function toupper
int main()
{
char a;
printf("Enter the string\n");
scanf("%c",&a);
switch(toupper(a))
{
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    printf("\nGiven character is vowel\n");
    break;
default:
    printf("Given character is consonant");

}
return 0;
}
