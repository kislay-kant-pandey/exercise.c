#include<stdio.h>
int main()
{
    int a;
    char b;
    printf("enter a character :\t");
    scanf("%c", &b);
    //print ascii value
    printf("ascii value is :-\t%d\n", b);

    printf("enter ascii value to print character :\t");
    scanf("%d", &a);
    //print character from ascii value
    printf("character is :-\t %c", a);

    return 0;
}