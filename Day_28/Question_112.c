//Q112 Write a program to Create contact management system.
#include<stdio.h>
struct Contact
{
        char name[50];
        char number[11];
        int contact_id;
        char email_id[50];
};
int main()
{
    struct Contact s[100];
    printf("CONTACT RECORD MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Add a new contact record.\n");
        printf("2. View a contact record.\n");
        printf("3. Update a contact record.\n");
        printf("4. Delete a contact record.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nEnter name of the contact:- ");
            scanf("%s",s[count].name);
            printf("\nEnter number of the contact:- ");
            scanf("%s",s[count].number);
            printf("\nEnter contact ID of the ticket:- ");
            scanf("%d",&s[count].contact_id);
            printf("\nEnter email ID of the ticket:- ");
            scanf("%s",s[count].email_id);
            count+=1;
            printf("\nNew contact record is added successfully.");
        }
        else if(choice==2)
        {
            int rn,flag=0,n;
            printf("\nEnter the contact ID of the contact whose record you want to search:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].contact_id==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("\nContact record is found.");
                printf("\nName of the contact:- %s",s[n].name);
                printf("\nNumber of the contact:- %s",s[n].number);
                printf("\nContact ID of the contact:- %d",s[n].contact_id);
                printf("\nEmail ID of the ticket:- %s",s[n].email_id);
            }
            else
            {
                printf("\nContact record is not found.");
            }
        }
        else if(choice==3)
        {
            int rn,flag=0,n;
            printf("\nEnter the contact ID of the contact whose record you want to update:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].contact_id==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                int rec=0;
                printf("\nContact record is found.");
                printf("\nRecords that can be changed are:-");
                printf("\n1. Name");
                printf("\n2. Number");
                printf("\n3. Email ID");
                printf("\nEnter the record you want to change (1,2,3):- ");
                scanf("%d",&rec);
                if(rec==1)
                {
                    printf("\nEnter new name of the contact:- ");
                    scanf("%s",s[n].name);
                    printf("\nContact is updated successfully.");
                }
                else if(rec==2)
                {
                    printf("\nEnter new number of the contact:- ");
                    scanf("%s",s[n].number);
                    printf("\nContact is updated successfully.");
                }
                else if(rec==3)
                {
                    printf("\nEnter email ID number of the contact:- ");
                    scanf("%s",s[n].email_id);
                    printf("\nContact record is updated successfully.");
                }
                else
                {
                    printf("\nInvalid choice is entered.");
                }
            }
            else
            {
                printf("\nContact record is not found.");
            }
        }
        else if(choice==4)
        {
            int rn,flag=0,n;
            printf("\nEnter the contact ID of the contact whose record you want to delete:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].contact_id==rn)
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
                printf("\nContact record is found and deleted successfully.");
            }
            else
            {
                printf("\nContact record is not found.");
            }
        }
        else
        {
            printf("\nInvalid choice is entered.");
        }
        printf("\nDo you have other contact inquiries (y/n):- ");
        scanf(" %c",&ch);
    }
}