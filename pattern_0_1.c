#include<stdio.h>
int main() 
{
    int row, col;
    printf("enter number of row :\t");
    scanf("%d", &row);

    //INVERTED PATTERN
    for(int i = 1; i<=row; i++) {
        for(int j = 1; j<=i; j++) {
            if((i+j)%2 == 0) {
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }

    //ROMBUS PATTERN
    for(int i=1; i<=row; i++) {
        for(int j=1; j<=row-i; j++) {
           printf(" ");
        }
        for(int j=1; j<=row; j++) {
            printf("*");
        }
        printf("\n");
    }

    //number pattern
    for(int i = 1; i<=row; i++) {
        for(int j = 1; j<=row-i; j++) {
            printf(" ");
        }
        for(int j=1; j<=i; j++) {
            printf(" %d", j);
        }
        printf("\n");
    }

    //palindromic pattern
    for(int i = 1; i<=row; i++) {
        int j;
        for(j=1; j<=row-i; j++) {
            printf("  ");
        }
        int k=i;
        for(; j<=row; j++) {
            printf(" %d", k--);
        }
        k=2;
        for(; j<=row+i-1; j++){
            printf(" %d", k++);
        }
        printf("\n");
    }
    for(int i = 1; i<=row; i++) {
        for(int j = 1; j<=row-i; j++) {
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++) {
            printf(" *");
        }
        printf("\n");
    }
    for(int i = row; i>=1; i--) {
        for(int j = 1; j<=row-i; j++) {
            printf("  ");
        }
        for(int j=1; j<=2*i-1; j++) {
            printf(" *");
        }
        printf("\n");
    }

printf("\n\n\n");
    //ZIG-ZAG PATTERN
    for(int i=1; i<=3; i++) {
        for(int j=1; j<=row; j++) {
            if(((i+j)%4==0) || (i==2 && j%4==0)) {
                printf(" *");
            }
            else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
} 