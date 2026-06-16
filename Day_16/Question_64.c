//Q64 Write a program to Remove duplicates from array.
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
    for(int k=0;k<n;k++)
    {
        for(int l=k+1;l<n;l++)
        {
            if(arr[k]==arr[l])
            {
                for(int m=l;m<n-1;m++)
                {
                    arr[m]=arr[m+1];
                }
                n-=1;
                l-=1;
            }
        }
    }
    printf("\nArray after removing duplicates is:- ");
    for(int p=0;p<n;p++)
    {
        printf("%d ",arr[p]);
    }
    return 0;
}