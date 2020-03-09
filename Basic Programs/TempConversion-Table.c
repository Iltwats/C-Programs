//Program to print fahrehiet to celsius conversion table
#include<stdio.h>
int main()
{
    float fahr,cels;
    int upper,lower,step;
    upper=300;//upper limit of temperature table
    lower=0;//lower limit of temp table
    step=10;//step size
    fahr=lower;
    while (fahr<=upper)
    {
        cels=5*(fahr-32)/9;
        printf("%0.2f\t %0.2f\n",fahr,cels);
        fahr+=step;
        
        }
      return 0;  
}