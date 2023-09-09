#include<stdio.h>
int main() 
{
    int num;
    int count = 0;
    printf("enter number :\t");
    scanf("%d", &num);

    if(num == 0 || num ==1)
    count = 1;

    for(int i=2; i<=num/2; ++i) {
        if((num % i)== 0) {
           count = 1;
           break;
        }
    }

    if(count==0)
      printf("%d is a prime number", num);
    else
      printf("%d is not a prime number", num);
    return 0;
}