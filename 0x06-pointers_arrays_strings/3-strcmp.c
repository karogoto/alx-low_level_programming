include "main.h"
/**
 * _strcmp - Compare two strings
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: The difference between the ASCII values of the first non-matching
 *         characters of the strings, or 0 if the strings are equal.
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}

return (*s1 - *s2);
}
