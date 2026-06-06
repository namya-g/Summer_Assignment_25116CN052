//Q23 Write a program to Count set bits in a number.
#include <stdio.h>
int main() 
{
    int n,temp;
    int count=0;
    printf("Enter a number: ");
    scanf("%d",&n); 
    temp=n;
    while (temp>0)
    {
        if(temp%2==1)
        {
            count++;
        }
        temp=temp/2;
    }
    printf("The number %d has %d set bits.",n,count);
    return 0;
}