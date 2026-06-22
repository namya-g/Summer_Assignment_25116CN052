//Q85 Write a program to Check palindrome string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    char rev[100];
    int length = 0;
    printf("Enter a string:- ");
    fgets(str,sizeof(str),stdin);
    while(str[length]!='\0')
    {
        if(str[length]=='\n')
        {
            str[length]='\0';
            break;
        }
        length++;
    }
    int j=0;
    for(int i=length-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    rev[j]='\0';
    if(strcmp(str,rev)==0)
    {
        printf("\"%s\" is a palindrome string.\n",str);
    }
    else
    {
        printf("\"%s\" is not a palindrome string.\n",str);
        printf("(For context, it reversed to:- \"%s\")\n",rev);
    }
    return 0;
}