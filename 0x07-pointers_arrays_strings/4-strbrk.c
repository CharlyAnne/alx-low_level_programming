#include "main.h"

/**
 * *_strbrk - searches a string for any of a set of bytes
 * @s: source string to be searched
 * @accept: the set of bytes to be serched for
 *
 * Return: If a set is matched, a pointer to the matched byte
 * if no set is matched, return NULL.
*/
char *_strbrk(char *s, char *accept)
{
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
return (s);
}
s++;
}
return ('\0');
}
