#include "search_algos.h"

/**
 * linear_search - this function searches for a value in an array
 * of integers using the Linear Search algorithm
 *
 * @array: input array to search
 * @size: size of the array
 * @value: value to search for in the array
 * Return: the index of the @value, or -1 if not found
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	
	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
