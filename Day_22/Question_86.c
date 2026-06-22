//Q87 Write a program to Count words in a sentence.
#include <stdio.h>
int main()
{
    char str[200];
    int words=0,i=0;
    printf("Enter a sentence:- ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(((str[i]!=' ')&&(str[i]!='\n')&&(str[i]!='\t'))&&((i == 0)||(str[i-1]==' ')||(str[i-1]=='\t'))) 
        {
            words++;
        }
        i++;
    }
    printf("Total words:- %d\n",words);
    return 0;
}