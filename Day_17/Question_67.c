//Q67 Write a program to Intersection of arrays. 
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
int Unique(int arr[],int ele,int size)
{
    for(int i=0;i<size;i++)
    {
        if(ele==arr[i])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n1,arr1[50],n2,arr2[50],n3=0,arr3[100];
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
    for(int i=0;i<n1;i++)
    {
        if(Unique(arr3,arr1[i],n3)==1)
        {
            for(int j=0;j<n2;j++)
            {
                if(arr1[i]==arr2[j])
                {
                    arr3[n3]=arr1[i];
                    n3+=1;
                    break;
                }
            }
        }
    }
    printf("\nThe intersection of both the arrays is:- ");
    DisplayArray(arr3,n3);
    return 0;
}