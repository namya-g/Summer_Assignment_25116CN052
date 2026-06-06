//Q24 Write a program to Find x^n without pow().
#include <stdio.h>
double calculatePower(double base, int exp) 
{
    double result=1.0; 
    if(base==0.0) 
    {
        return 0.0;
    }
    long long positive_exp=exp; 
    if(positive_exp<0)
    {
        positive_exp=-positive_exp;
    }
    for(long long i=1;i<=positive_exp;i++) 
    {
        result=result*base;
    } 
    if(exp<0)
    {
        result=1.0/result;
    }
    return result;
}
int main() 
{
    double base,result;
    int exp;
    printf("Enter the base (x):- ");
    scanf("%lf",&base);  
    printf("Enter the exponent (n):- ");
    scanf("%d",&exp); 
    if((base==0)&&(exp == 0))
    {
        printf("Result: Undefined (0^0 is mathematically indeterminate)\n");
        return 0;
    }
    result=calculatePower(base,exp);
    printf("\nResult: %.4lf ^ %d = %.6lf\n",base,exp,result);
    return 0;
}