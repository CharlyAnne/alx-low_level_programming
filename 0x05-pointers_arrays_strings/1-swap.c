#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: number tested
 * @b: number tested
 *
 * Return: Always 0.
*/
void swap_int(int *a, int *b)
{
int temp = 0;
temp = *a;
*a = *b;
*b = temp;
}
