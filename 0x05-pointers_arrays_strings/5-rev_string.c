#include "main.h"

/**
 * rev_string - reverses a string in place
 *
 * @s: string to reverse
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	for (i = 0, j = 0; s[j + 1] != '\0'; j++)
		;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}
