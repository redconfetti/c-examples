#include <stdio.h>

/*
  Demonstrates how only a single character is captured at a time
  by getchar()
*/
int main ()
{
   char c;
 
   printf("Enter character: ");
   c = getchar();
 
   printf("Character entered: ");
   putchar(c);

   return(0);
}
