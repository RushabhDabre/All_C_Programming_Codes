#include <stdio.h>
#define row 3
#define col 3

main()
{
    int i, j, mat[row][col];
    printf("Enter the elements in the matrix(%dX%d) row-wise: \n",row,col);
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
    return 0; 
}
