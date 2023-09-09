#include<stdio.h>
int main()
{
    int a, b, s;
    printf("enter length of rectanglr :\t");
    scanf("%d", &a);

    printf("enter width of rectangle : \t");
    scanf("\n%d", &b);
    
    s=2*(a+b);
    printf("perimeter of rectangle :\t%d", s);

return 0;
}