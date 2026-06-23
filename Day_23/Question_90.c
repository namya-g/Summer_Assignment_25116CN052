//Q90 Write a program to Find first repeating character.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int seen[256]={0};
    int found=0;
    printf("Enter a string:- ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for(int i=0;str[i]!='\0';i++)
    {
        unsigned char current_char=str[i];
        if(seen[current_char]==1)
        {
            printf("First repeating character:- '%c'\n",current_char);
            found=1;
            break;
        }
        else
        {
            seen[current_char]=1; 
        }
    }
    if(!found)
    {
        printf("No repeating characters found.\n");
    }
    return 0;
}