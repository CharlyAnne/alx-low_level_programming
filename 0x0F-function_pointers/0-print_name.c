#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: string as a name
 * @f: pointer to a function
 *
 * Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
