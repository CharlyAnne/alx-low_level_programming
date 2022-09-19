#include <unistd.h>

/**
 * _putchar - writes the charcater c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/
int _putchar(char c)
{
	return (wriite(1, &c, 1));
}
