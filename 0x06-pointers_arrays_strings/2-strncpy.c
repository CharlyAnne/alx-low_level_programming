#include "main.h"

/**
 * *_strncpy - function to copy the string pointed to by src.
 * @src: source pointer
 * @dest: pointer to the buffer
 * @n: length of bytes to be copied from src
 *
 * Return:a pointer to the resulting string dest.
*/
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';

return (dest);
}
