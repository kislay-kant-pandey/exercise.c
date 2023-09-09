#include<stdio.h>
int main()
{
    int num;
    int a;
    int b, c, aa, bb, cc, abc;
    printf("enter  number :\t");
    scanf("%d", &num);

        c = num / 100;

         b = (num / 10) % 10;

        a = num % 10;
        
    aa = a * a * a;
    bb = b * b * b;
    cc = c * c * c;
    abc = aa + bb + cc;

    if(abc == num) {
        printf("this is an armstrong number"); 
        }
    else if(abc != num) {
        printf("this is not an armstrong number");
        }

    return 0;
}
