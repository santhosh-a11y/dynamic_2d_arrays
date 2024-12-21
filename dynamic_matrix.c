#include <stdio.h>
#include <stdlib.h>

int main()
{
    //getting the number of rows and columns from the user
    int rows, columns, a[10][10];
    printf("enter the number of rows: ");
    scanf("%d", &rows);
    printf("enter the number of columns: ");
    scanf("%d", &columns);
    //prompting the user to enter the elements of the matrix
    printf("enter the elements of the matrix:\n");
    int i,j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            scanf("%d", &a[i][j]);
        }
    }
    //printing the matrix.
    printf("the MATRIX: \n");
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

}
