#include "lists.h"
/**
 * free_listint2 - frees a linked list from memory and sets the pointer to NULL
 *
 * @head: the pointer to the head of the linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *f;

	if (head == NULL)
		return;

	while (*head)
	{
		f = (*head)->next;
		free(*head);
		*head = f;
	}
	head = NULL;
}
