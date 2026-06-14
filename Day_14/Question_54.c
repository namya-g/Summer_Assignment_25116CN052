//Q54 Write a program to Frequency of an element.
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
    int ele,count=0;
    printf("Enter element whose frequency is to be checked in array:- ");
    scanf("%d",&ele);
    for(int j=0;j<n;j++)
    {
        if(arr[j]==ele)
        {
            count+=1;
        }
    }
    printf("\n%d is present %d times in the array.",ele,count);
    return 0;
}