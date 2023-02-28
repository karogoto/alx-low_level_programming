#include "main.h"

/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line.
 * @a: pointer to the array to be printed.
 * @n: number of elements of the array to be printed.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i] + '0');
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
