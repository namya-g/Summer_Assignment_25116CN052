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
        