#include<stdio.h>
int main () 
{
    int num;
    printf("enter a number :\t");
    scanf("%d", &num);

    int rev = 0;
    while(num > 0) {
        int last = num%10;
        rev = rev*10 + last;
        num = num/10
    }
    printf("%d", rev);

    return 0;
}