#include "lists.h"

/**
 * get_dnodeint_at_index - funct to get the node at a idx
 * @head: pointer to head of dll
 * @index: 0-based index to node
 * Return: returns pointer to node or NULL if node does not exist
 *
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node = head;

	if (head == NULL)
		return (NULL);
	while (node != NULL)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}
	return (NULL);
}
