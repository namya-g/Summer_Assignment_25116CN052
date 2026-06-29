//Q108 Write a program to Create marksheet generation system.
#include<stdio.h>
struct Marksheet
{
        char name[50];
        int rollno;
        float sub1,sub2,sub3;
        float total,percentage;
        char grade;
};
int main()
{
    struct Marksheet s[100];
    printf("MARKSHEET RECORD MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Add a new student marksheet record.\n");
        printf("2. View a student marksheet record.\n");
        printf("3. Update a student marksheet record.\n");
        printf("4. Delete a student marksheet record.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nEnter name of the student:- ");
            scanf("%s",s[count].name);
            printf("\nEnter roll number of the student:- ");
            scanf("%d",&s[count].rollno);
            printf("Enter marks of subject 1 of the student out of 100:- ");
            scanf("%f",&s[count].sub1);
            printf("Enter marks of subject 2 of the student out of 100:- ");
            scanf("%f",&s[count].sub2);
            printf("Enter marks of subject 3 of the student out of 100:- ");
            scanf("%f",&s[count].sub3);
            s[count].total=s[count].sub1+s[count].sub2+s[count].sub3;
            s[count].percentage=s[count].total/3.0;
            if(s[count].percentage>=90)
            {
                s[count].grade='A';
            }
            else if(s[count].percentage>=80)
            {
                s[count].grade='B';
            }
            else if(s[count].percentage>=70)
            {
                s[count].grade='C';
            }
            else if(s[count].percentage>=60)
            {
                s[count].grade='D';
            }
            else
            {
                s[count].grade='F';
            }
            count+=1;
            printf("\nNew student record is added successfully.");
        }
        else if(choice==2)
        {
            int rn,flag=0,n;
            printf("\nEnter the roll number of the student whose marksheet record you want to search:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].rollno==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                printf("\nStudent marksheet record is found.");
                printf("\n\n****************************************");
                printf("              STUDENT MAARKSHEET");
                printf("\nStudent Name:- %s",s[n].name);
                printf("\nRoll Number:- %d",s[n].rollno);
                printf("\n\n**********");
                printf("\nMarks scored in Subject 1:- %f",s[n].sub1);
                printf("\nMarks scored in Subject 2:- %f",s[n].sub2);
                printf("\nMarks scored in Subject 3:- %f",s[n].sub3);
                printf("\n\n**********");
                printf("\nTotal marks scored out of 300:- %f",s[n].total);
                printf("\n\n**********");
                printf("\nPercentage:- %f",s[n].percentage);
                printf("\n\n**********");
                printf("\nGrade:- %c",s[n].grade);
                printf("\n\n****************************************");
            }
            else
            {
                printf("\nStudent marksheet record is not found.");
            }
        }
        else if(choice==3)
        {
            int rn,flag=0,n;
            printf("\nEnter the roll number of the student whose marksheet record you want to update:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].rollno==rn)
                {
                    n=i;
                    flag+=1;
                    break;
                }
            }
            if(flag==1)
            {
                int rec=0;
                printf("\nStudent record is found.");
                printf("\nRecords that can be changed are:-");
                printf("\n1. Name");
                printf("\n2. Subject 1 marks");
                printf("\n3. Subject 2 marks");
                printf("\n4. Subject 3 marks");
                printf("\nEnter the record you want to change (1,2,3,4):- ");
                scanf("%d",&rec);
                if(rec==1)
                {
                    printf("\nEnter new name of the student:- ");
                    scanf("%s",s[n].name);
                }
                else if(rec==2)
                {
                    printf("\nEnter new marks of subject 1 of the student:- ");
                    scanf("%f",&s[n].sub1);
                }
                else if(rec==3)
                {
                    printf("\nEnter new marks of subject 2 of the student:- ");
                    scanf("%f",&s[n].sub2);
                }
                else if(rec==4)
                {
                    printf("\nEnter new marks of subject 3 of the student:- ");
                    scanf("%f",&s[n].sub3);
                }
                else
                {
                    printf("\nInvalid choice is entered.");
                }
                if((rec==2)||(rec==3)||(rec==4))
                {
                    s[n].total=s[n].sub1+s[n].sub2+s[n].sub3;
                    s[n].percentage=s[n].total/3.0;
                    if(s[n].percentage>=90)
                    {                
                        s[n].grade='A';            
                    }            
                    else if(s[n].percentage>=80)            
                    {                
                        s[n].grade='B';
            
                    }            
                    else if(s[n].percentage>=70)            
                    {                
                        s[n].grade='C';            
                    }            
                    else if(s[n].percentage>=60)            
                    {                
                        s[n].grade='D';            
                    }            
                    else            
                    {                
                        s[n].grade='F';            
                    }
                }
                printf("\nStudent marksheet record is successfully updated.");
            }
            else
            {
                printf("\nStudent marksheet record is not found.");
            }
        }
        else if(choice==4)
        {
            int rn,flag=0,n;
            printf("\nEnter the roll number of the student whose marksheet record you want to delete:- ");
            scanf("%d",&rn);
            for(int i=0;i<count;i++)
            {
                if(s[i].rollno==rn)
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
                printf("\nStudent marksheet record is found and deleted successfully.");
            }
            else
            {
                printf("\nStudent marksheet record is not found.");
            }
        }
        else
        {
            printf("\nInvalid choice is entered.");
        }
        printf("\nDo you have other student marksheet inquiries (y/n):- ");
        scanf(" %c",&ch);
    }
    return 0;
}