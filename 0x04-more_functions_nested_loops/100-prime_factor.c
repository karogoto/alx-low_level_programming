#include <stdio.h>

/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
long int n = 612852475143;
long int i;

for (i = 2; i <= n; i++)
{
while (n % i == 0)
{
n /= i;
}
}

printf("%ld\n", i - 1);

return (0);
}
