/*Q31 Write a program to Print character triangle.
A
AB
ABC
ABCD
ABCDE*/
#include<stdio.h>
int main()
    {
    for(int i=1;i<=5;i++)
    {
        int a=65;
        for(int j=1;j<=i;j++)
        {
            printf("%c",a);
            a+=1;
        }
        printf("\n");
    }
    return 0;
}