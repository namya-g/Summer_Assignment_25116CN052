//Q111 Write a program to Create ticket booking system.
#include<stdio.h>
struct BankAccount
{
        char name[50];
        int bookingid;
        int eventid;
        int seatno;
};
int main()
{
    struct BankAccount s[100];
    printf("TICKET RECORD MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Add a new ticket record.\n");
        printf("2. View a ticket record.\n");
        printf("3. Update a ticket record.\n");
        printf("4. Delete a ticket record.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nEnter name on the ticket:- ");
            scanf("%s",s[count].name);
            printf("\nEnter booking ID of the ticket:- ");
            scanf("%d",&s[count].bookingid);
            printf("\nEnter event ID of the ticket:- ");
            scanf("%d",&s[count].eventid);
            printf("\nEnter seat number of the ticket:- ");
            scanf("%d",&s[count].seatno);
            count+=1;
            printf("\nNew ticket record is added successfully.");
        }
        else if(choice==2)
        {
            int rn,flag=0,n;
            printf("\nEnter the booking ID of the ticket whose record you want to search:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].bookingid==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("\nTicket record is found.");
                printf("\nName on the ticket:- %s",s[n].name);
                printf("\nBooking ID of the ticket:- %d",s[n].bookingid);
                printf("\nEvent ID of the ticket:- %d",s[n].eventid);
                printf("\nSeat number of the ticket:- %d",s[n].seatno);
            }
            else
            {
                printf("\nTicket record is not found.");
            }
        }
    }        