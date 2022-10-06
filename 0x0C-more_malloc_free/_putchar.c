#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the chaacter to print
 *
 * Return: On sucess 1.
*/
int _putchar(charc)
{
	return (write(1, &c, 1));
}
