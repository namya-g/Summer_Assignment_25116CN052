//Q104 Write a program to Create quiz application.
#include<stdio.h>
#include<string.h>
union UserInput
{
    int numAns;
    char charAns;
};
struct QuestionBank
{
    char ques[150];
    char option1[50];
    char option2[50];
    char option3[50];
    char option4[50];
    int correct;
};
int main()
{
    int score=0;
    union UserInput answer;
    struct QuestionBank quiz[5];
    strcpy(quiz[0].ques,"Q1 Which language is used for system programming?");
    strcpy(quiz[0].option1,"1.Python");
    strcpy(quiz[0].option2,"2.HTML");
    strcpy(quiz[0].option3,"3.C");
    strcpy(quiz[0].option4,"4.Java");
    quiz[0].correct=3;
    strcpy(quiz[1].ques,"Q2 What is the size of an int data type in C (typically)?");
    strcpy(quiz[1].option1,"1.1 Byte");
    strcpy(quiz[1].option2,"2.4 Bytes");
    strcpy(quiz[1].option3,"3.8 Bytes");
    strcpy(quiz[1].option4,"4.Depends on compiler");
    quiz[1].correct=2;
    strcpy(quiz[2].ques,"Q3 Which keyword is used to stop a loop completely?");
    strcpy(quiz[2].option1,"1.continue");
    strcpy(quiz[2].option2,"2.return");
    strcpy(quiz[2].option3,"3.exit");
    strcpy(quiz[2].option4,"4.break");
    quiz[2].correct=4;
    strcpy(quiz[3].ques,"Q4 What is the starting index of an array in C?");
    strcpy(quiz[3].option1,"1.1");
    strcpy(quiz[3].option2,"2.0");
    strcpy(quiz[3].option3,"3.-1");
    strcpy(quiz[3].option4,"4.2");
    quiz[3].correct=2;
    strcpy(quiz[4].ques,"Q5 Which of these is NOT a valid loop in C?");
    strcpy(quiz[4].option1,"1.for");
    strcpy(quiz[4].option2,"2.while");
    strcpy(quiz[4].option3,"3.do-while");
    strcpy(quiz[4].option4,"4.foreach");
    quiz[4].correct=4;
    printf("Welcome to the Tech Quiz\n\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\n",quiz[i].ques);
        printf("%s\n",quiz[i].option1);
        printf("%s\n",quiz[i].option2);
        printf("%s\n",quiz[i].option3);
        printf("%s\n",quiz[i].option4);
        printf("\nEnter your choice(1-4):- ");
        scanf("%d",&answer.numAns);
        if(answer.numAns==quiz[i].correct)
        {
            printf("Correct Answer!\n\n");
            score=score+1;

        }
        else
        {
            printf("Wrong Answer! The correct option was %d\n\n",quiz[i].correct);
        }
    }
    printf("Quiz Over!\n");
    printf("Your final score is %d out of 5\n",score);
    return 0;
}