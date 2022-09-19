#include "main.h"

/**
 * _strlen - function to return the length of a string
 * @s: number to be tested
 *
 * Return: lways 0.
*/
int _strlen(char *s);
{
int i = 0;
while (*(s + i))
{
i++;
}
return (i);
}
