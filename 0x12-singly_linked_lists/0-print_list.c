#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: head of linked list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	const list_t *present;
	size_t n;

	present = h;
	n = 0;

	while (present != NULL)
	{
		printf("[%d] %s\n", present->len, present->str);
		present = present->next;
		n++;
	}

	return (n);
}
