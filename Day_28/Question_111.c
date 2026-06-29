//Q111 Write a program to Create ticket booking system.
#include<stdio.h>
struct Ticket
{
        char name[50];
        int bookingid;
        int eventid;
        int seatno;
};
int main()
{
    struct Ticket s[100];
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
        else if(choice==3)
        {
            int rn,flag=0,n;
            printf("\nEnter the booking ID of the ticket whose record you want to update:- ");
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
                int rec=0;
                printf("\nTicket record is found.");
                printf("\nRecords that can be changed are:-");
                printf("\n1. Name");
                printf("\n2. Event ID");
                printf("\n3. Seat number");
                printf("\nEnter the record you want to change (1,2,3):- ");
                scanf("%d",&rec);
                if(rec==1)
                {
                    printf("\nEnter new name on the ticket:- ");
                    scanf("%s",s[n].name);
                    printf("\nTicket is updated successfully.");
                }
                else if(rec==2)
                {
                    printf("\nEnter new event ID of the ticket:- ");
                    scanf("%d",&s[n].eventid);
                    printf("\nTicket is updated successfully.");
                }
                else if(rec==3)
                {
                    printf("\nEnter new seat number of the ticket:- ");
                    scanf("%d",&s[n].seatno);
                    printf("\nTicket record is updated successfully.");
                }
                else
                {
                    printf("\nInvalid choice is entered.");
                }
            }
            else
            {
                printf("\nTicket record is not found.");
            }
        }
        else if(choice==4)
        {
            int rn,flag=0,n;
            printf("\nEnter the booking ID of the ticket whose record you want to delete:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].bookingid==rn)
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
                printf("\nTicket record is found and deleted successfully.");
            }
            else
            {
                printf("\nTicket record is not found.");
            }
        }
        else
        {
            printf("\nInvalid choice is entered.");
        }
        printf("\nDo you have other ticket inquiries (y/n):- ");
        scanf(" %c",&ch);
    }
    return 0;
}