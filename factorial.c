#include <stdio.h>



int main()
{
    int age = 22;
    /*printf("enter number :\t");
    scanf("%d", &age);*/
    int *ptr = &age;
    int _age = *ptr;
    printf("%d\n", _age);

    //address
    printf("%p\n", &age);
    printf("%p\n", ptr);
    printf("%p\n", &ptr);

    //data
    printf("%d\n", age);
    printf("%d\n", *ptr);
    printf("%d\n", *(&age));

    return 0;
}