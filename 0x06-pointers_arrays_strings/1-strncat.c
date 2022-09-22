#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: resulting string
 * @src: source string
 * @n: string length
 *
 * Return: pointerto dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, n;

m = string_length(dest);
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[m + i] = src[i];
}
dest[m + i] = '\0';
return (dest);
}

/**
  * string_length - finds the length of a string.
  * @pointer: pointer.
  *
  * Return: length of c
*/
int string_length(char *pointer)
{
int c = 0;

while (*(pointer + c) != '\0')
{
c++;
}
return (c);
}
