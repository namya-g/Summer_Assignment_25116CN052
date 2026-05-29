//Q10 Write a program to Print prime numbers in a range.
#include<stdio.h>
int main()
{
    int ll,ul;
    printf("Enter the lower limit of the range:- ");
    scanf("%d",&ll);
    printf("Enter the upper limit of the range:- ");
    scanf("%d",&ul);
    printf("Prime numbers between %d and %d are:-\n",ll,ul);
    for(int i=ll;i<=ul;i++)
    {
        int flag=0;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
                {
                    flag+=1;
                    break;
                }
        }
        if(flag==0)
        {
            printf("%d\n",i);
        }
    } 
    return 0;
}