//Q82  Write a program to Reverse a string.
#include <stdio.h>
int main()
{
    char str[100];
    int length=0;
    char temp;
    printf("Enter a string to reverse:- ");
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
    int start=0;
    int end=length-1;
    while(start<end)
    {
        temp=str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
    printf("Reversed string:- \"%s\"\n", str);
    return 0;
}