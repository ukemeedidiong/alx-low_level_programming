#include "main."
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals
 * @a: first value -char
 * @size: second value -int
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;

	for (int i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - i - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
