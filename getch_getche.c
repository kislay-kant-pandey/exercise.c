#include<stdio.h>
#include<conio.h>
int main()
{
     char ch;
     printf("Please enter a character ");
     ch=getch();
     printf("\nYour entered character is %c",ch);
     printf("\nPlease enter another character ");
     ch=getche();
     printf("\nYour new character is %c",ch);
     return 0;
}