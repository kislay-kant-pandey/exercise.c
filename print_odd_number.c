#include <stdio.h>
int main()
{
    int first, last, i, j;

    printf("enter first number : \t");
    scanf("%d", &first);

    printf("enter number : \t");
    scanf("%d", &last);

    printf("print odd number between %d and %d", &first, &last);

    for(i=first; i<=last; i++){
        if (i%2 != 0)
        {
           printf("\n%d", i);
        }
        
    }
    return 0;
}