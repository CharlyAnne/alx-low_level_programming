#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - functions searches for a value in an array of integer
 * using a binary search algorithm
 *
 * @array: the array of integers
 * @size: size of the array
 * @value: value to be searched for
 *
 * Return: the index of @value, or -1 if the value is not found
 * or if array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int i;

	if (array == NULL) {
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
