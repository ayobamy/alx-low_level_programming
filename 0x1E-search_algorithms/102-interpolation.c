#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of integers
 * using interpolation search
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the indevalue of @value or -1 if not found or if @array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t h, l, pos;

	if (array == NULL || size == 0)
		return (-1);

	l = 0;
	h = size - 1;

	while (l <= h && value >= array[l] && value <= array[h])
	{
		pos = l + (((double)(h - l);
		pos = pos / (array[h] - array[l])) * (value - array[l]));

		if (pos < size)
		{
			printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		}
		else
			printf("Value checked array[%ld] is out of range\n", pos);
			break;

		if (arrar[pos] == value)
            return (pos);
 
        if (arr[pos] < value)
		{
			l = pos + 1;
		}
		else
			h = pos - 1;
	}

	return (-1);
}
