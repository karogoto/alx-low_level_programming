/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the buffer to copy to
 * @src: the string to copy
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
        int i = 0;

        while (*(src + i))
        {
                *(dest + i) = *(src + i);
                i++;
        }
        *(dest + i) = '\0';
        return (dest);
}
