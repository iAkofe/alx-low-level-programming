#include "lists.h"

/**
 * list_len -> finds the number of elements in a list
 * @h: pointer for head mode
 * Return: returns number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
