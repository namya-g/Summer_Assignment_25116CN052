//Q75 Write a program to Transpose matrix.
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
void TransposeMatrix(int matrix[100][100],int transpose[100][100],int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
}
int main()
{
    int r,c,mat1[100][100],mat2[100][100];
    printf("Enter number of rows for Matrix:- ");
    scanf("%d",&r);
    printf("Enter number of columns for Matrix:- ");
    scanf("%d",&c);
    InputMatrix(mat1,r,c);
    printf("\nMatrix:-\n");
    DisplayMatrix(mat1,r,c);
    TransposeMatrix(mat1,mat2,r,c);
    printf("\nTranspose of the matrix is:-\n");
    DisplayMatrix(mat2,c,r);
    return 0;
}