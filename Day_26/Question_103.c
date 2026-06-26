//Q103 Write a program to Create ATM simulation.
#include<stdio.h>
int CheckPin(int pin)
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
    scanf("%d",&bal);
    printf("Set four digit PIN for ATM:- ");
    scanf("%d",&pin);
    char ch=' ';
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0,x=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Check Balance.\n");
        printf("2. Withdraw Money.\n");
        printf("3. Deposit Money.\n");
        printf("Enter your choice (1,2,3):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            if(CheckPin(pin))
            {
                printf("\nThe current balance in your account is:- %d",bal);
            }
            else
            {
                printf("\nWrong PIN is entered.");
                if(CheckPin(pin))
                {
                    printf("\nThe current balance in your account is:- %d",bal);
                }
                else
                {
                    printf("\nWrong PIN is entered.");             
                    if(CheckPin(pin))
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
            if(CheckPin(pin))
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
                if(CheckPin(pin))
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
                    if(CheckPin(pin))
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
        else if(choice==3)
        {
            int amt;
            printf("\nEnter amount to be deposited:- ");
            scanf("%d",&amt);
            if(CheckPin(pin))
            {
                bal=bal+amt;
                printf("\nDeposition of money is successful.");
            }
            else
            {
                printf("\nWrong PIN is entered.");
                if(CheckPin(pin))
                {
                    bal=bal+amt;
                    printf("\nDeposition of money is successful.");
                }
                else
                {
                    printf("\nWrong PIN is entered.");             
                    if(CheckPin(pin))
                    {              
                        bal=bal+amt;
                        printf("\nDeposition of money is successful.");  
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
        else
        {
            printf("\nInvalid choice is entered.");
        }
        printf("\nDo you have other account inquiries (y/n):- ");
        scanf(" %c",&ch);
    }
}