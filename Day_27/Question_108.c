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
                printf("\nMarks scored in Subject 1:- %f",s[count].sub1);
                printf("\nMarks scored in Subject 2:- %f",s[count].sub2);
                printf("\nMarks scored in Subject 3:- %f",s[count].sub3);
                printf("\n\n**********");
                printf("\nTotal marks scored out of 300:- %f",s[count].total);
                printf("\n\n**********");
                printf("\nPercentage:- %f",s[count].percentage);
                printf("\n\n**********");
                printf("\nGrade:- %c",s[count].grade);
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
            