//Q117 Write a program to Create student record system using arrays and strings.
#include<stdio.h>
struct Student
{
        char name[50];
        int rollno;
        char branch[50];
        int sem;
        float cgpa;
};
int main()
{
    struct Student s[100];
    printf("STUDENT RECORD MANAGEMENT SYSTEM\n\n");
    char ch=' ';
    int count=0;
    while((ch!='N')&&(ch!='n'))
    {
        int choice=0;
        printf("Select an option from the below menu:-\n");
        printf("1. Add a new student record.\n");
        printf("2. View a student record.\n");
        printf("3. Update a student record.\n");
        printf("4. Delete a student record.\n");
        printf("Enter your choice (1,2,3,4):- ");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("\nEnter name of the student:- ");
            scanf("%s",s[count].name);
            printf("\nEnter roll number of the student:- ");
            scanf("%d",&s[count].rollno);
            printf("\nEnter branch of the student:- ");
            scanf("%s",s[count].branch);
            printf("\nEnter semester of the student:- ");
            scanf("%d",&s[count].sem);
            printf("\nEnter CGPA of the student:- ");
            scanf("%f",&s[count].cgpa);
            count+=1;
            printf("\nNew student record is added successfully.");
        }
        else if(choice==2)
        {
            int rn,flag=0,n;
            printf("\nEnter the roll number of the student whose record you want to search:- ");
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
                printf("\nStudent record is found.");
                printf("\nName of the student:- %s",s[n].name);
                printf("\nRoll number of the student:- %d",s[n].rollno);
                printf("\nBranch of the student:- %s",s[n].branch);
                printf("\nSemester of the student:- %d",s[n].sem);
                printf("\nCGPA of the student:- %f",s[n].cgpa);
            }
            else
            {
                printf("\nStudent record is not found.");
            }
        }
        