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
        