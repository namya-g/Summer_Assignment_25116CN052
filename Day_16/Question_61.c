//Q61 Write a program to Find missing number in array.
#include<stdio.h>
int main()
{ 
    int n,arr[50];
    printf("Enter number of elements in array:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d of array:- ",i+1);
        scanf("%d",&arr[i]);
    }
    int expectedSum=(n+1)*(n+2)/2;
    int actualSum=0;
    for(int k=0;k<n;k++)
    {
        actualSum+=arr[k];
    }
    printf("\nMissing number is:- %d",expectedSum-actualSum);
    return 0;
}