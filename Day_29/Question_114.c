//Q114 Write a program to Create menu-driven array operations system.
#include<stdio.h>
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
struct Array
{
        int arr[100];
        int arrno;
        int size;
};
int main()
{
    struct Array s[100];
    printf("ARRAY MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Add a new array.\n");
        printf("2. View an array.\n");
        printf("3. Update an array.\n");
        printf("4. Delete an array.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            int arr[100];
            printf("\nEnter size of the array:- ");
            scanf("%d",&s[count].size);
            printf("\nEnter array number of the array:- ");
            scanf("%d",&s[count].arrno);
            InputArray(s[count].arr,s[count].size);
            count+=1;
            printf("\nNew array is added successfully.");
        }
        else if(choice==2)
        {
            int rn,flag=0,n;
            printf("\nEnter the array number of the array you want to search:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].arrno==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("\nArray is found.");
                printf("\nArray number of the array:- %d",s[n].arrno);
                printf("\nArray:- ",DisplayArray(s[n].arr,s[n].size));
            }
            else
            {
                printf("\nArray is not found.");
            }
        }
        