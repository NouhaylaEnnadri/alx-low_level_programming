#include "main.h"
#include<stdio.h>
/**
*function that prints 10 times the alphabet, 
*in lowercase, followed by a new line.
*desc: two loops to operate
*Return : no return
*/
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
int letters;
for (letters = 'a'; letters <= 'z'; letters++)
_putchar(letters);

_putchar('\n');
i++;
}
}

