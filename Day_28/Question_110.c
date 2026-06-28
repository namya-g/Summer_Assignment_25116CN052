//Q110 Write a program to Create bank account system.
#include<stdio.h>
struct BankAccount
{
        char name[50];
        int acc_no;
        double balance;
        int status;
};
int main()
{
    struct BankAccount s[100];
    printf("BANK ACCOUNT RECORD MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Add a new bank account record.\n");
        printf("2. View a bank account record.\n");
        printf("3. Update a bank account record.\n");
        printf("4. Delete a bank account record.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nEnter name on the bank account:- ");
            scanf("%s",s[count].name);
            printf("\nEnter account number of the bank account:- ");
            scanf("%d",&s[count].acc_no);
            printf("\nEnter balance of the bank account:- ");
            scanf("%lf",&s[count].balance);
            printf("\nEnter status of the bank account (1. Active 2. Inactive):- ");
            scanf("%d",&s[count].status);
            count+=1;
            printf("\nNew bank account record is added successfully.");
        }
        else if(choice==2)
        {
            int rn,flag=0,n;
            printf("\nEnter the account number of the bank account whose record you want to search:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].acc_no==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("\nBank account record is found.");
                printf("\nName on the bank account:- %s",s[n].name);
                printf("\nAccount number of the bank account:- %d",s[n].acc_no);
                printf("\nBalance of the bank account:- %lf",s[n].balance);
                printf("\nStatus of the bank account:- %d",s[n].status);
            }
            else
            {
                printf("\nBank account record is not found.");
            }
        }
        else if(choice==3)
        {
            int rn,flag=0,n;
            printf("\nEnter the account number of the bank account whose record you want to update:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].acc_no==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                int rec=0;
                printf("\nBank account record is found.");
                printf("\nRecords that can be changed are:-");
                printf("\n1. Name");
                printf("\n2. Balance");
                printf("\n3. Status");
                printf("\nEnter the record you want to change (1,2,3):- ");
                scanf("%d",&rec);
                if(rec==1)
                {
                    printf("\nEnter new name on the bank account:- ");
                    scanf("%s",s[n].name);
                    printf("\nBank account is updated successfully.");
                }
                else if(rec==2)
                {
                    printf("\nEnter new balance of the bank account:- ");
                    scanf("%lf",&s[n].balance);
                    printf("\nBank account is updated successfully.");
                }
                else if(rec==3)
                {
                    printf("\nEnter new status of the bank account:- ");
                    scanf("%d",&s[n].status);
                    printf("\nBank account record is updated successfully.");
                }
                else
                {
                    printf("\nInvalid choice is entered.");
                }
            }
            else
            {
                printf("\nBank account record is not found.");
            }
        }
        else if(choice==4)
        {
            int rn,flag=0,n;
            printf("\nEnter the account number of the bank account whose record you want to delete:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].acc_no==rn)
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
                printf("\nBank account record is found and deleted successfully.");
            }
            else
            {
                printf("\nBank account record is not found.");
            }
        }
        else
        {
            printf("\nInvalid choice is entered.");
        }
        printf("\nDo you have other bank account inquiries (y/n):- ");
        scanf(" %c",&ch);
    }
}