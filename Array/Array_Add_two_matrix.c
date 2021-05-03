#include<stdio.h>
#define row 3 
#define col 3

int main(int argc, char const *argv[])
{
    int i,j,mat1[row][col],mat2[row][col],mat3[row][col];

    printf("The elements in the first matrix(%dx%d) are: ",row,col);
    for ( i = 0; i < row; i++)
    for ( j = 0; j < col; j++)
    scanf("%d",&mat1[i][j]);

    printf("The matrix that we have entered is: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        printf("%5d",mat1[i][j]);
        printf("\n");
    }

    printf("The element in the second matrix(%dx%d) are: ",row,col);
    for ( i = 0; i < row; i++)
    for ( j = 0; j < col; j++)
    scanf("%d",&mat2[i][j]);
    
    printf("The matrix that we entered is: \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        printf("%5d",mat2[i][j]);
        printf("\n");
    }
    
    for ( i = 0; i < row; i++)
    for ( j = 0; j < col; j++)
    mat3[i][j]=mat1[i][j]+mat2[i][j];

    printf("The resultant matrix is: \n");
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        printf("%5d",mat3[i][j]);
        printf("\n");
    }
    
    return 0;
}
