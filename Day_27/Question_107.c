//Q107 Write a program to Create salary management system.
#include<stdio.h>
struct Employee
{
        char name[50];
        int empid;
        char dept[50];
        float basicpay;
        float allowances;
        float grosssal;
        float deductions;
        float netsal;
};
int main()
{
    struct Employee e[100];
    printf("SALARY RECORD MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Add a new employee salary record.\n");
        printf("2. View a employee salary record.\n");
        printf("3. Update a employee salary record.\n");
        printf("4. Delete a employee salary record.\n");
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
            printf("\nEnter basic pay of the employee:- ");
            scanf("%f",&e[count].basicpay);
            e[count].allowances=0.20*e[count].basicpay;
            e[count].grosssal=1.20*e[count].basicpay;
            e[count].deductions=0.10*e[count].basicpay;
            e[count].netsal=1.10*e[count].basicpay;
            count+=1;
            printf("\nNew employee salary record is added successfully.");
        }
        else if(choice==2)
        {
            int emp,flag=0,n;
            printf("\nEnter the employee ID of the employee whose salary record you want to search:- ");
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
                printf("\nEmployee salary record is found.");
                printf("\n\n****************************************");
                printf("\n\n              SALARY SLIP");
                printf("\nEmployee Name:- %s",e[n].name);
                printf("\nEmployee ID:- %d",e[n].empid);
                printf("\nDepartment:- %s",e[n].dept);
                printf("\n\nBasic Pay:- %f",e[n].basicpay);
                printf("\nAllowances:- %f",e[n].allowances);
                printf("\n\n**********");
                printf("\nGross Salary:- %f",e[n].grosssal);
                printf("\nDeductions:- %f",e[n].deductions);
                printf("\n\n**********");
                printf("\nNet Salary:- %f",e[n].netsal);
                printf("\n\n****************************************");
            }
            else
            {
                printf("\nEmployee salary record is not found.");
            }
        }
        else if(choice==3)
        {
            int emp,flag=0,n;
            printf("\nEnter the employee ID of the employee whose salary record you want to update:- ");
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
                int rec=0;
                printf("\nEmployee salary record is found.");
                printf("\nRecords that can be changed are:-");
                printf("\n1. Name");
                printf("\n2. Department");
                printf("\n3. Basic Pay");
                printf("\nEnter the record you want to change (1,2,3):- ");
                scanf("%d",&rec);
                if(rec==1)
                {
                    printf("\nEnter new name of the employee:- ");
                    scanf("%s",e[n].name);
                    printf("\n Employee salary record is updated successfully.");
                }
                else if(rec==2)
                {
                    printf("\nEnter new department of the employee:- ");
                    scanf("%s",e[n].dept);
                    printf("\n Employee salary record is updated successfully.");
                }
                else if(rec==3)
                {
                    printf("\nEnter new basic pay of the employee:- ");
                    scanf("%f",&e[n].basicpay);
                    e[n].allowances=0.20*e[n].basicpay;
                    e[n].grosssal=1.20*e[n].basicpay;
                    e[n].deductions=0.10*e[n].basicpay;
                    e[n].netsal=1.10*e[n].basicpay;
                    printf("\n Employee salary record is updated successfully.");
                }
                else
                {
                    printf("\nInvalid choice is entered.");
                }
            }
            else
            {
                printf("\nEmployee salary record is not found.");
            }
        }
        else if(choice==4)
        {
            int emp,flag=0,n;
            printf("\nEnter the employee ID of the employee whose salary record you want to delete:- ");
            scanf("%d",&emp);
            for(int i=0;i<count;i++)
            {
                if(e[i].empid==emp)
                {
                    n=i;
                    flag+=1;
                    for(int j=i;j<count-1;j++)
                    {
                        e[j]=e[j+1];
                    }
                    count-=1;
                    break;
                }
            }
            if(flag==1)
            {
                int rec=0;
                printf("\nEmployee salary record is found and deleted successfully.");
            }
            else
            {
                printf("\nEmployee salary record is not found.");
            }
        }
        else
        {
            printf("\nInvalid choice is entered.");
        }
        printf("\nDo you have other employee salary inquiries (y/n):- ");
        scanf(" %c",&ch);
    }
}