//Q114 Write a program to Create menu-driven array operations system.
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
                printf("\nArray:- ");
                DisplayArray(s[n].arr,s[n].size);
            }
            else
            {
                printf("\nArray is not found.");
            }
        }
        else if(choice==3)
        {
            int rn,flag=0,n;
            printf("\nEnter the array number of the array you want to update:- ");
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
                int rec=0;
                printf("\nArray is found.");
                printf("\nChanges that can be made are:-");
                printf("\n1. Change an array element.");
                printf("\n2. Delete an array element.");
                printf("\n3. Add an element to the array");
                printf("\nEnter the record you want to change (1,2,3):- ");
                scanf("%d",&rec);
                if(rec==1)
                {
                    int index;
                    printf("\nEnter index of the array element to be changed:- ");
                    scanf("%d",&index);
                    printf("Enter new value of the array element:- ");
                    scanf("%d",&s[n].arr[index]);
                    printf("\nArray is updated successfully.");
                }
                else if(rec==2)
                {
                    int index;
                    printf("\nEnter index of the array element to be deleted:- ");
                    scanf("%d",&index);
                    s[n].size-=1;
                    for(int i=index;i<s[n].size;i++)
                    {
                        s[n].arr[i]=s[n].arr[i+1];
                    }
                    printf("\nArray is updated successfully.");
                }
                else if(rec==3)
                {
                    printf("\nEnter element to be added to the array:- ");
                    scanf("%d",&s[n].arr[s[n].size]);
                    s[n].size+=1;
                    printf("\nArray is updated successfully.");
                }
                else
                {
                    printf("\nInvalid choice is entered.");
                }
            }
            else
            {
                printf("\nArray is not found.");
            }
        }
        else if(choice==4)
        {
            int rn,flag=0,n;
            printf("\nEnter the array number of the array you want to delete:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].arrno==rn)
                {
                    n=i;
                    flag+=1;
                    for(int j=i;j<count-1;j++)
                    {
                        s[j]=s[j+1];
                    }
                    count-=1;
                    break;
                }
            }
            if(flag==1)
            {
                int rec=0;
                printf("\nArray is found and deleted successfully.");
            }
            else
            {
                printf("\nArray is not found.");
            }
        }
        else
        {
            printf("\nInvalid choice is entered.");
        }
        printf("\nDo you have other array inquiries (y/n):- ");
        scanf(" %c",&ch);
    }
    return 0;
}