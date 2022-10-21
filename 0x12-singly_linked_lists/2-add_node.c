#include "lists.h"

/**
 * add_node -> adds a new node to a list
 * @head: pointer to address of head node
 * @str: string to be duplicated
 * Return: address of the new node or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
