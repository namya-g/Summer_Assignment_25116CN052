//Q72 Write a program to Sort array in descending order.
//Done by selection sort technique
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
    InputArray(arr,n);
    printf("\nThe unsorted array is:- ");
    DisplayArray(arr,n);
    for(int i=0;i<n-1;i++)
    {
        int large=arr[i],index=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]>large)
            {
                large=arr[j];
                index=j;
            }
        }
        int temp=arr[i];
        arr[i]=large;
        arr[index]=temp;
    }
    printf("\nThe array sorted in descending order is:- ");
    DisplayArray(arr,n);
}