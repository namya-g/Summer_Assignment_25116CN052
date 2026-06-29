//Q101 Write a program to Create number guessing game.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    char ch=' ';
    while((ch!='N')&&(ch!='n'))
    {
        int num=(rand()%(99-10+1))+10;
        printf("Guess the two digit number game:-\n");
        printf("There will be five guesses.\n");
        for(int i=1;i<=5;i++)
        {
            int n;
            printf("Guess %d:- ",i);
            scanf("%d",&n);
            if(n==num)
            {
                printf("You guessed the correct number.\n");
                break;
            }
            else
            {
                if(i!=5)
                {
                    printf("Try again.\n");
                }
                else
                {
                    printf("You did not guess the correct number.\n");
                    printf("The correct number is %d.\n",num);
                }
            }
        }
        printf("Do you want to play again (y/n):- ");
        scanf(" %c",&ch);
    }
    return 0;
}