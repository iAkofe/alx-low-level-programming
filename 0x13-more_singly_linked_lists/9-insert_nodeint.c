#include "lists.h"

/**
 * insert_nodeint_at_index -> funct that inserts a node at
 * a given position (idx)
 * @head: pointer to the head node
 * @idx: index position to add the new node
 * @n: integer data for the new node
 * Return: returns the address for the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp;
	listint_t *node = (*head);
	unsigned int count = 0;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free((*head));
		return (NULL);
	}
	if ((*head) != NULL && idx == 0)
	{
		new_node->n = n;
		new_node->next = (*head);
		(*head) = new_node;
		return (new_node);
	}
	while (node != NULL && count < idx)
	{
		temp = node;
		node = node->next;
		count++;
	}
	if (count == idx)
	{
		new_node->n = n;
		new_node->next = node;
		temp->next = new_node;
		return (new_node);
	}
	else
		return (NULL);
}
