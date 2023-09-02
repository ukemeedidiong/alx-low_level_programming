#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Counts the number of parameters that go into main
 * @argv: Counts the number of parameters that go into main
 * Return: Always return 0.
 */
int main(argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
