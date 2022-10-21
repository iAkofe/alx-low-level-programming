#include "lists.h"

/**
 * free_list -> frees a linked list
 * @head: pointer to node head
 * Return: returns nothing
 */

void free_list(list_t *head)
{
	list_t *temp = head;

	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
