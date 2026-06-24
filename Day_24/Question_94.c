//Q94 Write a program to Compress a string. Write a program to Compress a string.
#include <stdio.h>
#include <string.h>
void compressString(char str[])
{
    int n=strlen(str);
    for(int i=0;i<n;i++)
    {
        int count=1;
        while((i<n-1)&&(str[i]==str[i + 1]))
        {
            count++;
            i++;
        }
        printf("%c%d",str[i],count);
    }
    printf("\n");
}
int main()
{
    char str[100];
    printf("Enter a string:- ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    printf("Compressed String:- ");
    compressString(str);
    return 0;
}