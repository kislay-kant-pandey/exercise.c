#include <stdio.h>

int calsq(int n);

int main()
{
    int n;
    printf("enter length of a side of square :\t");
    scanf("%d", &n);
    printf("square is :\t%d",calsq(n));
    return 0;
}

int calsq(int n) {
    return n * n;
}