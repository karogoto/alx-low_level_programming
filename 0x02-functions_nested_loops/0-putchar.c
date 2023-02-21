#include "main.h"

/**
 * print_putchar - prints _putchar, followed by a new line
 */
void print_putchar(void)
{
char putchar_str[] = "_putchar\n";
int i;

for (i = 0; i < 9; i++)
_putchar(putchar_str[i]);
}

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_putchar();
return (0);
}
