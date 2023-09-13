#include "main.h"
#include<stdio.h>
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
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

