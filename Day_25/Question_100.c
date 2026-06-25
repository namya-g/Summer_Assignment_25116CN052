//Q100 Write a program to Sort words by length.
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter the number of words: ");
    scanf("%d", &n);
    getchar();
    char words[n][50],temp[50];
    printf("Enter %d words:-\n",n);
    for(int i=0;i<n;i++)
    {
        fgets(words[i],sizeof(words[i]),stdin);
        words[i][strcspn(words[i],"\n")]='\0';
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(strlen(words[j])>strlen(words[j+1]))
            {
                strcpy(temp,words[j]);
                strcpy(words[j],words[j+1]);
                strcpy(words[j+1],temp);
            }
        }
    }
    printf("\nWords sorted by length (shortest to longest):-\n");
    for(int i=0;i<n;i++)
    {
        printf("%s (Length:- %lu)\n",words[i],strlen(words[i]));
    }
    return 0;
}