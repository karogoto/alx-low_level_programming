#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *ptr = dest;

while (*ptr != '\0')
ptr++;

while (*src != '\0')
{
*ptr = *src;
src++;
ptr++;
}

*ptr = '\0';

return (dest);
}
