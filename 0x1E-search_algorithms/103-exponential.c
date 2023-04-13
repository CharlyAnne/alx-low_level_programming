#include <stdio.h>
#include "search_algos.h"

int binary_search_helper(int *array, int value, size_t left, size_t right);
size_t min(size_t a, size_t b);

/**
 * min - returns the minimum of two size_t values
 * @a: first value
 * @b: second value
 *
 * Return: 'a' if lower or equal to 'b', else 'b'
*/

size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - function searches fr a value in an integer array
 * using a binary search algorithm (modified from 'binary_search'
 * @array: a pointer to the first element of the array to search
 * @value: value to search for
 * @left: the starting index
 * @right: the ending index
 *
 * Return: insex containing 'value', or -1 if 'value not found or if
 * 'array' is NULL
*/

int binary_search_helper(int *array, int value, size_t left, size_t right)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in arrray: ");
		for (i = left; i <= right; i++)
			printf("%i%s", array[i], i == right ? "\n" : ", ");
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - function searches for a value in a sorted array of
 * of integers using the exponential search algorithm.
 * @array: a pointer to the first element of the array to searched in
 * @size: number of elements in the array
 * @value: is the value to search for
 *
 * Return: the first index where 'value' is located or -1 if not found
 * or 'array' is NULL
*/

int exponential_search(int *array, size_t size, int value)
{
	size_t left, right, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound,
				array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = min(bound, size - 1);

	/* this will generate 'found' message even if array[right] < value */
	printf("Value found between indexes [%lu] and [%lu]\n", left, right);
	return (binary_search_helper(array, value, left, right));
}
