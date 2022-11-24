#include "lists.h"
/**
 * free_listint - frees a linked list from memory
 *
 * @head: the pointer to the head of the linked list
 */
void free_listint(listint_t *head)
{
	listint_t *f;

	while (head)
	{
		f = head->next;
		free(head);
		head = f;
	}
}
