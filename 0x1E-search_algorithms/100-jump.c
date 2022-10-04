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
	size_t i, step, prev;
	step = sqrt(size);

	prev = 0;

	if (array == NULL || size == 0)
		return (-1);

	while (array[step] <= value && step < size)
	{
		prev = step;
		step += sqrt(size);
	}

	for (i = prev; i < size; i++)
	{
        if (array[i] == value)
			return (i);
	}

	return (-1);
}
