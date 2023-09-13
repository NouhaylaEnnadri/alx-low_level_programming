#include <stdio.h>
#include "main.h"
/**
 * main - Entry point of the program
 *
 * This function is the entry point of the program. It initializes variables,
 * performs necessary operations, and returns an exit status.
 *
 * Return: 0 on success, non-zero on error
 */
int main(void)
{
char letters[10] = "_putchar\n";
int i;
for (i = 0; i < 9; i++)
{
_putchar (letters[i]); 
}
return(0);
}

