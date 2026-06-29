//Q102 Write a program to Create voting eligibility system.
#include<stdio.h>
int main()
{
    char ch=' ';
    while((ch!='N')&&(ch!='n'))
    {
        int age,citizen;
        printf("Enter age of the person:- ");
        scanf("%d",&age);
        printf("Does the person have a registered Voter ID (Enter 1 for Yes. Enter 0 for No.):- ");
        scanf("%d",&citizen);
        if(age>0)
        {
            if((age>=18)&&(citizen==1))
            {
                printf("The person is eligible to vote.\n");
            }
            else
            {
                printf("The person is not eligible to vote.\n");
            }
        }
        else
        {
            printf("Enter correct age of the person.\n");
        }
        printf("Do you want to check again (y/n):- ");
        scanf(" %c",&ch);
    }
    return 0;
}