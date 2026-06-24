//Q93 Write a program to Check string rotation.
#include <stdio.h>
#include <string.h>
int isRotation(char str1[],char str2[])
{
    int len1=strlen(str1),len2=strlen(str2);
    if(len1!=len2)
    {
        return 0;
    }
    char temp[256];
    temp[0]='\0';
    strcat(temp,str1);
    strcat(temp,str1);
    if(strstr(temp, str2)!=NULL)
    {
        return 1;
    }
    return 0;
}
int main()
{
    char s1[100],s2[100];
    printf("Enter the first string:- ");
    fgets(s1,sizeof(s1),stdin);
    s1[strcspn(s1,"\n")]='\0';
    printf("Enter the second string:- ");
    fgets(s2,sizeof(s2),stdin);
    s2[strcspn(s2,"\n")]='\0';
    if(isRotation(s1,s2))
    {
        printf("'%s' is a rotation of '%s'.\n",s2,s1);
    }
    else
    {
        printf("'%s' is not a rotation of '%s'.\n",s2,s1);
    }
    return 0;
}