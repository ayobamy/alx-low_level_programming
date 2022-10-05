#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the index of @value or -1 if not found or if @array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	size_t i, step, shift, l;

	step = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);

	i = shift = 0;

	while (shift < size && array[shift] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", shift, array[shift]);
		i = shift;
		shift += step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", i, shift);

	if (shift >= size)
		shift = size - 1;

	for (; i < shift && array[i] < value; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);


	for (l = 0; l < size; l++)
	{
		if (array[l] == value)
			return (l);
	}

	return (-1);
}
