#include<stdio.h>
int main()
{
    int first, second, sum;
    printf("enter first number : \t");
    scanf("%d", &first);

    printf("enter second number : \t");
    scanf("%d", &second);

    printf("total is = \t%d", first + second);
    sum =first + second;
    printf("\nsum is = \t%d", sum);
    printf("\n(sum is \t%d)", &sum);

return 0;
}