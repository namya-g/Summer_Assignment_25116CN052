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
    