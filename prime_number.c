#include<stdio.h>
int main()
{
    int num, i = 0;
    printf("enter number :\t");
    scanf("%d", &num);

        if (num >= 9)
        {
        
        if( num % 2 == 0 || num % 3 == 0 || num % 5 == 0 || num % 7 == 0 )
        {
            printf("%d is not a prime number", num);
        }
        else if(num % 1 == 0)
        {    printf("%d is a prime number", num);
        }
        
        }
        else if (num < 9)
        {
            if (num == 1 || num == 3 || num == 5 || num ==7)
        {
            printf("%d is a prime number", num);
        }
        
        }
        
        else
        {
            printf("%d is a prime number", num);
        }
    //}
    
return 0;
}