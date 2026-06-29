//Q113 Write a program to Create menu-driven calculator.
#include<stdio.h>
int main()
{
    printf("CALCULATOR\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int n1,n2;
        char choice;
        printf("\nEnter number 1:- ");
        scanf("%d",&n1);
        printf("\nEnter number 2:- ");
        scanf("%d",&n2);
        printf("\nEnter arithmetic operator (+,-,*,/):- ");
        scanf(" %c",&choice);
        if(choice=='+')
        {
           printf("\n%d+%d=%d",n1,n2,n1+n2);
        }
        else if(choice=='-')
        {
            printf("\n%d-%d=%d",n1,n2,n1-n2);
        }
        else if(choice=='*')
        {
            printf("\n%d*%d=%d",n1,n2,n1*n2);
        }
        else if(choice=='/')
        {
            if(n2!=0)
            {
                printf("\n%d/%d=%d",n1,n2,n1/n2);
            }
            else
            {
                printf("\nZero Division Error.");
            }
        }
        else
        {
            printf("\nInvalid choice is entered.");
        }
        printf("\nDo you want to make more calculations (y/n):- ");
        scanf(" %c",&ch);
    }
    return 0;
}