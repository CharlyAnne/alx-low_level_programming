#include "main.h"
#include <stdio.h>

/**
 * _strlen - function to return the length of a string
 * @s: number to be tested
 *
 * Return: Always 0.
*/
int _strlen(char *s)
{
int i;


i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
