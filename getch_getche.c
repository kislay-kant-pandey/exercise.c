#include<stdio.h>
#include<conio.h>
int main()
{
     char ch;
     printf("Please enter a character ");
     ch=getch();                     // getch() is use to take input.
     printf("\nYour entered character is %c",ch);

     printf("\nPlease enter another character ");
     ch=getche();
     printf("\nYour new character is %c",ch);
     return 0;
}
/*  GETCHE()
1. it only accept one input character at a time or the per function call.
2. this was used in old operation systems to get user input.
3. it doesn't use buffers to store the data and return the data as soon as the user enters it.  */

/*   GETCH()
1. it do not display input you have entered but it show the output.
2. it only accept the one input at a time. if you want to get more inputs, you have to write more function call.
3. it also output the data without wait for the enter key. 
*/