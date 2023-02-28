#include "main.h"
#include <stdlib.h>
#include <time.h>
/**
 * generate_password - Generates a random valid password for 101-crackme
 *
 * Return: The generated password
 */
char *generate_password(void)
{
  static char password[16];
  int i, sum = 0;
  
  /* Seed the random number generator */
  srand(time(0));

  /* Generate 14 random characters */
  for (i = 0; i < 14; i++) {
    password[i] = rand() % 94 + 33; /* printable ASCII characters between 33 and 126 */
    sum += password[i];
  }

  /* Calculate the ASCII value of the 15th character */
  password[14] = 2772 - sum;

  /* Add null terminator */
  password[15] = '\0';

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
