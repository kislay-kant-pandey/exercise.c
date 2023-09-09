#include<stdio.h>
int main ()
{
    int age;

    printf("enter your age :\t");
    scanf("%d", &age);

    if(age >= 0 && age <= 3) {
        printf("you are child");
    }
    else if( age > 3 && age < 18) {
        printf("your are nor adult");
    }
    else if(age > 18 && age <= 99) {
        printf("you are adult");
    }
    else if(age >= 100 && age < 150) {
        printf("your are lengend");
    }
    else {
        printf("you have entered wrong age");
    }
    return 0;
}