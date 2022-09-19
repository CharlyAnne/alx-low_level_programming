#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to string
 *
 * Return: Always void.
*/
void puts_half(char *str)
{
int n, length, mid;

length = 0;
while (str[length] != '\0')
{
length++;
}

if (length % 2 == 0)
{
mid = length / 2;
for (n = mid; n < length; n++)
{
_putchar(str[n]);
}
}
_putchar('\n');
}
