//Q92 Write a program to Find maximum occurring character.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200],max_char;
    int freq[256]={0},max_count=0;
    printf("Enter a string:- ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]=0;
    for(int i=0;str[i]!='\0';i++)
    {
        unsigned char current_char=str[i];
        freq[current_char]++;
        if(freq[current_char]>max_count)
        {
            max_count=freq[current_char];
            max_char=current_char;
        }
    }
    if(max_count>0)
    {
        printf("Maximum occurring character is '%c' (Appeared %d times)\n",max_char,max_count);
    }
    else
    {
        printf("String is empty.\n");
    }
    return 0;
}