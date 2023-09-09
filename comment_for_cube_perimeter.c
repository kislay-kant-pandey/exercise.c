//write comment for program (perimeter of rectangle) and (cube of number) 
#include <stdio.h>

int main()
{
//a, b, s, num are the variables

    int a, b, s, num;

// take a number input and store in a variable through memory address

    printf("enter a number :\t");
    scanf("%d", &num);

//multiplying same number three times

    printf("cube of number is %d", num*num*num);

/* write a program to find perimeter of a ractangle
 1. take length and width as input
 2. store their values in variable through memory address
 3. put these values on formula and calculate final value
 4. store final value in variable and print final value*/
    printf("enter length of rectanglr :\t");
    scanf("%d", &a);

    printf("enter width of rectangle : \t");
    scanf("\n%d", &b);
    
    s=2*(a+b);
    printf("perimeter of rectangle :\t%d", s);

    return 0;
}