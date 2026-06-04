//Q14 Write a program to Find nth Fibonacci term.
#include<stdio.h>
int main()
{
    int a=0,b=1;
    int n,c=0;
    printf("Enter the position of term in the Fibonacci Series to be searched:- ");
    scanf("%d",&n);
    if(n>0)
    {
        for(int i=1;i<=n-1;i++)
        {
            c=a+b;
            a=b;
            b=c;
        }
        printf("Term of the Fibonacci Series at position %d is %d.",n,a);
    }
    else
    {
        printf("Invalid position is entered.");
    }
    return 0;
}