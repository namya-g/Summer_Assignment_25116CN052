//Q120 Write a program to Develop complete mini project using arrays, strings and functions.
#include <stdio.h>
#include <string.h>
struct Item {
    char name[50];
    int id;
    float price;
};
int addMenuItem(struct Item m[],int count)
{
    printf("\nEnter ID of the item:- ");
    scanf("%d",&m[count].id);
    printf("\nEnter name of the item:- ");
    scanf(" %[^\n]",m[count].name);
    printf("\nEnter price of the item:- ");
    scanf("%f",&m[count].price);
    printf("\nNew menu item is added successfully.");
    return count+1;
}
void viewMenu(struct Item m[],int count)
{
    if(count==0)
    {
        printf("\nThe menu is currently empty.");
        return;
    }
    printf("\n--- CAFE MENU ---");
    for(int i=0;i<count;i++)
    {
        printf("\nItem ID: %d | Name: %s | Price: %.2f", m[i].id, m[i].name, m[i].price);
    }
}
void updatePrice(struct Item m[],int count)
{
    int search_id,flag=0;
    printf("\nEnter the ID of the item whose price you want to update:- ");
    scanf("%d",&search_id);
    for(int i=0;i<count;i++)
    {
        if(m[i].id==search_id)
        {
            printf("\nItem found: %s",m[i].name);
            printf("\nEnter new price for the item:- ");
            scanf("%f",&m[i].price);
            printf("\nPrice updated successfully.");
            flag+=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nItem record is not found.");
    }
}
void generateBill(struct Item m[],int count)
{
    if(count==0)
    {
        printf("\nPlease add items to the menu first before taking an order.");
        return;
    }
    int order_id,qty;
    float total=0.0;
    char add_more='y';
    printf("\n--- NEW CUSTOMER ORDER ---");
    while((add_more == 'y')||(add_more == 'Y'))
    {
        int flag=0;
        printf("\nEnter Item ID to order:- ");
        scanf("%d",&order_id);
        for(int i=0;i<count;i++)
        {
            if(m[i].id==order_id)
            {
                printf("Enter quantity for %s:- ",m[i].name);
                scanf("%d",&qty);
                float cost=m[i].price*qty;
                total+=cost;
                printf("Added %d x %s = %.2f\n",qty,m[i].name,cost);
                flag+=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("\nInvalid Item ID entered.");
        }
        printf("\nAdd another item to this customer's order? (y/n):- ");
        scanf(" %c",&add_more);
    }
    printf("\n--------------------------------");
    printf("\nTOTAL BILL AMOUNT: %.2f", total);
    printf("\n--------------------------------");
}
int main()
{
    struct Item menu[100];
    printf("CAFE ORDER AND BILLING SYSTEM\n\n"); 
    char ch=' ';
    int count=0;
    while((ch != 'N')&&(ch != 'n'))
    {
        int choice=0;
        printf("\nSelect an option from the below menu:-\n");
        printf("1. Add a new menu item.\n");
        printf("2. View the cafe menu.\n");
        printf("3. Update an item's price.\n");
        printf("4. Take an order & generate bill.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            count=addMenuItem(menu,count); 
        }
        else if(choice==2)
        {
            viewMenu(menu,count);
        }
        else if(choice==3)
        {
            updatePrice(menu,count);
        }
        else if(choice==4)
        {
            generateBill(menu,count);
        }
        else
        {
            printf("\nInvalid choice is entered.");
        }
        printf("\n\nDo you have other cafe operations (y/n):- ");
        scanf(" %c",&ch);
    }
    return 0;
}