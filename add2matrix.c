#include <stdio.h>
#define row 3
#define col 3
main()
{
    int i, j, mat[row][col],mat2[row][col],mat3[row][col];
    printf("Enter the elements in the first matrix(%dX%d) row-wise: \n",row,col);
    for ( i = 0; i < row; i++) for ( j = 0; j < col; j++)
    scanf("%d",&mat[i][j]); 
    printf("The matrix that you have entered is: \n");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d\t",mat[i][j]);
        }
     printf("\n");   
    }
    printf("\n");
    printf("Enter the elements in the second matrix(%dX%d) row-wise: \n",row,col);
    for ( i = 0; i < row; i++) for ( j = 0; j < col; j++)
    scanf("%d",&mat2[i][j]);
    printf("The matrix that you have entered is: \n");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d\t",mat2[i][j]);
        }
     printf("\n");   
    }
    printf("\n");
    for ( i = 0; i < row; i++) for ( j = 0; j < col; j++)
    mat3[i][j]=mat[i][j]+mat2[i][j];
    printf("the resultant matrix is: \n");
    for (i = 0; i < row; i++)
    {
        for ( j = 0; j < col; j++)
        {
            printf("%d\t",mat3[i][j]);
        }
     printf("\n");   
    }
    printf("\n");
    return 0;
}
