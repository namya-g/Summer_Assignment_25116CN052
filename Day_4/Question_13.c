//Q13 Write a program to Generate Fibonacci series.
#include<stdio.h>
int main()
{
    int a=0,b=1;
    int n,c=0;
    printf("Enter number of terms in the Fibonacci Series:- ");
    scanf("%d",&n);
    printf("Fibonacci Series of %d terms is:-\n",n);
    for(int i=1;i<=n;i++)
    {    
        c=a+b;
        printf("%d\n",a);
        a=b;
        b=c;
    } 
    return 0;
}