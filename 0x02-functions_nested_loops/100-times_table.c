#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: An integer, the number of times to calculate the table.
 */
void print_number(int n)
void print_times_table(int n)
{
int i, j, result;
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
if (n / 10)
}
_putchar((n % 10) + '0');
}
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j == 0)
_putchar('0');
else
{
_putchar(',');
_putchar(' ');
if (result < 100)
_putchar(' ');
if (result < 10)
_putchar(' ');
}
if (result >= 100)
_putchar(result / 100 + '0');
if (result >= 10)
_putchar((result / 10) % 10 + '0');
_putchar(result % 10 + '0');
}
_putchar('\n');
}
}
}
