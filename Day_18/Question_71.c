//Q71 Write a program to Binary search.
#include<stdio.h>
void InputArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("\nEnter element %d of array:- ",i+1);
        scanf("%d",&arr[i]);
    }
}
void DisplayArray(int arr[],int size)
{
    printf("{ ");
    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        if(i<size-1)
        {
            printf(", ");
        }
    }
    printf(" }");
}
int main()
{
    int n,arr[50];
    printf("Enter the size of the array:- ");
    scanf("%d",&n);
    printf("Please enter elements of the array sorted in ascending order.\n");
    InputArray(arr,n);
    int ele;
    printf("Enter the element you want to search:- ");
    scanf("%d",&ele);
    int low=0,high=n-1,mid=(low+high)/2;
    while((arr[mid]!=ele)&&(low<=high))
    {
        if(ele<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        mid=(low+high)/2;
    }
    if(arr[mid]==ele)
    {
        printf("\n%d is present in array index %d.",ele,mid);
    }
    else
    {
        printf("\n%d is not present in the array.",ele);
    }
}