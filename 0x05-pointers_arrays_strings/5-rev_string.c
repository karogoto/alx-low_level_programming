#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */
void rev_string(char *s)
{
int len = 0, i = 0;
char c;

while (s[i++])
len++;

for (i = 0; i < len--; i++)
{
c = s[i];
s[i] = s[len];
s[len] = c;
}
}
