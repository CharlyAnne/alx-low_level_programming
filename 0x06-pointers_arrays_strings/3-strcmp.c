#include "main.h"

/**
 * *_strmcmp - compares twp strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: return dest.
*/
int _strmcmp(char *s1, char *s2)
{
int i;
int R;

i = 0;

while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
{
i++;
}
R = s1[i] - s2[i];
return (R);
}
