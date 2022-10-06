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
	size_t h, l, p;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (h >= l)
	{
		p = l + (((double)(h - l) / (array[h] - array[l])) * (value - array[l]));

		if (p > size)
		{
			printf("Value checked array[%ld] is out of range\n", p);
			break;
		}
		else
			printf("Value checked array[%ld] = [%d]\n", p, array[p]);

		if (array[p] == value)
			return (p);

		if (array[p] < value)
		{
			l = p + 1;
		}
		else
			h = p - 1;
	}

	return (-1);
}
