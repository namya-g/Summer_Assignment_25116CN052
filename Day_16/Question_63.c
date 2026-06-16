//Q63 Write a program to Find pair with given sum.
#include<stdio.h>
int main()
{ 
    int n,arr[50],target;
    printf("Enter number of elements in array:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d of array:- ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter the target sum:- ");
    scanf("%d",&target);
    int found=0;
    printf("\nPairs with given sum are:- ");
    for(int k=0;k<n;k++)
    {
        for(int l=k+1;l<n;l++)
        {
            if(arr[k]+arr[l]==target)
            {
                printf("(%d,%d) ",arr[k],arr[l]);
                found=1;
            }
        }
    }
    if(found==0)
    {
        printf("There are no pairs for sum %d.",target);
    }
    return 0;
}