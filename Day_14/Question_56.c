//Q56 Write a program to Find duplicates in array.
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
    int count=0;
    for(int j=0;j<n;j++)
    {
        int flag=0;
        for(int h=0;h<j;h++)
        {
            if(arr[j]==arr[h])
            {
                flag+=1;
                break;
            }
        }
        if(flag==0)
        {
            for(int m=0;m<n;m++)
            {
                if((arr[j]==arr[m])&&(j!=m))
                {
                    printf("\n%d is a duplicate element.",arr[j]);
                    count+=1;
                    break;
                }
            }
        }
    }
    if(count==0)
    {
        printf("There are no duplicate elements in the array.");
    } 
    return 0;
}