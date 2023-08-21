#include "main.h"

/**
 * print_rev - This function prints a reverse string
 * @s: This is the input string
 */
void print_rev(char *s)
{
	int i;

	for (index = 0; s[index] != '\0'; index++)
		;
	for (i = i - 1; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
