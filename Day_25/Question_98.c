//Q98 Write a program to Find common characters in strings.
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100];
    int freq[256]={0},flag=0;
    printf("Enter the first string:- ");
    fgets(str1,sizeof(str1),stdin);
    str1[strcspn(str1,"\n")]='\0';
    printf("Enter the second string:- ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")]='\0';
    for(int i=0;str1[i]!='\0';i++)
    {
        freq[(unsigned char)str1[i]]=1;
    }
    printf("\nCommon characters:- ");
    for(int i=0;str2[i]!='\0';i++)
    {
        if(freq[(unsigned char)str2[i]]==1)
        {
            printf("%c ",str2[i]);
            freq[(unsigned char)str2[i]]=0; 
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("There are no common characters in the strings.");
    }
    printf("\n");
    return 0;
}