//Q21 Write a program to Convert decimal to binary. 
#include<stdio.h>
int main()
{
    int dec,bin=0;
    printf("Enter a decimal number:- ");
    scanf("%d",&dec);
    int x=dec;
    if(dec>=0)
    {
        int pv=1;
        while(x!=0)
        {
            int d=x%2;
            bin+=d*pv;
            x=x/2;
            pv*=10;
        }
        printf("Binary equivalent of decimal number %d is %d.",dec,bin);
    }
    else
    {
        printf("Invalid input is entered.");
    }
    return 0;
}