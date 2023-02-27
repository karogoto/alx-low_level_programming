#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int len = 0;

	/* Find the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Print the string in reverse order */
	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}

	/* Print a new line */
	_putchar('\n');
}
