//Q62 Write a program to Find maximum frequency element.
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
    int maxCount=0;
    int ele=arr[0];
    for(int k=0;k<n;k++)
    {
        int count=0;
        for(int l=0;l<n;l++)
        {
            if(arr[k]==arr[l])
            {
                count++;
            }
        }
        if(count>maxCount)
        {
            maxCount=count;
            ele=arr[k];
        }
    }
    printf("\nMaximum frequency element is:- %d",ele);
    return 0;
}