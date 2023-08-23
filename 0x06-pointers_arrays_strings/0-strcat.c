#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: This is the output dest
 * @src: this is the string to be append
 * Return: This return to dest, that concatenates two strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
