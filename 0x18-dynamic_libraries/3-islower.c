#include "main.h"

/**
 * _islower- Checks for lowercase
 *
 * @c: c is the variable for the program
 * Return: 1 if c is lowercse, 0 otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
