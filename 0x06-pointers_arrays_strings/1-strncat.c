#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: resulting string
 * @src: source string
 * @n: string length
 *
 * Return: pointer to dest.
*/
char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int i;

for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[len + i] = src[i];
}
dest[len + i] = '\0';
return (dest);
}
