#include "lists.h"

/**
 * add_dnodeint_end - funct to add node at the end of the DLL
 * @head: pointer to the head of the list
 * @n: integer value of the new node
 * Return: returns address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last_node = *head;

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		new_node->next = *head;
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;
	new_node->next = NULL;
	new_node->prev = last_node;
	last_node->next = new_node;
	return (new_node);
}
