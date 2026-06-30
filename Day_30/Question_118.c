//Q118 Write a program to Create mini library system.
#include<stdio.h>
struct Library
{
        char name[50];
        int bookid;
        char author[50];
        int status;
};
int main()
{
    struct Library s[100];
    printf("LIBRARY RECORD MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Add a new book record.\n");
        printf("2. View a book record.\n");
        printf("3. Update a book record.\n");
        printf("4. Delete a book record.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nEnter name of the book:- ");
            scanf("%s",s[count].name);
            printf("\nEnter book ID of the book:- ");
            scanf("%d",&s[count].bookid);
            printf("\nEnter author of the book:- ");
            scanf("%s",s[count].author);
            printf("\nEnter status of the book (1. Available 2. Issued):- ");
            scanf("%d",&s[count].status);
            count+=1;
            printf("\nNew book record is added successfully.");
        }
        else if(choice==2)
        {
            int rn,flag=0,n;
            printf("\nEnter the book ID of the book whose record you want to search:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].bookid==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("\nBook record is found.");
                printf("\nName of the book:- %s",s[n].name);
                printf("\nBook ID of the book:- %d",s[n].bookid);
                printf("\nAuthor of the book:- %s",s[n].author);
                printf("\nStatus of the book:- %d",s[n].status);
            }
            else
            {
                printf("\nBook record is not found.");
            }
        }
        