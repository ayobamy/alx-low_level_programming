#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the index of @value or -1 if not found or if @array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	size_t start, end, mid, i;

	start = 0;
	end = size - 1;

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
