#include<stdio.h>
int main() {
    int num, i = 0;
     printf("enter a number :\t");
     scanf("%d", &num);

     if(i == num%2) {
        printf("you have entered even number");
     }
     else {
        printf("you have entered odd number");
     }
     return 0;
}