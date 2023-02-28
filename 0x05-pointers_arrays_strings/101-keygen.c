#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * generate_password - Generates a random password for 101-crackme
 *
 * Return: The generated password
 */
char *generate_password(void)
{
  static char password[100];
  int i, sum;

  /* Seed the random number generator */
  srand(time(0));

  /* Generate random characters until the sum of their ASCII values is 2772 */
  sum = 0;
  i = 0;
  while (sum < 2772)
    {
      password[i] = rand() % 94 + 33; /* Printable ASCII characters range from 33 to 126 */
      sum += password[i];
      i++;
    }
  password[i] = '\0';

  return password;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  char *password;
  int i;

  password = generate_password();

  /* Print the generated password */
  for (i = 0; password[i] != '\0'; i++)
    _putchar(password[i]);
  _putchar('\n');

  return (0);
}
