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
int i = 0;

while (dest[i++])
dest_len++;

for (i = 0; src[i] && i < n; i++)
dest[dest_len++] = src[i];
return (dest);
}
