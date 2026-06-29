//Q115 Write a program to Create menu-driven string operations system.
#include<stdio.h>
void DisplayString(char str[])
{
    printf("\"%s\"", str);
}
struct String
{
    char str[100];
    int strno;
    int length;
};
int main()
{
    struct String s[100];
    printf("STRING MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("\nSelect an option from the below menu:-\n");
        printf("1. Add a new string.\n");
        printf("2. View a string.\n");
        printf("3. Update a string.\n");
        printf("4. Delete a string.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nEnter string number of the string:- ");
            scanf("%d",&s[count].strno);
            printf("Enter the string:- ");
            scanf(" %[^\n]", s[count].str);
            int len=0;
            while(s[count].str[len]!='\0')
            {
                len++;
            }
            s[count].length=len;
            count+=1;
            printf("\nNew string is added successfully.\n");
        }
        else if(choice==2)
        {
            int rn,flag=0,n;
            printf("\nEnter the string number of the string you want to search:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].strno==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("\nString is found.");
                printf("\nString number of the string:- %d",s[n].strno);
                printf("\nLength of the string:- %d",s[n].length);
                printf("\nString:- ");
                DisplayString(s[n].str);
                printf("\n");
            }
            else
            {
                printf("\nString is not found.\n");
            }
        }
        else if(choice==3)
        {
            int rn,flag=0,n;
            printf("\nEnter the string number of the string you want to update:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].strno==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                int rec=0;
                printf("\nString is found.");
                printf("\nChanges that can be made are:-");
                printf("\n1. Change a character.");
                printf("\n2. Delete a character.");
                printf("\n3. Add a character to the end of the string.");
                printf("\nEnter the record you want to change (1,2,3):- ");
                scanf("%d",&rec);
                if(rec==1)
                {
                    int index;
                    printf("\nEnter index of the character to be changed:- ");
                    scanf("%d",&index);
                    if((index>=0)&&(index<s[n].length))
                    {
                        printf("Enter new character:- ");
                        scanf(" %c",&s[n].str[index]);
                        printf("\nString is updated successfully.\n");
                    }
                    else
                    {
                        printf("\nInvalid index.\n");
                    }
                }
                else if(rec==2)
                {
                    int index;
                    printf("\nEnter index of the character to be deleted:- ");
                    scanf("%d",&index);
                    if((index>=0)&&(index<s[n].length))
                    {
                        s[n].length-=1;
                        for(int i=index;i<=s[n].length;i++) 
                        {
                            s[n].str[i]=s[n].str[i+1];
                        }
                        printf("\nString is updated successfully.\n");
                    }
                    else
                    {
                        printf("\nInvalid index is entered.\n");
                    }
                }
                else if(rec==3)
                {
                    printf("\nEnter character to be added to the string:- ");
                    scanf(" %c",&s[n].str[s[n].length]);
                    s[n].length+=1;
                    s[n].str[s[n].length]='\0'; 
                    printf("\nString is updated successfully.\n");
                }
                else
                {
                    printf("\nInvalid choice is entered.\n");
                }
            }
            else
            {
                printf("\nString is not found.\n");
            }
        }
        else if(choice==4)
        {
            int rn,flag=0,n;
            printf("\nEnter the string number of the string you want to delete:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].strno==rn)
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
                printf("\nString is found and deleted successfully.\n");
            }
            else
            {
                printf("\nString is not found.\n");
            }
        }
        else
        {
            printf("\nInvalid choice is entered.\n");
        }
        printf("\nDo you have other string inquiries (y/n):- ");
        scanf(" %c",&ch);
    }
    return 0;
}