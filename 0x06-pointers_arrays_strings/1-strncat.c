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
int counter, j;
/* j is a counter for  n bytes of src to be concatenated */
/* count = length of destination string */

counter = 0;
while (dest[counter] != '\0')
{
counter++;
}
for (j = 0; j < n && src[j] != '\0'; j++, counter++)
{
dest[counter] = src[j];
}
dest[counter] = '\0';
return (dest);
}
