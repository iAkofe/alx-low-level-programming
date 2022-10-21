#include "lists.h"

/**
 * add_node_end -> adds a node to the end of list
 * @head: pointer to head node
 * @str: string to be duplicated
 * Return: returns address to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *prev_node;
	char *string;
	unsigned int n = 0;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	string = strdup(str);
	if (string == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (string[n])
		n++;
	new_node->str = string;
	new_node->len = n;
	new_node->next = NULL;

	prev_node = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (prev_node->next != NULL)
	{
		prev_node = prev_node->next;
	}
	prev_node->next = new_node;
	return (new_node);
}
