#include "main.h"

/**
 * *_strmcmp - compares twp strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: value lesser than 0 idf string is less than the other
 * or value greater that 0 if the string is greater than the other
 * or 0 if strings are equal.
*/
int _strmcmp(char *s1, char *s2)
{
int counter, cmpVal;

int counter = 0;
while (s1[counter] == s2[counter] && s1[counter] != '\0')
{
counter++;
}
cmpVal = s1[counter] - s2[counter];
return (cmpVal);
}
