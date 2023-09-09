#include<stdio.h>
int main()
{
    int row, count = 1;
    printf("enter number of row :\t");
    scanf("%d", &row);
    /*printf("enter number of column :\t");
    scanf("%d", &col);
    
    *       *
    * *   * *
    * * * * *
    * * * * * 
    * *   * *
    *       *
   
    */

    for(int i=1; i<=row; i++) {
        for(int j=1; j<=i; j++) {
                printf("* ");
        }
        int space = 2*row - 2*i;
        for(int j=1; j<=space; j++) {
                printf("  ");
        }
        for(int j=1; j<=i; j++) {
                printf("* ");
        }
        printf("\n");
    }

    for(int i=row; i>=1; i--) {
        for(int j=1; j<=i; j++) {
                printf("* ");
        }
        int space = 2*row - 2*i;
        for(int j=1; j<=space; j++) {
                printf("  ");
        }
        for(int j=1; j<=i; j++) {
                printf("* ");
        }
        printf("\n");
    }
    return 0;
}