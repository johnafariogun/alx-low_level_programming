#include "lists.h"
/**
 * listint_len - lists the number of elements in a linked list
 * @h: linked list
 * Return: numbe of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
