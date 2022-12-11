#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a DLL
 * @h: pointer to the head of the linked list
 * Return: returns the number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
