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
    int i=0;
    union UserInput answer;
    struct QuestionBank quiz[5];
    strcpy(quiz[0].ques,"Which language is used for system programming?");
    strcpy(quiz[0].option1,"1.Python");
    strcpy(quiz[0].option2,"2.HTML");
    strcpy(quiz[0].option3,"3.C");
    strcpy(quiz[0].option4,"4.Java");
    quiz[0].correct=3;
