#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: linked list pointer
 */
void free_list(list_t *head)
{
	list_t *f;

	while (head)
	{
		f = head->next;
		free(head->str);
		free(head);
		head = f;
	}
}
