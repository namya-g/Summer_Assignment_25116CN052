//Q96 Write a program to Remove duplicate characters.
#include <stdio.h>
#include <string.h>
void removeDuplicates(char str[])
{
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        for(int j=i+1;j<len;)
        {
            if(str[i]==str[j])
            {
                for(int k=j;k<len;k++)
                {
                    str[k]=str[k+1];
                }
                len--; 
            }
            else
            {
                j++; 
            }
        }
    }
}
int main()
{
    char str[100];
    printf("Enter a string:- ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    removeDuplicates(str);
    printf("String without duplicates:- %s\n",str);
    return 0;
}