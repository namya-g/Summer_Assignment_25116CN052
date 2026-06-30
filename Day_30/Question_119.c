//Q119 Write a program to Create mini employee management system.
#include<stdio.h>
struct Employee
{
        char name[50];
        int empid;
        char dept[50];
        int sal;
        char emailid[50];
};
int main()
{
    struct Employee e[100];
    printf("EMPLOYEE RECORD MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Add a new employee record.\n");
        printf("2. View a employee record.\n");
        printf("3. Update a employee record.\n");
        printf("4. Delete a employee record.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nEnter name of the employee:- ");
            scanf("%s",e[count].name);
            printf("\nEnter employee ID of the employee:- ");
            scanf("%d",&e[count].empid);
            printf("\nEnter department of the employee:- ");
            scanf("%s",e[count].dept);
            printf("\nEnter salary of the employee:- ");
            scanf("%d",&e[count].sal);
            printf("\nEnter email ID of the employee:- ");
            scanf("%s",e[count].emailid);
            count+=1;
            printf("\nNew employee record is added successfully.");
        }
        else if(choice==2)
        {
            int emp,flag=0,n;
            printf("\nEnter the employee ID of the employee whose record you want to search:- ");
            scanf("%d",&emp);
            for(int i=0;i<count;i++)
            {
                if(e[i].empid==emp)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("\nEmployee record is found.");
                printf("\nName of the employee:- %s",e[n].name);
                printf("\nEmployee ID of the employee:- %d",e[n].empid);
                printf("\nDepartment of the employee:- %s",e[n].dept);
                printf("\nSalary of the employee:- %d",e[n].sal);
                printf("\nEmail ID of the employee:- %s",e[n].emailid);
            }
            else
            {
                printf("\nEmployee record is not found.");
            }
        }
        