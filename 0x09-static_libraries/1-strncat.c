#include "main.h"

/**
 * _strncat - concatenates two strings using n bytes
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 *@n: integer
 * Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
int i, j;

for (i = 0; dest[i] != '\0'; i++)
{
}

for (j = 0; j < n; j++)
{
dest[i + j] = src[j];
if (src[j] == '\0')
j = n;
}

return (dest);
}
