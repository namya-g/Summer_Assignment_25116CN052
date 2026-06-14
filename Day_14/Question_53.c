//Q53 Write a program to Linear search.
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
    int ele,pos,flag=0;
    printf("Enter element to be searched in array:- ");
    scanf("%d",&ele);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==ele)
        {
            pos=j;
            flag+=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n%d is found at index %d in the array.",ele,pos);
    }
    else
    {
        printf("\n%d is not found in the array.",ele);
    }
    return 0;
}