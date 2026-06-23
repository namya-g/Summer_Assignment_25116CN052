//Q89 Write a program to Find first non-repeating character.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int freq[256]={0};
    printf("Enter a string:- ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for(int i=0;str[i]!='\0';i++)
    {
        freq[(unsigned char)str[i]]++;
    }
    int found=0;
    for(int i=0;str[i]!='\0';i++)
    {
        if(freq[(unsigned char)str[i]]==1)
        {
            printf("First non-repeating character:- '%c'\n",str[i]);
            found=1;
            break;
        }
    }
    if (!found)
    {
        printf("All characters repeat or string is empty.\n");
    }
    return 0;
}