//Q79 Write a program to Find row-wise sum.
#include<stdio.h>
void InputMatrix(int matrix[100][100],int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("Enter element (%d,%d) of the matrix:- ",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void DisplayMatrix(int matrix[100][100],int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int r,c,mat[100][100];
    printf("Enter number of rows for Matrix:- ");
    scanf("%d",&r);
    printf("Enter number of columns for Matrix:- ");
    scanf("%d",&c);
    printf("\nMatrix:-\n");
    InputMatrix(mat,r,c);
    DisplayMatrix(mat,r,c);
    for(int i=0;i<r;i++)
    {
        int sum=0;
        for(int j=0;j<c;j++)
        {
            sum+=mat[i][j];
        }
        printf("\nSum of elements of row %d of matrix:- %d",i,sum);
    }
    return 0;
}