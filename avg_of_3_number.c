#include<stdio.h>
int main()
{
    int first, second, third;
    double final;

    printf("enter first number :\t");
    scanf("%d", &first);

    printf("enter second number :\t");
    scanf("%d", &second);

    printf("enter third value :\t");
    scanf("%d", &third);

    final = (first + second + third)/3;
    printf("average of these three value is %lf", final);

    return 0;
}