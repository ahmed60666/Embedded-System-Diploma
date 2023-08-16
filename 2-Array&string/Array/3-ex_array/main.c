#include <stdio.h>

int main()
{
    int matrix_1[10][10], trans[10][10];
    int row, column, i, j;

    printf("Please enter the number of rows and columns of the matrix: ");
    fflush(stdout);fflush(stdin);
    scanf("%d%d", &row, &column);

    printf("Enter the elements of the matrix:\n");
    fflush(stdout);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("Enter element at position (%d, %d): ", i + 1, j + 1);
            fflush(stdout);
            scanf("%d", &matrix_1[i][j]);
        }
    }
    printf("The transpose is:\n");
       for (i = 0; i < column; i++)
       {
           for (j = 0; j < row; j++)
           {
               trans[i][j] = matrix_1[j][i];
           }
       }
    for (i = 0; i < column; i++)
      {
          for (j = 0; j < row; j++)
          {
              printf("%d ", trans[i][j]);
          }
          printf("\n");
      }
    printf("The matrix is:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < column; j++)
        {
            printf("%d ", matrix_1[i][j]);
        }
        printf("\n");
    }





    return 0;
}
