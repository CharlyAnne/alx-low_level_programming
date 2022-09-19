#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: number tested
 *
 * Return: void.
*/
void _puts(char *str);
{
int i;

i = 0;
while (*str != '\0')
{
_putchar(*str);
i++;
str++;
}
_putchar('\n');
}
