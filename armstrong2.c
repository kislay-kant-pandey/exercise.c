#include<stdio.h>
int main()
{
    int a, b, c, aa, bb, cc, final;

    printf("enter a number :\t");
    scanf("%d", &a);

    printf("enter a number :\t");
    scanf("%d", &b);

    printf("enter a number :\t");
    scanf("%d", &c);

    aa= a*a*a;
    bb=b*b*b;
    cc=c*c*c;
    final = aa+bb+cc;

    printf("final number is %d", final);

    

    return 0;
}