//Q103 Write a program to Create ATM simulation.
#include<stdio.h>
int CheckPin(pin)
{
    int x;
    printf("\nEnter your ATM PIN:- ");
    scanf("%d",&x);
    if(x==pin)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int bal,pin;
    printf("Enter your account balance:- ");
    scanf("&d",&bal);
    printf("Set four digit PIN for ATM:- ");
    scanf("%d",&pin);
    int choice=0;
    while(choice!=4)
    {
        int x=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Check Balance.\n");
        printf("2. Withdraw Money.\n");
        printf("3. Deposit Money.\n");
        printf("4. Exit\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            if(CheckPin)
            {
                printf("\nThe current balance in your account is:- %d",bal);
            }
            else
            {
                printf("\nWrong PIN is entered.");
                if(CheckPin)
                {
                    printf("\nThe current balance in your account is:- %d",bal);
                }
                else
                {
                    printf("\nWrong PIN is entered.");             
                    if(CheckPin)
                    {              
                        printf("\nThe current balance in your account is:- %d",bal);           
                    }          
                    else          
                    {               
                        printf("\nWrong PIN is entered.");                
                        printf("\nYour account is locked.");
                        break;        
                    }
                }
            }
        }
        else if(choice==2)
        {
            int amt;
            printf("\nEnter amount to be withdrawn:- ");
            scanf("%d",&amt);
            if(CheckPin)
            {
                if(amt<=bal)
                {
                    bal=bal-amt;
                    printf("\nWithdrawal of money is successful.");
                }
                else
                {
                    printf("\nInsufficient Funds.");
                }
            }
            else
            {
                printf("\nWrong PIN is entered.");
                if(CheckPin)
                {
                    if(amt<=bal)
                    {
                        bal=bal-amt;
                        printf("\nWithdrawal of money is successful.");
                    }
                    else
                    {
                        printf("\nInsufficient Funds.");
                    }
                }
                else
                {
                    printf("\nWrong PIN is entered.");             
                    if(CheckPin)
                    {              
                        if(amt<=bal)
                        {
                            bal=bal-amt;
                            printf("\nWithdrawal of money is successful.");
                        }
                        else
                        {
                            printf("\nInsufficient Funds.");
                        }      
                    }          
                    else          
                    {               
                        printf("\nWrong PIN is entered.");                
                        printf("\nYour account is locked.");
                        break;        
                    }
                }
            }
        }
        elif(choice==3)
        {
            
        }
        printf("Do you want to check again (y/n):- ");
        scanf(" %c",&ch);
    }
}