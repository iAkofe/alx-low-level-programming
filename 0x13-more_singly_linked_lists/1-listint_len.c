#include "lists.h"

/**
 * listint_len -> computes the number of elements in a list
 * @h: pointer to the head node
 * Return: returns number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
