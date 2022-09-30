#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: Variable to be checked
 *
 * Description: Checks for alphabetic character
 * Return: 1 if c is a letter, 0 otherwise.
*/
int _isalpha(int c)
{
if ((c < 'z' && 'a' < c) || (c < 'Z' && c > 'A'))
return (1);
else
return (0);
}
