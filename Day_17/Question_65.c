//Q65 Write a program to Merge arrays.
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
    int n1,arr1[50],n2,arr2[50],n3,merged[100];
    printf("\nArray 1:-\n");
    printf("Enter the size of array:- ");
    scanf("%d",&n1);
    InputArray(arr1,n1);
    printf("\nArray 2:-\n");
    printf("Enter the size of array:- ");
    scanf("%d",&n2);
    InputArray(arr2,n2);
    printf("\nArray 1 is:- ");
    DisplayArray(arr1,n1);
    printf("\nArray 2 is:- ");
    DisplayArray(arr2,n2);
    n3=n1+n2;
    for(int i=0;i<n1;i++)
    {
        merged[i]=arr1[i];
    }
    for(int j=0;j<n2;j++)
    {
        merged[n1+j]=arr2[j];
    }
    printf("\nThe merged array is:- ");
    DisplayArray(merged,n3);
    return 0;
}