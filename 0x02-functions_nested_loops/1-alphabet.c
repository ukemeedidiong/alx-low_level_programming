#include "main.h"

/**
 * main - prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		_putchar(letters);

	_putchar('\n');
}
