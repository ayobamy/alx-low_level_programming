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
    int start;
    int end;
    int mid;

    start = 0;
    end = end - 1;

    while (start <= end)
    {
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
