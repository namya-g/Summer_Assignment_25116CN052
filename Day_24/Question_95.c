//Q95 Write a program to Find longest word.
#include <stdio.h>
#include <string.h>
void LongestWord(char str[])
{
    int len=strlen(str);
    int maxLength=0,currentLength=0;
    int maxStart=0,currentStart=0;
    for(int i=0;i<=len;i++)
    {
        if((str[i]==' ')||(str[i]=='\0'))
        {
            if(currentLength>maxLength) 
            {
                maxLength=currentLength;
                maxStart=currentStart;
            }
            currentLength=0;
            currentStart=i+1;
        }
        else
        {
            currentLength++;
        }
    }
    printf("Longest word:- ");
    for(int i=0;i<maxLength;i++)
    {
        printf("%c",str[maxStart+i]);
    }
    printf("\n");
}
int main()
{
    char str[200];
    printf("Enter a sentence:- ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    LongestWord(str);
    return 0;
}