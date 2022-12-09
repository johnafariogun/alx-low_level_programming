#include "lists.h"
/**
 * free_dlistint - frees the dlistint_t list
 *
 * @head: pointer to the head of the doubly linked list
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
