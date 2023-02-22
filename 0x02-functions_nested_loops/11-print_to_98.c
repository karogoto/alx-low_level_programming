#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
printf("%d", n);
while (n != 98)
{
printf(", ");
if (n > 98)
n--;
else
n++;
printf("%d", n);
}
printf("\n");
}
