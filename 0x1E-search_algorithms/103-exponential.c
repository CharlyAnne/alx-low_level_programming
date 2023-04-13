#include "search_algos.h"

/**
 * exponential_search - searches for a value in an array of integers
 * using exponential search
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the indevalue of @value or -1 if not found or if @array is NULL
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t exp, end;

	if (array == NULL || size == 0)
		return (-1);

	exp = 1;
	while (exp < size && array[exp] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", exp, array[exp]);
		exp = exp * 2;
	}

	if (exp < size)
	{
		end = exp;
	}
	else
		end = size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", exp / 2, end);
	return (_binary_searching(array, exp / 2, end, value));
}

/**
 * _binary_searching - searches for a value in an array of integers
 * @array: array of integers
 * @start: beginning of the array
 * @end: end of the array
 * @value: value to search for
 *
 * Return: the index of @value or -1 if not found or if @array is NULL
 */

int _binary_searching(int *array, size_t start, size_t end, int value)
{
	size_t mid, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i < end; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		mid = (start + end) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
	}

	return (-1);
}
