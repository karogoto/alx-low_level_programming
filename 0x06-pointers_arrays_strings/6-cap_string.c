include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @s: Pointer to the string to be modified.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
int i, j;
char sep[] = " \t\n,;.!?\"(){}";

/* Capitalize first letter */
if (s[0] >= 'a' && s[0] <= 'z')
s[0] = s[0] - 'a' + 'A';

/* Capitalize letters after separators */
for (i = 1; s[i] != '\0'; i++)
{
for (j = 0; sep[j] != '\0'; j++)
{
if (s[i - 1] == sep[j] && s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 'a' + 'A';
break;
}
}
}

return (s);
}
