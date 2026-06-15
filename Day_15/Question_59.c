//Q59 Write a program to Rotate array right.
#include<stdio.h>
int main()
{
    int n,arr[50],k;
    printf("Enter number of elements in array:- ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter element %d of array:- ",i+1);
        scanf("%d", &arr[i]);
    } 
    printf("Enter number of positions to rotate right:- ");
    scanf("%d",&k);
    k=k%n;
    int c1=0;
    int c2=n-1;
    while(c1<c2)
    {
        int temp=arr[c1];
        arr[c1]=arr[c2];
        arr[c2]=temp;
        c1+=1;
        c2-=1;
    }
    c1=0; 
    c2=k-1;
    while(c1<c2)
    {
        int temp=arr[c1];
        arr[c1]=arr[c2];
        arr[c2]=temp;
        c1+=1;
        c2-=1;
    } 
    c1=k; 
    c2=n-1;
    while(c1<c2)
    {
        int temp=arr[c1];
        arr[c1]=arr[c2];
        arr[c2]=temp;
        c1+=1;
        c2-=1;
    }
    printf("\nThe right rotated array is:-");
    for(int j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    } 
    return 0;
}