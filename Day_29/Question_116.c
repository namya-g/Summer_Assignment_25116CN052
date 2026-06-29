//Q116 Write a program to Create inventory management system.
#include<stdio.h>
struct Item
{
    int itemno;
    char name[100];
    int quantity;
    float price;
};
void DisplayItem(struct Item it)
{
    printf("\nItem Name:- %s", it.name);
    printf("\nQuantity:- %d", it.quantity);
    printf("\nPrice:- %.2f", it.price);
}
int main()
{
    struct Item s[100];
    printf("INVENTORY MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("\nSelect an option from the below menu:-\n");
        printf("1. Add a new item.\n");
        printf("2. View an item.\n");
        printf("3. Update an item.\n");
        printf("4. Delete an item.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nEnter item number of the item:- ");
            scanf("%d",&s[count].itemno);
            printf("Enter name of the item:- ");
            scanf(" %[^\n]",s[count].name); 
            printf("Enter quantity of the item:- ");
            scanf("%d",&s[count].quantity);
            printf("Enter price of the item:- ");
            scanf("%f",&s[count].price);
            count+=1;
            printf("\nNew item is added successfully.\n");
        }
        else if(choice==2)
        {
            int rn,flag=0,n;
            printf("\nEnter the item number of the item you want to search:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].itemno==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("\nItem is found.");
                printf("\nItem number of the item:- %d",s[n].itemno);
                DisplayItem(s[n]);
                printf("\n");
            }
            else
            {
                printf("\nItem is not found.\n");
            }
        }
        else if(choice==3)
        {
            int rn,flag=0,n;
            printf("\nEnter the item number of the item you want to update:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].itemno==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                int rec=0;
                printf("\nItem is found.");
                printf("\nChanges that can be made are:-");
                printf("\n1. Update quantity (Restock/Sell).");
                printf("\n2. Update price.");
                printf("\nEnter the record you want to change (1,2):- ");
                scanf("%d",&rec);
                if(rec==1)
                {
                    printf("\nEnter new quantity of the item:- ");
                    scanf("%d",&s[n].quantity);
                    printf("\nItem is updated successfully.\n");
                }
                else if(rec==2)
                {
                    printf("\nEnter new price of the item:- ");
                    scanf("%f",&s[n].price);
                    printf("\nItem is updated successfully.\n");
                }
                else
                {
                    printf("\nInvalid choice is entered.\n");
                }
            }
            else
            {
                printf("\nItem is not found.\n");
            }
        }
        else if(choice==4)
        {
            int rn,flag=0,n;
            printf("\nEnter the item number of the item you want to delete:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].itemno==rn)
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
                printf("\nItem is found and deleted successfully.\n");
            }
            else
            {
                printf("\nItem is not found.\n");
            }
        }
        else
        {
            printf("\nInvalid choice is entered.\n");
        }
        printf("\nDo you have other inventory inquiries (y/n):- ");
        scanf(" %c",&ch);
    }
    return 0;
}