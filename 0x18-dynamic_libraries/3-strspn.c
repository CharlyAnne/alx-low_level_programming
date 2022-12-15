#include "main.h"

/**
 * _strspn - to get the length of a prefix sunstring
 * @s: string to be searched
 * @accept: prefix to be measured.
 *
 * Return: number of bytes in s which consists of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}
else if (accept[index + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
