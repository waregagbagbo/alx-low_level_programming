#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 
 *
 */
int main () {
   char ch;

   for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
   
   return(0);
	}
