#include "lists.h"

/**
 * free_dlistint -> frees a doubly linked list
 * @head: pointer to the head of the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last_node = head;
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (last_node != NULL)
	{
		temp = last_node;
		last_node = last_node->next;
		free(temp);
	}
}
