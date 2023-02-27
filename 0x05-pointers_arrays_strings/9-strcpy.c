#include <stdio.h>

char *_strcpy(char *dest, char *src);

int main(void)
{
char src[] = "Hello, world!";
char dest[20];

_strcpy(dest, src);

printf("Source string: %s\n", src);
printf("Destination string: %s\n", dest);

return 0;
}
