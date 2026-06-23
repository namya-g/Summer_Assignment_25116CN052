//Q91 Write a program to Check anagram strings.
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void cleanString(char str[])
{
    int i=0,j=0;
    while(str[i]!='\0')
    {
        if((str[i]!= ' ')&&(str[i]!='\n'))
        {
            str[j]=tolower((unsigned char)str[i]);
            j++;
        }
        i++;
    }
    str[j]='\0';
}
int main()
{
    char str1[200],str2[200];
    int freq[256]={0};
    int is_anagram=1;
    printf("Enter first string:- ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter second string:- ");
    fgets(str2,sizeof(str2),stdin);
    cleanString(str1);
    cleanString(str2);
    if(strlen(str1)!=strlen(str2))
    {
        is_anagram=0;
    }
    else
    {
        for(int i=0;str1[i]!='\0';i++)
        {
            freq[(unsigned char)str1[i]]++;
            freq[(unsigned char)str2[i]]--;
        }
        for(int i=0;i<256;i++)
        {
            if(freq[i]!=0)
            {
                is_anagram=0;
                break;
            }
        }
    }
    if(is_anagram)
    {
        printf("The strings are anagrams.\n");
    }
    else
    {
        printf("The strings are not anagrams.\n");
    }
    return 0;
}