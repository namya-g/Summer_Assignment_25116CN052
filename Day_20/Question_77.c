//Q77 Write a program to Multiply matrices
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
void Product(int product[100][100],int matrix1[100][100],int matrix2[100][100],int rows1,int columns1,int columns2)
{
    for(int i=0;i<rows1;i++)
    {
        for(int j=0;j<columns2;j++)
        {
            product[i][j]=0;
            for(int k=0;k<columns1;k++)
            {
                product[i][j]+=matrix1[i][k]*matrix2[k][j];
            }
        }
    }
}
int main()
{
    int r1,c1,mat1[100][100],r2,c2,mat2[100][100],product[100][100];
    printf("Enter number of rows for Matrix 1:- ");
    scanf("%d",&r1);
    printf("Enter number of columns for Matrix 1:- ");
    scanf("%d",&c1);
    printf("Enter number of rows for Matrix 2:- ");
    scanf("%d",&r2);
    printf("Enter number of columns for Matrix 2:- ");
    scanf("%d",&c2);
    if(r2==c1)
    {
        printf("\nThe matrices can be multiplied.");
        printf("\nMatrix 1:-\n");
        InputMatrix(mat1,r1,c1);
        DisplayMatrix(mat1,r1,c1);
        printf("\nMatrix 2:-\n");
        InputMatrix(mat2,r2,c2);
        DisplayMatrix(mat2,r2,c2);
        Product(product,mat1,mat2,r1,c1,c2);
        printf("\nMatrix 1 multiplied with Matrix 2 is:-\n");
        DisplayMatrix(product,r1,c2);
    }
    else if(r1==c2)
    {
        printf("\nThe matrices can be multiplied.");
        printf("\nMatrix 1:-\n");
        InputMatrix(mat1,r1,c1);
        DisplayMatrix(mat1,r1,c1);
        printf("\nMatrix 2:-\n");
        InputMatrix(mat2,r2,c2);
        DisplayMatrix(mat2,r2,c2);
        Product(product,mat2,mat1,r2,c2,r1);
        printf("\nMatrix 2 multiplied with Matrix 1 is:-\n");
        DisplayMatrix(product,r2,c1);
    }
    else
    {
        printf("The matrices cannot be multiplied.");
    }
    return 0;
}