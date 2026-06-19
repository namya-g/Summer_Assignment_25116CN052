//Q74 Write a program to Subtract matrices.
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
void SubtractMatrices(int diff[100][100],int matrix1[100][100],int matrix2[100][100],int rows,int columns)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            diff[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
}
int main()
{
    int r1,c1,mat1[100][100],r2,c2,mat2[100][100],diff[100][100];
    printf("Enter number of rows for Matrix 1:- ");
    scanf("%d",&r1);
    printf("Enter number of columns for Matrix 1:- ");
    scanf("%d",&c1);
    printf("Enter number of rows for Matrix 2:- ");
    scanf("%d",&r2);
    printf("Enter number of columns for Matrix 2:- ");
    scanf("%d",&c2);
    if((r1==r2)&&(c1==c2))
    {
        printf("\nThe matrices can be subtracted.");
        printf("\nMatrix 1:-\n");
        InputMatrix(mat1,r1,c1);
        DisplayMatrix(mat1,r1,c1);
        printf("\nMatrix 2:-\n");
        InputMatrix(mat2,r2,c2);
        DisplayMatrix(mat2,r2,c2);
        SubtractMatrices(diff,mat1,mat2,r1,c1);
        printf("\nMatrix 2 subtracted from matrix 1 is:-\n");
        DisplayMatrix(diff,r1,c1);
    }
    else
    {
        printf("The matrices cannot be subtracted.");
    }
    return 0;
}