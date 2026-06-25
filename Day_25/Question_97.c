//Q97 Write a program to Merge two sorted arrays.
#include <stdio.h>
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
    int n1,n2;
    printf("Enter the size of the first sorted array:- ");
    scanf("%d", &n1);
    printf("Enter the size of the second sorted array:- ");
    scanf("%d", &n2);
    int n3=n1+n2;
    int arr1[n1],arr2[n2],merged[n3];
    printf("\nArray 1:-\n");
    InputArray(arr1,n1);
    printf("\nArray 2:-\n");
    InputArray(arr2,n2);
    int i=0,j=0,k=0;
    while((i<n1)&&(j<n2))
    {
        if(arr1[i]<arr2[j])
        {
            merged[k++]=arr1[i++];
        }
        else
        {
            merged[k++]=arr2[j++];
        }
    }
    while(i<n1)
    {
        merged[k++]=arr1[i++];
    }
    while(j<n2)
    {
        merged[k++]=arr2[j++];
    }
    printf("\nMerged Sorted Array:-\n");
    DisplayArray(merged,n3);
    return 0;
}