//Q55 Write a program to Second largest element.
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
    int large=arr[0],second_large=arr[0];
    for(int j=0;j<n;j++)
    {
        if(arr[j]>large)
        {  
            large=arr[j];
        }
        if(second_large>arr[j])
        {
            second_large=arr[j];
        } 
    }
    for(int k=0;k<n;k++)
    {
        if((arr[k]>second_large)&&(large>arr[k]))
        {
            second_large=arr[k];
        }
    }
    printf("\nSecond largest element of the array is %d.",second_large);
    return 0;
}