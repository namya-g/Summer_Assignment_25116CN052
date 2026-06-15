//Q57 Write a program to Reverse array.
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
    printf("\nThe array is:-");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
    int c1=0,c2=n-1;
    while(c1<c2)
    {
        int temp=arr[c1];
        arr[c1]=arr[c2];
        arr[c2]=temp;
        c1+=1;
        c2-=1;
    }
    printf("\nReverse of the array is:-");
    for(int k=0;k<n;k++)
    {
        printf("%d ",arr[k]);
    }
    return 0;
}