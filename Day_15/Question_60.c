//Q60 Write a program to Move zeroes to end.
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
    int c1=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            int temp=arr[c1];
            arr[c1]=arr[i];
            arr[i]=temp;   
            c1+=1;
        }
    }
    printf("\nThe array with zeroes at the end is:-");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    } 
    return 0;
}