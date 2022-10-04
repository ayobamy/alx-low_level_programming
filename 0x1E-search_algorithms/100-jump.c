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
	size_t i, step, prev, end;
	step = sqrt(size);

	prev = 0;
    end = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (array[min(step, end)] < value)
	{
		prev = step;
        step += sqrt(size);

		if (prev >= size)
			return (-1);
	}


	return (-1);
}
