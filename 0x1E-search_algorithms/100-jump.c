#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - function searches for avalue in a sorted array
 * of integers using the jump search method
 * @array: array of integers to be searched
 * @size: the size of the array
 * @value: the value to be searched for in the array
 *
 * Return - the index of value or -1 if not found/array is NULL
*/

int jump_search(int *array, size_t size, int value)
{
	size_t i, jump, step;

	if (!array || size == 0)
		return (-1);

	step = sqrt(size);
	for (i = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		i = jump;
		jump += step;
	}
	/* this causes 'found' msg even when value not in array */
	printf("Value found between indexes [%ld] and [%ld]\n", i, jump);

	if (jump < size - 1)
		jump = jump;
	else
		jump = size - 1;

	for (; i < jump && array[i] < value; i++)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);

	if (array[i] == value)
		return ((int)i);
	else
		return (-1);
}
