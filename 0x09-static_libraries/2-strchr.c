#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer to spot in s with c or null
*/
char *_strchr(char *s, char c)
{
int index;

for (index = 0; s[index] >= '\0'; index++)
{
if (s[index] == c)
return (s + index);
}
return ('\0');
}
