#include "lists.h"
/**
 * get_dnodeint_at_index - gess the node at a specific index
 * @head: pointer to the head of the linked list
 * @index: the index it is located
 * Return: the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);

	for (; index != 0; index--)
	{
		head = head->next;
	}
	return (head);
}
