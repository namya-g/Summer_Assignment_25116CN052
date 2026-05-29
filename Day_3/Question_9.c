//Q9 Write a program to Check whether a number is prime.
#include<stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter a number:- ");
    scanf("%d",&n); 
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag+=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("%d is a prime number.");
    }
    else
    {
        printf("%d is not a prime number.");
    }
    return 0;
}