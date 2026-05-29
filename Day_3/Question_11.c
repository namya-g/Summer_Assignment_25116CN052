//Q11 Write a program to Find GCD of two numbers.
#include<stdio.h>
int main()
{
    int n1,n2,a,gcd=1;
    printf("Enter the first number:- ");
    scanf("%d",&n1);
    printf("Enter the second number:- ");
    scanf("%d",&n2);
    if(n1>n2)
    {
        a=n2;
    }
    else
    {
        a=n1;
    }
    for(int i=1;i<=a;i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            gcd=i;
        }
    }
    printf("The GCD of %d and %d is %d.",n1,n2,gcd);
    return 0;
}