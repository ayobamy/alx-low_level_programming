#include "search_algos.h"

/**
 * advanced_binary - searches for a value in an array of integers
 * using advance binary search
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the index of @value or -1 if not found or if @array is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
	{
		return (-1);
	}
	return (recursive_binary_search(array, 0, size - 1, value));
}

/**
 * recursive_binary_search - searches for a value in an array of integers
 * using recursive binary search
 * @array: array of integers
 * @start: start of the array
 * @end: end of the array
 * @value: value to search for
 *
 * Return: the index of @value or -1 if not found or if @array is NULL
 */

int recursive_binary_search(int *array, size_t start, size_t end, int value)
{
	size_t x, mid;

	if (start > end)
		return (-1);

	printf("Searching in array: ");
	for (x = start; x < end; x++)
	{
		printf("%d, ", array[x]);
	}
	printf("%d\n", array[x]);

	mid = start + (end - start) / 2;

	if ((array[mid] == value) && (mid == start || array[mid - 1] != value))
		return (mid);

	if (array[mid] < value)
		return (recursive_binary_search(array, mid + 1, end, value));
	else
		return (recursive_binary_search(array, start, mid, value));
}
