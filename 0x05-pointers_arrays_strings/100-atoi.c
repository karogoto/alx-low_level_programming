#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: input string.
 * Return: integer value of string.
 */

int _atoi(char *s)
{
    int sign = 1, i = 0, res = 0;

    while (s[i] != '\0')
    {
        if (s[i] == '-')
            sign *= -1;
        if (s[i] >= '0' && s[i] <= '9')
            break;
        i++;
    }

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
            res = (res * 10) + (s[i] - '0');
        else
            break;
        i++;
    }
    return (res * sign);
}
