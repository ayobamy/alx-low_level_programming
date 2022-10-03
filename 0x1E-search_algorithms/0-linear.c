#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: array of integers
 * @size: size of the array
 * @value: value to search for
 *
 * Return: the index of @value or -1 if not found or if @array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	// delcare a variable of size_t to loop the array
	size_t i;

	// check if the array is empty(NULL)
	if (array == NULL)
	{
		return -1;
	}

	// loop through the array sequentially and compare them
	for (i = 0; i < size; i++) 
	{
		// print out the value at each index when comparing
		printf("Value checked array[%ld] = %d\n", i, array[i]);

		// check if the array is equal to the value at index i
		if (array[i] == value)
		{
			return i;
		}
	}

	return (-1);
}
