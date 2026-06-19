//Q76 Write a program to Find diagonal sum.
#include<stdio.h>
void InputMatrix(int matrix[100][100],int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("Enter element (%d,%d) of the matrix:- ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void DisplayMatrix(int matrix[100][100],int rows)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<rows;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
int DiagonalSum(int matrix[100][100],int rows)
{
    int sum=0;
    for(int i=0;i<rows;i++)
    {
        sum+=matrix[i][i];
    }
    return sum;
}
int main()
{
    int r,mat[100][100];
    printf("Enter number of rows and column for square matrix:- ");
    scanf("%d",&r);
    InputMatrix(mat,r);
    printf("\nMatrix:-\n");
    DisplayMatrix(mat,r);
    printf("\nSum of the diagonal elements of the matrix is:- %d",DiagonalSum(mat,r));
    return 0;
}