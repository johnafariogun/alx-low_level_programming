#include "lists.h"
/**
 * dlistint_len - prints the length of a doubly linked list
 * @h: head of the linked list
 * Return: number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; h = h->next, i++)
		;
	return (i);
}
