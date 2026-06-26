//Q103 Write a program to Create ATM simulation.
#include<stdio.h>
int main()
{
    int bal,pin;
    printf("Enter your account balance:- ");
    scanf("&d",&bal);
    printf("Set four digit pin for ATM:- ");
    scanf("%d",&pin);
    char ch=' ';
    while((ch!='N')&&(ch!='n'))
    {
        int choice;
        printf("Select an option from the below menu:-\n");
        printf("1. Check Balance.\n");
        printf("2. Withdraw Money.\n");
        printf("3. Deposit Money.\n");
        printf("4. Exit\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            
        }
        printf("Do you want to check again (y/n):- ");
        scanf(" %c",&ch);
    }
}