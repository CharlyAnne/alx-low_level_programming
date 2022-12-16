#include "main.h"

/**
 * *_strcat - concatenates two strings.
 * @dest: resulting string.
 * @src: source string.
 *
 * Return: pointer to destination string.
*/
char *_strcat(char *dest, char *src)
{
int count, i;

count = 0;
while (dest[count] != '\0')
{
count++;
}
for (i = 0; src[i] != '\0'; i++, count++)
{
dest[count] = src[i];
}
dest[count] = '\0';
return (dest);
}
