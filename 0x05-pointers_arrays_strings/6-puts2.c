#include "main.h"

/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @s: This pointer point to a char or string.
 */
void puts2(char *s)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
