//Q16 Write a program to Print Armstrong numbers in a range.
#include<stdio.h>
#include<math.h>
int main()
{
    int ll,ul;
    printf("Enter lower limit of the range:- ");
    scanf("%d",&ll);
    printf("Enter upper limit of the range:- ");
    scanf("%d",&ul);
    printf("Armstrong numbers between %d and %d are:-\n",ll,ul);
    for(int i=ll;i<=ul;i++)
    {
        int x=i,count=0;
        while(x!=0)
        {
            count+=1;
            x=x/10;
        }
        int y=i,sum=0;
        while(y!=0)
        {
            int d=y%10;
            sum+=pow(d,count);
            y=y/10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    } 
    return 0;
}