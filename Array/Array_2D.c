#include<stdio.h>
#define row 3
#define col 3

int main(int argc, char const *argv[])
{
    int i,j,mat[row][col];

    printf("Enter the element in the matrix(%dx%d) rowwise: ",row,col);
    for ( i = 0; i < row; i++)
    for ( j = 0; j < col; j++)
    scanf("%d",&mat[i][j]);
    
    printf("The matrix that we have entered is: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        printf("%5d",mat[i][j]);
        printf("\n");
    }
    
    
    return 0;
}

