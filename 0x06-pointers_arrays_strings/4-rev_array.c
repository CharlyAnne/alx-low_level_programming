#include "main.h"

/**
 * reverse_array - function to reverse an array
 * @a: pointer to array
 * @n: number of elements of the array.
 *
 * Return: void.
*/
void reverse_array(int *a, int n)
{
int temp, count;

n = n - 1;
count = 0;
while (count <= n)
{
temp = a[count];
a[count++] = a[n];
a[n - 1] = temp;
}
}
