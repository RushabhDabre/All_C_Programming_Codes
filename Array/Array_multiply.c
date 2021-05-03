#include<stdio.h>
#define row1 3
#define col1 3 
#define row2 3
#define col2 3

int main(int argc, char const *argv[])
{
    int i,j,mat1[row1][col1],mat2[row2][col2],mat3[row1][col2];

    printf("The elements in the first matrix(%dx%d) are: ",row1,col1);
    for ( i = 0; i < row1; i++)
    for ( j = 0; j < col1; j++)
    scanf("%d",&mat1[i][j]);

    printf("The matrix that we have entered is: \n");
    for(i = 0; i < row1; i++)
    {
        for(j = 0; j < col1; j++)
        printf("%5d",mat1[i][j]);
        printf("\n");
    }

    printf("The element in the second matrix(%dx%d) are: ",row2,col2);
    for ( i = 0; i < row2; i++)
    for ( j = 0; j < col2; j++)
    scanf("%d",&mat2[i][j]);
    
    printf("The matrix that we entered is: \n");
    for ( i = 0; i < row2; i++)
    {
        for ( j = 0; j < col2; j++)
        printf("%5d",mat2[i][j]);
        printf("\n");
    }

    for ( i = 0; i < row1; i++)
    for ( j = 0; j < col2; j++)
    {
        mat3[i][j]=0;
        for (int k = 0; k < col1; k++)
        mat3[i][j]+=mat1[i][k]*mat2[k][j];  
    }

    printf("The resultant Matrix is: \n");
    for ( i = 0; i < row1; i++)
    {
        for ( j = 0; j < col2; j++)
        printf("%5d",mat3[i][j]);
        printf("\n");
    }
    
    return 0;
}