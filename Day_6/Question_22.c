//Q22 Write a program to Convert binary to decimal. 
#include <math.h>
#include <stdio.h>
int convert(long long n) 
{
    int dec=0,i=0,rem;
    while(n!=0) 
    {
        rem=n%10;
        n/=10;
        dec+=rem*pow(2,i);
        ++i;
    }
    return dec;
}
int main() 
{
    long long bin;
    printf("Enter a binary number: ");
    scanf("%lld", &bin);
    printf("%lld in binary = %d in decimal", bin, convert(bin));
    return 0;
}