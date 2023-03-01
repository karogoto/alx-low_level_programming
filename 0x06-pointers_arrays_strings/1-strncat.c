#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: the string to append to
 * @src: the string to append
 * @n: the maximum number of bytes to append from src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len, i;

for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
;

for (i = 0; src[i] != '\0' && i < n; i++)
dest[dest_len + i] = src[i];

dest[dest_len + i] = '\0';

return (dest);
}
