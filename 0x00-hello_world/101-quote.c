#include <unistd.h>

/**
 * main - prints a quote to the standard error
 *
 * Return: Always 1
 */
int main(void)
{
char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t len = 0;
while (quote[len] != '\0')
{
len++;
}
write(STDERR_FILENO, quote, len);
return (1);
}
