#include<stdio.h>
int main()
{
    int row, col, i, j;
    printf("enter number of rows");
    scanf("%d", &row);
    printf("enter number of column");
    scanf("%d", &col);

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}