#include "main.h"

/**
 * *_strcmp - compares twp strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return dest.
*/
int _strcmp(char *s1, char *s2)
{
int i = 0, R = 0;

while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
{
i++;
}
R = s1[i] - s2[i];
return (R);
}
