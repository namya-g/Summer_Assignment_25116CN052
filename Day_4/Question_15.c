//Q15 Write a program to Check Armstrong number.
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    int x=n,count=0;
    while(x!=0)
    {
        count+=1;
        x=x/10;
    }
    int y=n,sum=0;
    while(y!=0)
    {
        int d=y%10;
        sum+=pow(d,count);
        y=y/10;
    }
    if(sum==n)
    {
        printf("%d is an Armstrong number.",n);
    }
    else
    {
        printf("%d is not an Armstrong number.",n);
    }
    return 0;
}