//Q88 Write a program to Remove spaces from string. 
#include <stdio.h>
int main()
{
    char str[200];
    int i=0,j=0;
    printf("Enter a string:- ");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
        if(str[i]!=' ')
        {
            str[j]=str[i];
            j++;
        }
        i++;
    }
    str[j]='\0';
    printf("String without spaces:- %s",str);
    return 0;
}